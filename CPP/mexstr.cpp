#include <bits/stdc++.h>

#define get cin>> 
//#define print cout<<
#define ll long long
#define ld long double
#define ull unsigned long long int
#define rep(i, k, n) for (ll int i = k; i < n; i++)
#define rept(i, k, n) for (auto i = k; i != n; ++i)
#define drep(i, k, n) for (ll int i = k; i >= n; i--)
#define fi(s,n) for(ll int i = s; i < n; i++)
#define fj(s,n) for(ll int j = s; j < n; j++)
#define fk(s,n) for(ll int k = s; k < n; k++)
#define inarr(s,n,arr) for (ll int i = s; i < n; i++) cin>>arr[i];
#define outarr(s,n,arr) for (ll int i = s; i < n; i++) cout<<arr[i];
using namespace std;

template <typename... T>
void read(T &...args)
{
   ((cin >> args), ...);
}

template <typename... T>
void print(T &...args)
{
   ((cout << args << ' '), ...);
   cout << endl;
}

string toBin(ll int n) 
{
    if (n==0) return "0";
    else if (n==1) return "1";
    else if (n%2 == 0) return toBin(n/2) + "0";
    else if (n%2 != 0) return toBin(n/2) + "1";
}

bool subSeq(string s1 , string s2){

   ll int l1 = s1.length();
   ll int l2 = s2.length();

   ll int x=0;
   ll int y = 0;

   while( x < l1 && y < l2){
      if(s1.at(x) == s2.at(y)){
         x++;
      }
      y++;
   }
   bool out = (x==l1 ? true : false);
   return out;
}



void code(){
   string str;
   get str;

   ll int l = str.length();

   bool flag = false;
   ll int temp = 0;

   fi(0,pow(2,l)){
      string bin = toBin(i);
      if(subSeq(bin , str)){
         flag = true;
      }
      else{
         temp = i;
         break;
      }
   }
   string val = toBin(temp);
   print(val);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    read(t);
    while(t>0){
        code();
        t--;
    }
    return 0;
}