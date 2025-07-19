#include <iostream>
using namespace std;

int main() {
    int R, G, B;
    int result = 0;

    cin >> R;
    cin >> G;
    cin >> B;

    result = R * 3 + G * 4 + B * 5;

    cout << result << endl;

    return 0;
}
