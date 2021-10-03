#include <bits/stdc++.h>

#define get cin>> 
#define print cout<<
#define ll long long
#define ld long double
#define rep(i, k, n) for (ll int i = k; i < n; i++)
#define rept(i, k, n) for (auto i = k; i != n; ++i)
#define drep(i, k, n) for (ll int i = k; i >= n; i--)
#define fi(s,n) for(ll int i = s; i < n; i++)
#define fj(s,n) for(ll int j = s; j < n; j++)
#define fk(s,n) for(ll int k = s; k < n; k++)
#define inarr(s,n,arr) for (ll int i = s; i < n; i++) cin>>arr[i];
#define outarr(s,n,arr) for (ll int i = s; i < n; i++) cout<<arr[i]<<' ';
using namespace std;

bool fun(string a, string b){
    if(b.length() > a.length()) return true;
    else return false;
}

ll int count(string s){
    ll int n = s.length();
	ll int C=0, c1 = 0, c2 = 0;
	for (int i = 0; i < n; i++) {
		if (s[i] == 'a')
			c1++;
		if (s[i] == 'b') {
			c2++;
			C += c1;
		}
	}
	return C ;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll int n;
    get n;

    string master = "";

    vector<string> v(n);
    fi(0,n) get v[i];
    sort(v.begin() , v.end());

    fi(0,n){
        master += v[i];
    }

    print count(master) << "\n";

return 0;
}



/*
bool cmp(pair<string, int> a, pair<string, int> b)
{
    if(a.second < b.second) return true;
    else if(a.second == b.second and a.first.length() > b.first.length()) return true;
    return false;
}

void solve()
{
    int n;
    cin>>n;
    vector<pair<string, int>> v(n);
    rep(i,0,n){
        cin>>v[i].first;
        v[i].second = 0;
        for(char c:v[i].first) if(c=='b') v[i].second++;
    }
    sort(all(v), cmp);
}
*/