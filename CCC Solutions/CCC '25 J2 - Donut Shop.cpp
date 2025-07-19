#include <iostream>
using namespace std;

int main (int argc, char *argv[]) {
  int D, E, Q;
  char S;

  cin>> D >> E;
  for(int i=0;i<E;i++) {
    cin >> S >> Q;
    if (S == '+') {
      D += Q;
    }
    else {
      D -= Q;
    }
  }
  cout << D << endl;
  return 0;
}
