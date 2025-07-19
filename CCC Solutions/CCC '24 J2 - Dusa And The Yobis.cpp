#include <iostream>
using namespace std;

int main() {
    int D;
    cin >> D;

    while (true) {
        int S;
        cin >> S;

        if (D > S) {
            D += S;
        } else {
            cout << D;
            break;
        }
    }

    return 0;
}
