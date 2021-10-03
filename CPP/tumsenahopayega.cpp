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

    ll int N,a,b,c,x,y,z;
    get N >> a >> b >> c >> x >> y >> z;

    ll int arr[N];
    arr[0] = x;
    arr[1] = y;
    arr[2] = z;

    fi(3,N+1){
        arr[i] = ((a * arr[i - 1]) % mod + (b * arr[i - 2]) % mod + (c * arr[i - 3]) % mod ) % mod;

    }
    ll out = arr[N] % 1000000007;
    print out <<"\n";

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