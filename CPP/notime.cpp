#include <bits/stdc++.h>

using namespace std;

int main() {

	int n, h, x;
	cin >> n >> h >> x;

	vector<int> t(n);
	for (int i = 0; i < n; i++) {
		cin >> t[i];
	}
	int check = 0;
	for (int i = 0; i < n; i++) {

		if (x + t[i] >= h) {
			check++;
			break;
		}
	}
	if(check==0) cout << "NO";
    else cout << "YES";
	return 0;
}