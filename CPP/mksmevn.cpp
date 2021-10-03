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
    ll int c=0;
    ll int l[n];
    inarr(0,n,l);

    ll int sum=0;

    fi(0,n){
        sum = sum + l[i];
    }

    if(sum % 2 == 0){
        print "0\n";
    }
    else{
        fi(0,n){
            if(l[i] == 2){
                c = c+1;
                break;
            }
        }
        if(c!=0){
        print "1\n";
        }
        else{
            print "-1\n";
        }
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