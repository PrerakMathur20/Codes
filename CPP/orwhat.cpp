#include <bits/stdc++.h>

using namespace std;
#define get cin>> 
#define print cout<<
#define ll long long
#define ld long double
#define rep(i, k, n) for (ll int i = k; i < n; i++)
#define rept(i, k, n) for (auto i = k; i != n; ++i)
#define drep(i, k, n) for (ll int i = k; i >= n; i--)
#define fi(s,n) for(ll int i = s; i < n; i++)
#define fj(s,n) for(ll int j = s; j < n; j++)
#define fk(s,n) for(ll int k = s; k < n; k++)
#define drep(i, k, n) for (int i = k; i >= n; i--)
#define inarr(s,n,arr) for (ll int i = s; i < n; i++) cin>>arr[i];
#define outarr(s,n,arr) for (ll int i = s; i < n; i++) cout<<arr[i]<<' ';

/*
int code(){
    ll int n,k;
    get n>>k;

    ll int arr[n];
    inarr(0,n,arr);

    ll int out = 0;

    fi(1,n){
        if((arr[i] | arr[i-1]) >= k) out++;
    }

    if(out == 0) print "-1";
    else print out+1;

    print "\n";

return 0;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll int t;
    get t;
    while(t>0){
        code();
        t--;
    }
    return 0;
}


#include <iostream>
using namespace std;
 
int smallestSubWithSum(ll int arr[],ll int n, ll int x)
{
    int curr_sum = 0, min_len = n + 1;
 
    int start = 0, end = 0;
    while (end < n) {
        // Keep adding array elements while current sum
        // is smaller than or equal to x
        while (curr_sum <= x && end < n)
            curr_sum += arr[end++];
 
        // If current sum becomes greater than x.
        while (curr_sum > x && start < n) {
            // Update minimum length if needed
            if (end - start < min_len)
                min_len = end - start;
 
            // remove starting elements
            curr_sum -= arr[start++];
        }
    }
    return min_len;
}
 

int main()
{
    ll int n,k;
    get n>>k;

    ll int arr[n];
    inarr(0,n,arr);
    ll int x = k;

    int res1 = smallestSubWithSum(arr, n, x);
    (res1 == n + 1) ? cout << "Not possible\n"
                     : cout << res1 << endl;
 
    
 
    return 0;
}
*/
struct comp {
    bool operator()(int const &i, int const &j) const {
        return i > j;
    }
};
// C++ program to find OR of all the sub-arrays
int findMaxOR(int arr[], int n)
{ 
    sort(arr, arr + n, comp()); 

    int maxOR = arr[0]; 

    int count = 1; 

    for (int i = 1; i < n; i++) { 

        if ((maxOR | arr[i]) < maxOR) { 
            maxOR = maxOR | arr[i]; 
            count++; 
        } 

    }
    return count; 

}

int code(){
    ll int n,k;
    get n>>k;

    int arr[n];
    inarr(0,n,arr);

    cout << findMaxOR(arr, k);
    print "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll int t;
    get t;
    while(t>0){
        code();
        t--;
    }
    return 0;
}


