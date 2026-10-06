#include <iostream>

int main() {
    int dec = 15;
    int oct = 017;
    int bin = 0b1111;
    int hex = 0xF;

    unsigned int u_val = 100U;
    long l_val = 200L;
    long long ll_val = 300LL;
    unsigned long long ull_val = 0xA0ULL;

    std::cout << dec << " " << oct << " " << bin << " " << hex << std::endl;
    std::cout << u_val << " " << l_val << " " << ll_val << " " << ull_val << std::endl;

    return 0;
}
