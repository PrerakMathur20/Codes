#include<stdio.h>
#include<math.h>

int main(){

long double dc;
long double t;
long double no;
long double nt;

printf("Input\n");

scanf("%Lf,%Lf,%Lf\n\n", &dc ,&t,&no);

nt = no * exp(-dc*t);
printf("\n%Lf,%Lf,%Lf\n",dc,t,no);
printf("This is : %Lf\n", nt);

return 0;
}