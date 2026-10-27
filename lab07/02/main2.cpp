#include <iostream>

using namespace std;

int main() {
    int x = 5, y = 2, z = 10;
    (x = x + 1, z = z + 2 * x + 3 * y, y = y + 1);
    cout << "Comma version x: " << x << ", y: " << y << ", z: " << z << endl;
    return 0;
}