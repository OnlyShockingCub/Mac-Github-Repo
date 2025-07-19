#include <iostream>
#include <string>
#include <set>

using namespace std;

int main() {
    string a, b;
    cin >> a >> b;

    set<char> set_a(a.begin(), a.end());
    set<char> set_b(b.begin(), b.end());

    string unique_a, unique_b;
    
    for (char c : set_a) {
        if (set_b.find(c) == set_b.end()) {
            unique_a += c;
        }
    }
    
    for (char c : set_b) {
        if (set_a.find(c) == set_a.end()) {
            unique_b += c;
        }
    }

    if (a.length() == b.length()) {
        cout << unique_a[0] << " " << unique_b[0] << "\n";
        cout << '-' << "\n";
    } else {
        char quiet = unique_a[0];
        char silly = unique_a[1];
        char wrong_letter = unique_b[0];
        
        string modified_a = "";
        
        for (char ch : a) {
            if (ch == quiet) {
                continue;
            }
            if (ch == silly) {
                modified_a += wrong_letter;
            } else {
                modified_a += ch;
            }
        }

        if (modified_a != b) {
            swap(quiet, silly);
        }

        cout << silly << " " << wrong_letter << "\n";
        cout << quiet << "\n";
    }

    return 0;
}

