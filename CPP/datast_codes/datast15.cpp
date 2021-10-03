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

    ll int g;
    get g;    
    for(int k = 0; k < g; k++){
        ll int n,m,x;
        get n >> m >> x;
        
        vector<ll int> a(n);
        for(ll int l = 0; l <n; l++){
           get  a[l];
        }
        
        vector<ll int> b(m);
        for(ll int b_i =0; b_i <m; b_i++){
           get b[b_i];
        }
        
        ll int tot=0,sum=0,temp=0,i=0,j=0;        
        
        while(i<n && tot+a[i]<=x){  
            tot+=a[i];
            i++;
        }
        sum=i;        
       
        while(j<m && i>=0){ 
            tot+=b[j];             
            j++;
            while(tot>x && i>0){
                i--;
                tot-=a[i];
            }
            if(tot<=x && i+j>sum)
                sum=i+j;
        }
        print sum<<"\n";
    } 

return 0;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    //get t;
    while(t>0){
        code();
        t--;
    }
    return 0;
}