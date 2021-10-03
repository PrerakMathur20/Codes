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
    int n,k;
    string s;

    get n>>k;
    get s;
    int count=0;
    
    fi(0,n){
        if(s[i] == '*'){
            int x = i + 1;
            int len = 1;

            while( x < n && s[x] == '*'){
                len++;
                x++;
            }
            i = x;
            count = max(count , len);
        }
    }

    //print count << "\n";
    //if(count >= k) print "YES\n";
    //else print "NO\n";

    print (count >= k ? "YES\n" : "NO\n");

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