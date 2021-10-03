#include <bits/stdc++.h>

#define get cin>> 
#define print cout<<
#define int long long
#define ld long double
#define rep(i, k, n) for (  int i = k; i < n; i++)
#define rept(i, k, n) for (auto i = k; i != n; ++i)
#define drep(i, k, n) for (  int i = k; i >= n; i--)
#define fi(s,n) for(  int i = s; i < n; i++)
#define fj(s,n) for(  int j = s; j < n; j++)
#define fk(s,n) for(  int k = s; k < n; k++)
#define inarr(s,n,arr) for (  int i = s; i < n; i++) cin>>arr[i];
#define outarr(s,n,arr) for (  int i = s; i < n; i++) cout<<arr[i]<<' ';
using namespace std;

int code(){
      int n;
    get n;

      int sum = 0;
      int max= -1000000007;
      int arr[n];

    fi(0,n){
          int temp;
        get temp;
        arr[i] = temp;

        sum += temp;

        if(temp > max) max = temp;
    }

    if((sum - max) >= max) print sum << "\n";
    else{
       print 2*max;
    }
    
return 0;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    //get t;
    while(t>0){
        code();
        t--;
    }
    return 0;
}