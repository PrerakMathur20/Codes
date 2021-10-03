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

    ll int n,a,b;
    get n>>a>>b;

    ll int sa = 0, an = 0;

    while(n--){
        string temp;
        get temp;

        if(temp[0] == 'E' || temp[0] == 'Q' || temp[0] == 'U' || temp[0] == 'I' || temp[0] == 'N' || temp[0] == 'O' || temp[0] == 'X'){
            sa += a;
        }

        else{
            an += b;
        }
    }

    if(sa == an) print "DRAW\n";
    else if(sa > an) print "SARTHAK\n";
    else print "ANURADHA\n";

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