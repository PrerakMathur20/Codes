#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll n , m ;
    cout<<"Enter the number of rows:"<<endl;
    cin>>n;
    cout<<endl;
    cout<<"Enter the number of Columns:"<<endl;
    cin>>m;
    string arr[n][m];
    for(ll i=0;i<n;i++)
    {
        for(ll j=0;j<m;j++)
        {

            string a=to_string(i),b=to_string(j);
            arr[i][j]=a+b;
        }
    }
    cout<<"The desired array is:"<<endl;
    for(ll i=0;i<n;i++)
    {
        for(ll j=0;j<m;j++)
        cout<<arr[i][j]<<" ";
        cout<<endl;
    }
}