#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<string.h>

int hex(int in){
    //convert to hexadecimal
    char a = in + '0';
    if(in == 10)  a = 'a';
    if(in == 11)  a = 'b';
    if(in == 12)  a = 'c';
    if(in == 13)  a = 'd';
    if(in == 14)  a= 'e';
    if(in == 15)  a = 'f';
    printf("%c",a);

return 0;
}

int code(){
    int r,g,b;
    scanf("%d%d%d",&r,&b,&g);

    if(r >255 || g > 255 || b > 255 || r < 0 || g <0 || b<0){
        printf("INVALID\n");
    }

    else{

        int rc1=0,bc1=0,gc1=0;
        int rc2=0,bc2=0,gc2=0;
        //For RED
        for(int i=0; i < r; i++){
            rc1++;
            if(rc1 == 16){
                rc2++;
                rc1 = 0;
            }
        }
        //For BLUE
        for(int i=0; i < b; i++){
            bc1++;
            if(bc1 == 16){
                bc2++;
                bc1 = 0;
            }
        }
        //For GREEN
        for(int i=0; i < g; i++){
            gc1++;
            if(gc1 == 16){
                gc2++;
                gc1 = 0;
            }
        }
        //Output
        printf("#");
        hex(rc2);
        hex(rc1);
        hex(bc2);
        hex(bc1);
        hex(gc2);
        hex(gc1);
        printf("\n");
    }

return 0;
}

int main() {
	int t;
    scanf("%d",&t);
    while(t>0){
        code();
        t--;
    }
	return 0;
}