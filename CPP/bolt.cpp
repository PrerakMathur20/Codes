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
    double k1, k2, k3, v;
    get k1 >> k2 >> k3 >> v;

    double out = k1 * k2 * k3 * v;
    out = 100 / out;
    out = round(out * 100) / 100;
    

    if(out < 9.58) print "YES\n";
    else print "NO\n";

    //print out <<"\n\n";

return 0;
}

int main() {
    int t;
    get t;
    while(t>0){
        code();
        t--;
    }
    return 0;
}