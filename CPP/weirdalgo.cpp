#include <bits/stdc++.h>

#define get cin>> 
#define print cout<<
#define f(s,n) for(int i = s; i < n; i++)
#define inarr(s,n,arr) for (int i = s; i < n; i++) cin>>arr[i];
#define outarr(s,n,arr) for (int i = s; i < n; i++) cout<<arr[i];
#define ll long long
using namespace std;


int main() {
    ll int n;
    get n;
    
    while(n!=1){
        print n<<" ";
        if(n%2 == 0){
            n= n/2;
        }
        else{
            n = (n*3) + 1;
        }
    }
    print 1;
    return 0;
}