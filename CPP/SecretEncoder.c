#include<stdio.h>
#include<stdlib.h>

int main(){

    char c1, c2;
    int  ad, bd;
    scanf("%c, %c", &c1, &c2);
    ad = c1*100 + c2;
    bd = c1 - c2;
    bd=abs(bd);
    if(bd<10)printf("0");
    printf("%d.%d\n", bd, ad);

return 0;
}