#include <bits/stdc++.h>

#define get cin>> 
#define print cout<<
#define f(s,n) for(int i = s; i < n; i++)
#define inarr(s,n,arr) for (int i = s; i < n; i++) cin>>arr[i];
#define outarr(s,n,arr) for (int i = s; i < n; i++) cout<<arr[i];
#define ll long long
using namespace std;

int code(){
    string s;
    get s;
    int l = s.size();

    for(int i =0; i < l; i++){
        if(s[i] == 'p' && s[i+1] == 'a' && s[i+2] == 'r' && s[i+3] == 't' && s[i+4] == 'y'){
            
            s[i] = 'p';
            s[i+1] = 'a';
            s[i+2] = 'w';
            s[i+3] = 'r';
            s[i+4] = 'i';
        }
    }

    cout<<s<<"\n";
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