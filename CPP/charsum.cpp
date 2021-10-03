#include<iostream>
#include<stdio.h>
#include<math.h>
#include<stdlib.h>


using namespace std;

int main(){

    string word;
    cin>>word;
    int a;
    a = word.length();

    char arr[a+1];

       strcpy(arr, word.c_str());
    
    int y=0;

    for(int i=0; i < a+1; i++){
        y=y+ arr[i];
    }

    cout<<y - (96 * a)<<"\n";

}