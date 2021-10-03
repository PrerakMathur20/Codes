#include <bits/stdc++.h>

#define get cin>> 
//#define print cout<<
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

template <typename... T>
void read(T &...args)
{
   ((cin >> args), ...);
}

template <typename... T>
void print(T &...args)
{
   ((cout << args << ' '), ...);
   cout << endl;
}

int code(){

    string s;
    read(s);

    int n = s.length();

    fi(0,n){
        if(s[i] == '0') s[i] = '5';
    }

    print(s);

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