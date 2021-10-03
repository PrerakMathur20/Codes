#include <bits/stdc++.h>

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
#define inarr(s,n,arr) for (ll int i = s; i < n; i++) cin>>arr[i];
#define outarr(s,n,arr) for (ll int i = s; i < n; i++) cout<<arr[i]<<' ';
using namespace std;

int countSquares(int b)
{
    int cnt = 0; // Initialize result
    vector<int> vec;
    // Traverse through all numbers
    for (int i = 0; i <= b; i++)
 
        // Check if current number 'i' is perfect
        // square
        for (int j = 1; j * j <= i; j++)
            if (j * j == i){
                cnt++;
                vec.push_back(j);
            }
    fi(0,b){
        cout<<vec[i];
    }
    return cnt;
}
 
// Driver code
int main()
{
    int b;
    get b;
    cout << "Count of squares is "
         << countSquares(b);
    return 0;
}