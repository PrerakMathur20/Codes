#include <bits/stdc++.h>

#define get cin>> 
#define print cout<<
#define f(s,n) for(int i = s; i < n; i++)
#define inarr(s,n,arr) for (int i = s; i < n; i++) cin>>arr[i];
#define outarr(s,n,arr) for (int i = s; i < n; i++) cout<<arr[i];
#define ll long long int
using namespace std;

int code(){
        ll n , m , x, s=0;
        cin>>n>>m>>x;
        ll a[n][m], b[n][m];

        for(ll i=0; i<m ; i++){
            for(ll j=0; j<n; j++){
                b[j][i]=s++;
             }
        }

        s=0;

        for(ll i=0; i<n ; i++){
            for(ll j=0; j<m; j++){
                a[j][i]=s++;
             }
        }

        cout<<"\nThe 2-D Array is:\n";

        for(int x=0; x<m; x++){
            for(int y=0; y<n; y++){
                cout<<" "<<a[x][y]<<" ";
            }
            cout<<"\n";
        }

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