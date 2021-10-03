#include<iostream>
#include<math.h>

using namespace std;

int calch(string mytime, int t)
{
    int mh;
    mh = 10 *(mytime[0 + t] - '0') + 1* (mytime[1 + t] - '0');
    if(mytime[6+t] == 'P'){if(mh != 12) mh += 12;}
    if(mytime[6 + t] == 'A') {if(mh == 12) mh-= 12;}
    return mh;
}
int calcm(string mytime, int t)
{
    int mm;
    mm = 10 *(mytime[3 + t] - '0') + (mytime[4 + t] - '0');
    return mm;
}

int main()
{
    long long t;
    cin>>t;
    cin.ignore();

    while(t--)
    {
        string mytime; getline(cin, mytime);
        int mh = calch(mytime, 0);
        int mm = calcm(mytime, 0);
        long long n; cin>>n; cin.ignore();
        string res = "";
        while(n--)
        {
            string friendtime; getline(cin, friendtime);
            int fsh = calch(friendtime, 0);
            int fsm = calcm(friendtime, 0);
            int feh = calch(friendtime, 9);
            int fem = calcm(friendtime, 9);


            if((fsh> mh)||(feh< mh)) {res.push_back('0');}
            else if(fsh == mh && fsm> mm) res.push_back('0');
            else if(feh == mh && fem< mm) res.push_back('0');
            else res.push_back('1');
        }
        cout<<res<<"\n";       
    }
    return 0;
}