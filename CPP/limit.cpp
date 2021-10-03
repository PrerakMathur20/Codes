#include<iostream>
#include<math.h>

using namespace std;
int main(){
int t;
scanf("%d",&t);

for(int i=t;i>0;i--){

int a,b,c,d,e,r;
scanf("%d,%d,%d,%d,%d",&a,&b,&c,&d,&e);

r = ( pow(a,b) + pow(c,d));

cout<<a<<b<<c<<d<<e;

}
}