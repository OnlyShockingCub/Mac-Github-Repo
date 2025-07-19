#include <iostream>
using namespace std;

int main (int argc, char *argv[]) {
  int N, C, P;
  cin >> N >> C >> P;
  
  if (C * P>=N) {
    cout << "yes" << endl;
  }
  else {
    cout << "no" << endl;
  }
  return 0;
}
