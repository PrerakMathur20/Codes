#include<iostream>
#include<math.h>

using namespace std;

int main(){

int t;

cin>>t;

do{
int a,b,c;
scanf("%d,%d",&a,&b);

c = (a*a) + (b*b);
c = sqrt(c);
cout<<a<<" "<<b;
printf("%d",c);
t=t-1;
}
while(t>0);


}