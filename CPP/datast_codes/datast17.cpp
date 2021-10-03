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

int code(){

    vector <ll int> vec;
	stack <ll int> st;
	ll int inp,i,n;
	ll int max_xor=0,min_xor;
	get n;
	for(ll int i=0;i<n;i++)
	{
		get inp;
		vec.push_back(inp);
	}
	for(ll int i=0;i<n;i++)
	{
		while(!st.empty())
		{
			min_xor=vec[i]^st.top();
			if(min_xor>max_xor)
			max_xor=min_xor;
			if(vec[i]<st.top())
			st.pop();
			else
			break;
		}
		st.push(vec[i]);
	}
	print max_xor<<endl;

return 0;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    //get t;
    while(t>0){
        code();
        t--;
    }
    return 0;
}