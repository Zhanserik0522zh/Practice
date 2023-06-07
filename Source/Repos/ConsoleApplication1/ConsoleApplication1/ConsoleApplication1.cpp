#include <iostream>

using namespace std;

int fb(int a) {
    if (a == 0)
        return 0;
    if (a == 1 || a == 2)
        return 1;
    return fb(a - 1) + fb(a - 2);
}

int main() {
    int a;
    cin >> a;
    cout << fb(a);
    return 0;
}
