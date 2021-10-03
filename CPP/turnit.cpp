#include <bits/stdc++.h>

#define get cin>> 
#define print cout<<
#define fi(s,n) for(int i = s; i < n; i++)
#define fj(s,n) for(int j = s; j < n; j++)
#define fk(s,n) for(int k = s; k < n; k++)
#define inarr(s,n,arr) for (int i = s; i < n; i++) cin>>arr[i];
#define outarr(s,n,arr) for (int i = s; i < n; i++) cout<<arr[i];
#define ll long long
using namespace std;

int code(){
    ll int u,v,a,s;
    get u>>v>>a>>s;

    ll int dist;
    dist = (u*u) - 2 * (a*s);

    if(dist <= (v*v)){
        print "Yes\n";
    }
    else{
        print "No\n";
    }

return 0;
}

int main() {
    ios::sync_with_stdio(false);
	cin.tie(0);
    int t;
    get t;
    while(t>0){
        code();
        t--;
    }
    return 0;
}