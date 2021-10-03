#include <bits/stdc++.h>

using namespace std;

int code(){
		string s;
		cin >> s;
		int count = 0;
		int out = 0;
        int x = s.size();
		for (int i = 0; i < x; i++) {
			if (s[i] == '1') {
				out++;
		    } 
            else {
				if (out >= 1) {
					count++;
				}
				out = 0;
			}
		}

    if(out > 0) cout << count + 1 <<"\n";
    else cout << count << "\n";
    return 0;
}

int main() {

	int t;
	cin >> t;
	while (t>0) {
        code();
    t--;
	}
	return 0;
}