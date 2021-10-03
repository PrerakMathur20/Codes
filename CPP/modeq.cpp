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
#define outarr(s,n,arr) for (ll int i = s; i < n; i++) cout<<arr[i];
using namespace std;

int code(){

    ll int n,m;
    get n>>m;

    ll int out = 0;

    vector<ll int> vec(n+1,1);
    for(int i = 2; i <= n; i++ ){

        ll int temp = m % i;
        out += vec[temp];

        for(int j = temp; j <= n; j=j+i) vec[j]++;

    }

    print out <<"\n";

return 0;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    get t;

    if(t > 100) return 0;

    while(t>0){
        code();
        t--;
    }
    return 0;
}