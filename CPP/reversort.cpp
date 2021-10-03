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


int ulta(vector<int> &vec){

    ll int cost=0;
    fi(0, vec.size() - 1){
        int x = min_element(vec.begin() + i, vec.end()) - vec.begin();
        reverse(vec.begin() + i, vec.begin() + x + 1);
        cost = cost + x - i + 1;
    }

    return cost;


}

int code(){

    ll int n;
    get n;

    vector<int> vec = vector<int>();

    fi(0,n){
        ll int inp;
        get inp;

        vec.push_back(inp);
    }
    print ulta(vec) <<"\n";


    return 0;
}


int main() {
    ll int t;
    get t;
    fi(0,t){
        print "Case #" << i+1<<": ";
        code();
    }
    return 0;
}