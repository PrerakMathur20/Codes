#include <bits/stdc++.h>
#define ll long long
using namespace std;


int main() {
    queue<int>q;
    ll int n;
    cin>> n;
    while(n--){
        ll int temp;
        cin>>temp;
        if(temp==1){
            cin>>temp;
            q.push(temp);
            
        }
        else if(temp==2){q.pop();}
        else{
            cout<<q.front()<<endl;
        }
    }
    return 0;
}