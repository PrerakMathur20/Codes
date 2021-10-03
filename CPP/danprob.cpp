#include<iostream>
#include<vector>
#include<string>
#include<set>
#include<map>
#include<iterator>
#include<algorithm>
#include<utility>
#include<bitset>
#include<cmath>
#include<math.h>
#include <stdlib.h>
using namespace std;

int code(){
    long int prob[10];
    for (int i = 0; i < 10; i++){
        cin>>prob[i];
    }

    long int del;
    cin>>del;

    
    for(int i =9; i > 0; i--){
        if(del <= 0) break;
        if(prob[i] == 0) continue;
        
        while(prob[i] > 0){
            if(del <= 0) break;
            prob[i] = prob[i] - 1;
            del--;
            
        }
    }
    int out=0;
    for(int i =9; i > 0; i--){
        if(prob[i] == 0) continue;
        else{
            out = i;
            break;
        }
    }

cout<< out + 1 <<"\n";

return 0;
}

int main() {
	int t;
    cin>>t;
    while(t>0){
        code();
        t--;
    }
	return 0;
}
