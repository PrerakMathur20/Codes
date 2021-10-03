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
    ll int n;
    get n;

    ll int mul = n / 4;
    ll int rem = n % 4;

    ll int out = 0;

    if(n == 0) out = 0;
    else if(n == 1) out = 20;
    else if(n == 2) out = 36;
    else if(n == 3) out = 51;

    else{
 
        if(rem == 0){
            out = 4 * 11 * mul;
            out += 16;
        }
        else if(rem == 1){
            out = 4 * 11 * mul;
            out += 32;
        }
        else if(rem == 2){
            out = 4 * 11 * mul;
            out += 44 ;
        }
        else if(rem == 3){
            out = 4 * 11 * mul;
            out += 55;
        }
    }

 print out << "\n";

 return 0;
}

int main() {
    ll int t;
    get t;
    while(t>0){
        code();
        t--;
    }
    return 0;
}
