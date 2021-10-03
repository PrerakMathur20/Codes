#include <bits/stdc++.h>
using namespace std;

int solve() {
  int i,n;
  cin >> n;
  int a[n];
  for (int i = 0; i < n; i++)
    cin >> a[i];
  int sum = 0;
  for(int i=0; i<n; i++){
    int x;
    cin >> x;
for(int i=0; i<x; i++){
      int y;
      cin >> y;
      sum += y;
    }
    sum -= (x - 1) * a[i];
  }
  cout << sum << "\n";
  return 0;
}
int main() {
  int t;
  t = 1;
  cin>>t;
  while (t--) {
    solve();
  }
}