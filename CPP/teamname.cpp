#include<iostream>
#include<stdlib.h>
#include<string>
using namespace std;

int code(){
    int l;
    cin>>l;
    string text[l];
    string text2[l];
    string word[l];

    for(int i=0; i < l; i++){
        cin>>text[i];
       
    }

    for(int i=0; i < l; i++){
         text[i] = text2[i];
        string temp;
        temp = text[i];
        word[i] = temp.at(0);
    }
    for(int i=0; i < l; i++){
        cout<<word[i]<<" ";
    }

    for(int i=0; i <l; i++){
        text2[i].erase(text2[i].begin());
        cout<<text2[i];
            }

return 0;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        code();
    }
    return 0;
}