#include <iostream>
#include <algorithm> // для std::min

using namespace std;

int main() {
    int x = 10, y = 3;
    cout << min(x = 15, x + y) << endl;
    return 0;
}