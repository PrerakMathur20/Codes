#include <string.h>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
    int len;
    printf("Give me the size of the hourglass: ");
    scanf("%d", &len);
    if(len < 0) printf("Invalid input, I need a positive integer as input\n");
    int e0 = trunc(log10(len));
    int i,j,k,l;

//Top half
len = len+1;
    for(i = 1; i <= len; i++){

        for(j = 1; j < i; j++){
            printf(" ");
        }
        for(k = len-i; k >= ((len - i) * -1); k--){
            int x = abs(k);
            if(x >= 10) x = x % (10*e0);
            printf("%d",x);
        }
        printf("\n");
    }

//Bottom Half
len = len-1;
    for(i = 1; i <= len; i++){
        for(j = 1; j <= len -i; j++){
            printf(" ");
        }
        for(k = i; k >= -i; k--){
            int x = abs(k);
            if(x >= 10) x=x%10;
            if(x >= 10) x = x % (10*e0);
            printf("%d",x);
        }
        printf("\n");
    }
    //printf("%d", size);
return 0;
}

