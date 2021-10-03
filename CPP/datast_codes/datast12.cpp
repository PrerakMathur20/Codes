#include <bits/stdc++.h>
#define ll long long
using namespace std;


void code() {

        ll int n ;
        cin >> n ;

        if (n==0){
            cout << 0 << endl;
            return;
        }
        if (n==1){
            cout << 1 << endl;
            return;
        }
        vector<ll int> dist(n+1,0);
        queue<ll int> q;
        q.push(n) ;
        dist[n] = 1 ;
        while (1){
            ll int element = q.front(); 
            q.pop();
            if(element == 2){
                cout << dist[2] + 1 << endl;
                break ;
            }
            if (dist[element-1] == 0 ){
                dist [element-1] = dist[element]+1;
                q.push(element-1);
            }
            for (int i=2; i*i<=element; i++){
                if (element%i == 0){
                    ll int maxfrac = element/i; 
                    if (dist[maxfrac] == 0) dist [maxfrac] = dist[element] + 1, q.push(maxfrac);
                }
            }
        }
    return;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>> t;
    while(t>0){
        code();
        t--;
    }
    return 0;
}