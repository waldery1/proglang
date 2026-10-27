#include <iostream>

using namespace std;

int main() {
    int x = 5, y = 2, z = 10;
    z += 2 * ++x + 3 * y++;
    cout << "Increment version x: " << x << ", y: " << y << ", z: " << z << endl;
    return 0;
}