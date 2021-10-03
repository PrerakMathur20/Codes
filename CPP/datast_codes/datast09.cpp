#include <bits/stdc++.h>
using namespace std;
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

int main()
{
	ll int n;
    get n;
	map<string, ll int>mp;
	while(n--)
	{
		string temp;
        get temp;
		mp[temp]++;
	}

	ll int a;
    get a;

	while(a--)
	{
		string temp;
        get temp;
		print mp[temp] << endl;
	}


return 0;
}