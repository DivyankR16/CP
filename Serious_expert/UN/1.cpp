#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <sstream>
#include <algorithm>

using namespace std;

// Structure to store the account details
struct Account
{
    int balance;
    unordered_set<string> banks;
};

// Function to process commands
string processCommands(const vector<string> &commands)
{
    unordered_map<string, Account> accounts; // Maps user name to their account details
    vector<pair<int, string>> operations;    // Holds operations to execute in chronological order
    vector<string> results(commands.size()); // Store results maintaining the input order

    // Helper lambda to split a string by a delimiter
    auto split = [](const string &str, char delimiter)
    {
        vector<string> tokens;
        stringstream ss(str);
        string token;
        while (getline(ss, token, delimiter))
        {
            tokens.push_back(token);
        }
        return tokens;
    };

    // Store each command with its index
    vector<pair<int, int>> indexedOps; // <timestamp, original index>

    // Parse commands and store operations
    for (int i = 0; i < commands.size(); ++i)
    {
        vector<string> parts = split(commands[i], ',');
        string type = parts[0];

        if (type == "INIT")
        {
            string name = parts[1];
            int balance = stoi(parts[2]);
            unordered_set<string> banks(parts.begin() + 3, parts.end());

            // Initialize account details
            accounts[name] = {balance, banks};
        }
        else
        {
            int timestamp = stoi(parts[1]);
            indexedOps.push_back({timestamp, i}); // Store the timestamp and index
        }
    }

    // Sort operations by timestamp
    sort(indexedOps.begin(), indexedOps.end());

    // Process each operation in chronological order
    for (const auto &op : indexedOps)
    {
        int index = op.second; // Original index of the command
        vector<string> parts = split(commands[index], ',');
        string type = parts[0];

        if (type == "POST")
        {
            string sender = parts[2];
            string receiver = parts[3];
            int amount = stoi(parts[4]);

            // Check if sender and receiver exist
            if (accounts.find(sender) == accounts.end() || accounts.find(receiver) == accounts.end())
            {
                results[index] = "FAILURE";
                continue;
            }

            // Handle bank transactions
            bool senderIsBank = accounts[sender].banks.size() == 0;
            bool receiverIsBank = accounts[receiver].banks.size() == 0;

            if (senderIsBank && receiverIsBank)
            {
                results[index] = "FAILURE";
                continue;
            }

            if (senderIsBank)
            {
                if (accounts[receiver].banks.find(sender) == accounts[receiver].banks.end())
                {
                    results[index] = "FAILURE";
                }
                else
                {
                    accounts[receiver].balance += amount;
                    results[index] = "SUCCESS";
                }
                continue;
            }

            if (receiverIsBank)
            {
                if (accounts[sender].banks.find(receiver) == accounts[sender].banks.end())
                {
                    results[index] = "FAILURE";
                }
                else if (accounts[sender].balance < amount)
                {
                    results[index] = "FAILURE";
                }
                else
                {
                    accounts[sender].balance -= amount;
                    results[index] = "SUCCESS";
                }
                continue;
            }

            // Handle user-to-user transactions
            if (accounts[sender].balance < amount)
            {
                results[index] = "FAILURE";
            }
            else
            {
                accounts[sender].balance -= amount;
                accounts[receiver].balance += amount;
                results[index] = "SUCCESS";
            }
        }
        else if (type == "GET")
        {
            string name = parts[2];

            if (accounts.find(name) == accounts.end())
            {
                results[index] = "FAILURE";
            }
            else
            {
                results[index] = to_string(accounts[name].balance);
            }
        }
    }

    // Join results with commas
    string resultStr;
    for (int i = 0; i < results.size(); ++i)
    {
        if (!results[i].empty()) // Only add non-empty results
        {
            if (!resultStr.empty())
            {
                resultStr += ",";
            }
            resultStr += results[i];
        }
    }

    return resultStr;
}

int main()
{
    // Sample test cases
    vector<string> commands1 = {
        "INIT,Alice,100,Chase,Wells Fargo",
        "INIT,Bob,56,Bank of America,Chase,Ally",
        "INIT,Charles,0,Bank of America",
        "POST,212,Alice,Bob,50",
        "GET,211,Alice",
        "POST,213,Alice,Charles,50",
        "GET,214,Alice",
        "POST,301,Charles,Bob,100",
        "POST,302,Ally,Charles,10",
        "POST,305,Kate,Alice,50",
        "GET,401,Charles",
        "POST,306,Alice,Chase,50",
    };

    // Process commands and get results
    string result1 = processCommands(commands1);
    cout << result1 << endl; // Expected output: SUCCESS,50,SUCCESS,90,FAILURE,FAILURE,FAILURE,0,FAILURE

    // Add more test cases here...
    vector<string> commands2 = {
        "INIT,Alice,100,Chase,Wells Fargo",
        "POST,101,Alice,Charlie,20",
        "GET,102,Charlie"};

    string result2 = processCommands(commands2);
    cout << result2 << endl; // Expected output: FAILURE,FAILURE

    return 0;
}
