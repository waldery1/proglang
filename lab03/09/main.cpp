#include <iostream>

int main() {
    int x = 1, y = 1, z = 1;
    bool result = (x == y == z);
    std::cout << std::boolalpha << result << std::endl;
    return 0;
}
