#include <iostream>
int main() {
    int x = 12;                                  // 二进制 1100
    std::cout << (x & 1) << "\n";                // 判奇偶
    std::cout << (x << 1) << "\n";               // 乘 2
    std::cout << (x >> 1) << "\n";               // 除 2
    std::cout << (x & (x - 1)) << "\n";          // 清掉最低位的 1

    // 手动打印 8 位二进制，看位长什么样
    for (int i = 7; i >= 0; i--) {
        std::cout << ((x >> i) & 1);
    }
    std::cout << "\n";
    return 0;
}