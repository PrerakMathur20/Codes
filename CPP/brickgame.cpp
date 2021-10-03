#include<iostream>
#include<vector>
#include<set>
#include<map>
#include<iterator>
#include<algorithm>
#include<utility>
#include<bitset>
#include <stdlib.h>
using namespace std;

int main() {
	int b;
    cin>>b;
    int m,p;
    int round=1;
    
    while( b >= 0){
        m = round * 2;
        p = round;

        if(b > 0 && (b - m) > 0){
            b = b - m;
        }
        else{
            cout<<"Motu\n";
            break;
        }
        if(b > 0 && (b - m) > 0){
            b = b - p;
        }
        else{
            cout<<"Patlu\n";
            break;
        }
        round++;

    }


//cout<<"b is "<<b<<"round is "<<round <<"\n";


	return 0;
}
