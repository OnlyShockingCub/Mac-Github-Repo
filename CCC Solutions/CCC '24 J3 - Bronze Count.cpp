#include <iostream>
#include <vector>

using namespace std;

int main(){
  vector<int> scores(76, 0);

  int N;
  cin >> N;

  for (int i = 0; i < N; i++){
    int V;
    cin >> V;
    scores[V]++;
  }

  int counter = 0;
  
  for (int i = 75; i >= 0; i--){
    if (scores[i] != 0 && counter++ == 2){
      cout << i << " " << scores[i];
      break;
    }
  }
  
  return 0;
}
