#include <iostream>
#include <cmath>

std::pair<int, int> find_x_and_y(int n) {
    int x = 0, y = 0;
    int m = log10(n) + 1;
    int d = n % 10;
    n /= 10;
    if (d > 4) {
        x = pow(10, m - 1);
        d -= 1;
    }
    y = d;
    for (int i = 1; i < m; i++) {
        d = n % 10;
        n /= 10;
        x = x * 10 + d;
        y = y * 10 + 9 - d;
    }
    return std::make_pair(x, y);
}

int main() {
    int n;
    std::cin >> n;
    std::pair<int, int> result = find_x_and_y(n);
    std::cout << result.first << " " << result.second << std::endl;
    return 0;
}
