#include <bits/stdc++.h>

#pragma GCC target("avx2")
#pragma GCC optimize("O3")
#pragma GCC optimize("unroll-loops")
#define get cin>> 
#define print cout<<
#define ll long long
#define ld long double
#define rep(i, k, n) for (ll int i = k; i < n; i++)
#define rept(i, k, n) for (auto i = k; i != n; ++i)
#define drep(i, k, n) for (ll int i = k; i >= n; i--)
#define fi(s,n) for(long long int i = s; i < n; i++)
#define fj(s,n) for(ll int j = s; j < n; j++)
#define fk(s,n) for(ll int k = s; k < n; k++)
#define inarr(s,n,array) for (ll int i = s; i < n; i++) cin>>array[i];
#define outarr(s,n,array) for (ll int i = s; i < n; i++) cout<<array[i] << " ";
const unsigned int mod = 1000000007;

using namespace std;

void lr(ll int l, ll int r, ll int arr[]){
    unsigned ll sum = 0;

    if(l==0) l++;

    fi(l-1 , r){
    //sum += (arr[i]*arr[i]) % mod;
    sum += ((arr[i] % mod) * (arr[i] % mod)) % mod;
        }

    print sum <<"\n";
}

void cx(ll int c, ll int x, ll int arr[]){
    arr[c-1] = x;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll int n , q;
    get n >>q;

    ll int arr[n];
    inarr(0,n,arr);

    while(q > 0){
        ll int a , b , c;
        get a >> b >> c;

        if(a == 1) lr(b,c,arr);
        else if(a == 2) cx(b,c,arr);
        
        // outarr(0,n,arr);
        // print "\n\n";
        q--;
    }




    return 0;
}