#include <iostream>

namespace Add {
    int f(int a, int b) {
        return a + b;
    }
}

namespace Mul {
    int f(int a, int b) {
        return a * b;
    }
}

int main() {
    std::cout << Add::f(5, 3) << std::endl;

    std::cout << Mul::f(5, 3) << std::endl;

    return 0;
}
