#include <iostream>

int main() {
    int x = 5, y = 5, z = 10;
    
    bool result = ((x == y) + (x == z) == true);
    
    std::cout << std::boolalpha << result << std::endl;
    
    return 0;
}
