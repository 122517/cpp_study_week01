#include <iostream>
int main() {
    int x = 2147483647;
    std::cout << "x     = " << x << "\n";
    std::cout << "x + 1 = " << x + 1 << "\n";      // 观察结果，抄进日志

    unsigned u = 5;
    std::cout << "u - 10 = " << u - 10 << "\n";    // 观察结果，抄进日志

    double a = 0.1 + 0.2;
    std::cout << (a == 0.3) << "\n";               // 0，为什么？
    return 0;
}