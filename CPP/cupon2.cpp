#include <bits/stdc++.h>

using namespace std;
#define in cin >>
#define out cout <<

int solve() {
  int d, c;
  cin >> d >> c;

  int sum1 = 0;
  int sum2 = 0;


  for(int i = 0; i < 3; i++) {
    int x;
    cin >> x;
    sum1 += x;
  }

  for(int i = 0; i < 3; i++) 
    int x;
    cin >> x;
    sum2 += x;
  }

  int temp = 0;

  if (sum1 >= 150) {
    temp++;
  }
  if (sum2 >= 150) {
    temp++;
  }

  if (temp) {
    if (sum1 + sum2 + c < sum1 + sum2 + temp * d) {
      cout << "YES\n";
      return 0;
    }
  }
  cout << "NO\n";
  return 0;
}

int main(){
  int t;
  t = 1;
  in t;
  while (t--) {
    solve();
  }
}