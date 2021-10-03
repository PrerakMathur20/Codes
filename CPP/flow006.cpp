#include <bits/stdc++.h>

#define get cin>> 
#define print cout<<
#define f(i,s,n)(int i = s; i < n; i++)
#define inarr(i,s,n,arr) for (int i = s; i < n; i++) cin>>arr[i];
#define outarr(i,s,n,arr) for (int i = s; i < n; i++) cout<<arr[i];
using namespace std;


 int code(){
    int n;
    get n;
    int sum = 0;
    while (n != 0) {
         sum = sum + n % 10;
        n = n / 10;
    }
    print sum;
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