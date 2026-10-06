#include <iostream>

int main() {
    int x;
    std::cin >> x;
    
    int result = ~x + 1;
    
    std::cout << result << std::endl;
    return 0;
}