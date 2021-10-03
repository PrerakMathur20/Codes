#include <bits/stdc++.h>

#define get cin>> 
#define print cout<<
#define ll long long
using namespace std;

int code(){
    ll n,m,kk;
        cin>>n>>m>>kk;
        double a[n+1][m+1];
        for(ll i=0;i<=n;i++){
            for(ll j=0;j<=m;j++){
                if(i==0 || j==0){
                   a[i][j]=0;
                }
                else{
                    cin>>a[i][j];
                }
            }
        }
        for(ll i=0;i<=n;i++){
            double pre=0;
            for(ll j=0;j<=m;j++){
                a[i][j]+=pre;
                pre=a[i][j];
            }
        }
        for(ll j=0;j<=m;j++){
            double pre=0;
            for(ll i=0;i<=n;i++){
                a[i][j]+=pre;
                pre=a[i][j];
            }
        }
        ll int mini;
        if(n<m){
            mini = n;
        }
        else mini = m;

        ll ans=0;
        for(ll len=1;len<=mini;len++){
            for(ll i=len;i<=n;i++){
                for(ll j=len;j<=m;j++){
                    long double temp = (a[i][j]+a[i-len][j-len]-a[i][j-len]-a[i-len][j])/(len*len);
                    if(temp >= kk){
                        ans++;
                    }
                }
            }
            
        }
        cout<<ans<<endl;

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