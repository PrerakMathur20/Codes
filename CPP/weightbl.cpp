#include <bits/stdc++.h>

#define get cin>> 
#define print cout<<
#define f(s,n) for(int i = s; i < n; i++)
#define inarr(s,n,arr) for (int i = s; i < n; i++) cin>>arr[i];
#define outarr(s,n,arr) for (int i = s; i < n; i++) cout<<arr[i];
#define ll long long
using namespace std;

int code(){
    ll int w1,w2,x1,x2,m;
    cin>>w1>>w2>>x1>>x2>>m;

    ll int net = w2 -w1;

    if(net >= (x1*m) && net <= (x2*m)){
        cout<<"1";
    }
    else cout<<"0";


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