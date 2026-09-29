#include <iostream>

int main() {
    typedef unsigned long long ull;
    ull a = 5000000000ULL;

    auto b = a; 
    decltype(b) c = 10;

    double d = 5.75;
    int e = static_cast<int>(d);

    std::cout << "Size of a: " << sizeof(a) << " bytes" << std::endl;
    std::cout << "Value of e: " << e << std::endl;

    return 0;
}
