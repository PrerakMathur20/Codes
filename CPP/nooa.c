#include<stdio.h>
#include<math.h>

int main(){

double dconst;
int no;
int nt;
long int yrs;

printf("Decay const\n");
printf("time\n");
printf("no. of atoms\n");

scanf("%lf/%ld/%d", &dconst,&yrs, &no );

nt = no*exp(-dconst*yrs);

printf("This is: %ld\n %d\n", yrs , nt );
return 0;
}
