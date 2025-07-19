#include <iostream>
#include <vector>
using namespace std;

int main(){

    vector<string> d;
    string s;
    int p_count = 0;
    int n;
    int max_sunny_days = 0;
    int left = 0;

    cin>>n;
    for (int i = 0; i < n; i++) {
        cin >> s;
        d.push_back(s);

    }   

    for (int right = 0; right < n; right++){
        if (d[right] == "P"){
            p_count += 1;
        }
    

        while (p_count > 1){
            if (d[left] == "P"){
                p_count -= 1;
            }
            left += 1;
        }

        max_sunny_days = max(max_sunny_days, right - left + 1);
    }
    

    if (p_count == 0){
        max_sunny_days -= 1;
    }

    cout << max_sunny_days;
}
