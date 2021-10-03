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
const int mod = 1000000007;

int code(){

    ll int n,m;
    get n >> m;
    ll int min = 1000000000001;
    ll int sum=0 , count = 0;

    fi(0,n*m){
        ll int temp;
        get temp;
        
        sum += abs(temp);

        if(temp < 0) count++;

        if(abs(temp) < min) min = abs(temp);
        
    }

    if(count % 2 == 0) print sum <<"\n";
    else print (sum - (2 * min)) << "\n";

return 0;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    get t;
    while(t>0){
        code();
        t--;
    }
    return 0;
}