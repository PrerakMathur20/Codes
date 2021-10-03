#include<stdio.h>
#include<math.h> 
#include<stdlib.h>
#include<math.h>

#define ll long long
 
void red(ll int *a, ll int *b)
{
    //get
    for(int i = 2; i <= *a && i <= *b; i++) 
    {
        if(*a % i == 0 && *b % i == 0) 
        {
            *a = *a / i;
            *b = *b / i;
        }
    }
}
 
void code()
{
    double a;
	scanf("%lf", &a);

    if(a==0) {
        printf("[0] [0]");
        return 0;
    }
    int sign = 1;
    if(a < 0){
        sign = -1;
        a = a*(-1);
    }

    ll int c = 100000;
    double b = (a - floor(a)) * c;
    ll int d = (int)floor(a) * c + (int)(b + .5f);
 
    while(1) 
    {
    	if (d % 10 == 0) 
    	{
        	d = d / 10;
           	c = c / 10;
    	}
    	else break;
    }
    ll int *i = &d;
    ll int *j = &c;
    int t = 0;
    while(t != 1)
    {
     	ll int gcd = gcdval(d, c);
    	if (gcd == 1) 
    	{
        //for fraction part
       	printf("[%lld/%lld]", sign*d, c);

        //for mixed fraction
        if(sign == -1) printf(" [-%lld %lld/%lld]\n", sign * (d/c), d%c, c);
		else printf(" [%lld %lld/%lld]\n", sign * (d/c), d%c, c);
          	t = 1;
    	}
    	else
    	{
    	red(i, j);
    	}
    }
}

int gcdval(int x, int y){
    //get correct value of gcd
    ll int gcd = 1;
    for(int i = 1; i <= x && i <= y; i++) 
    {
        if(x % i == 0 && y % i == 0) 
        {
            gcd = i;
        }
    }
    return gcd;
}

int main(){
    int t;
    scanf("%d",&t);
    while(t>0){
        code();
        t--;
    }
}