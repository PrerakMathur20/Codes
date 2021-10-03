#include <bits/stdc++.h>

#define get cin>> 
#define print cout<<
#define f(s,n) for(int i = s; i < n; i++)
#define inarr(s,n,arr) for (int i = s; i < n; i++) cin>>arr[i];
#define outarr(s,n,arr) for (int i = s; i < n; i++) cout<<arr[i];
#define ll long long 
using namespace std;

int code(){

    ll int n,egg, choco, om, shake, cake;
    get n >> egg >> choco >> om >> shake >> cake;

    ll int sol = 0;
    ll int temp=0;
    ll int order=0;
    bool check=false;

    if(om >= shake && shake >= cake){
        while(n > 0){
            check= false;

            if(egg>= 1 && choco >= 1){
                temp = min(n, min(egg, choco));
                sol = sol + temp * cake;
                egg = egg - temp;
                choco = choco - temp;
                n = n - temp;
                check = true;
                order = order + 100;
            }
            if(choco >= 3){
                temp = min(n, (choco/3));
                sol = sol + temp * shake;
                choco = choco - temp;
                n = n - temp;
                check = true;
                order = order + 10;
            }
            if(egg>= 2){
                temp = min(n , (egg/2));
                sol = sol + temp * om;
                egg = egg - temp;
                n = n - temp;
                check = true;
                order++;
            }
            if(check == false) break;
        }
    }
    else if(om >= cake && cake >= shake){
        while(n > 0){
            check = false;

            if(choco>= 3){
                temp = min(n, choco/3);
                sol = sol + temp * shake;
                choco = choco - temp;
                n = n - temp;
                check = true;
                order = order + 10;
            }
            if(egg>=1 && choco >= 1){
                temp = min(n, min(egg, choco));
                sol = sol + temp * cake;
                egg = egg - temp;
                n = n - temp;
                check = true;
                order = order + 100;
            }
            if(egg >= 2){
                temp = min(n , (egg/2));
                sol = sol + temp * om;
                egg = egg - temp;
                n = n - temp;
                check = true;
                order++;
            }
            if(check == false) break;

        }
    }
    else if(shake >= om && om >= cake){
        while(n > 0){
            check = false;

            if(egg>= 1 && choco >= 1){
                temp = min(n , min(egg,choco));
                sol = sol + temp * cake;
                egg = egg - temp;
                choco = choco - temp;
                n = n - temp;
                check = true;
                order = order + 100;
            }
            if(egg>= 2){
                temp = min(n , egg/2);
                sol = sol + temp * om;
                egg = egg - temp;
                n = n - temp;
                check = true;
                order++;
            }
            if(choco >= 3){
                sol = min(n, choco/3);
                sol = sol + temp * shake;
                choco = choco - temp;
                n = n - temp;
                check = true;
                order = order + 10;
            }
            if(check == false) break;
        }
    }
    else if(shake >= cake && cake >= om){
        while(n > 0){
            check = false;

            if(egg>= 2){
                temp = min(n , egg/2);
                sol = sol +  temp * om;
                egg = egg - temp;
                n = n - temp;
                check = true;
                order++;
            }
            if(egg >= 1 && choco >= 1){
                temp = min(n, min(egg, choco));
                sol = sol + temp * cake;
                choco = choco - temp;
                egg = egg - temp;
                n = n - temp;
                check = true;
                order = order + 100;
            }
            if(choco >= 3){
                temp = min(n , choco/3);
                sol = sol + shake;
                choco = choco - temp;
                n = n - temp;
                check = true;
                order = order + 10;
            }
            if(check == false) break;
        }
    }
    else if(cake >= om && om >= shake){
        while(n > 0){
            check = false;
            if(choco >= 3){
                temp = min(n , choco/3);
                sol = sol + shake;
                choco = choco - temp;
                n = n - temp;
                check = true;
                order = order + 10; 
            }
            if(egg>= 2){
                temp = min(n , egg/2);
                sol = sol +  temp * om;
                egg = egg - temp;
                n = n - temp;
                check = true;
                order++;
            }
            if(egg >= 1 && choco >= 1){
                temp = min(n, min(egg, choco));
                sol = sol + temp * cake;
                choco = choco - temp;
                egg = egg - temp;
                n = n - temp;
                check = true;
                order = order + 100;
            }
            if(check == false) break;
        }
    }
    else if(cake >= shake && shake >= om){
        while(n > 0){
            if(egg>= 2){
                temp = min(n , egg/2);
                sol = sol +  temp * om;
                egg = egg - temp;
                n = n - temp;
                check = true;
                order++;
            }
            if(choco >= 3){
                temp = min(n , choco/3);
                sol = sol + shake;
                choco = choco - temp;
                n = n - temp;
                check = true;
                order = order + 10; 
            }
            if(egg >= 1 && choco >= 1){
                temp = min(n, min(egg, choco));
                sol = sol + temp * cake;
                choco = choco - temp;
                egg = egg - temp;
                n = n - temp;
                check = true;
                order = order + 100;
            }
            if(check == false) break;
        }
    }
    if(n != 0){
        print -1 <<"\n";
    }
    else print sol << "\n";
    //print "order is " << order<<"\n";
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