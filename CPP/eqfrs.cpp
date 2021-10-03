#include <bits/stdc++.h>
using namespace std;
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

int source(ll int* arr, int n){
    ll int gcd = 0;
    for (int i = 0; i < n; i++)
        gcd = __gcd(arr[i], gcd);
    return gcd;
}

int code(){
    int N;
    get N;
    ll int arr[N];

    inarr(0,N,arr);
	int n = sizeof(arr) / sizeof(arr[0]);

    cout << source(arr, n) << "\n";

    return 0;
}


int main()
{
    int t;
    get t;

    while(t--){
        code();
    }

	return 0;
}

