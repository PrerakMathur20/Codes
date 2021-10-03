#include<stdio.h>
int main()
{
    int t,g,p,n,i,j,k,l;
    int ot1=0, ot2=0;
    scanf("%d",&t); 
    for(k=0;k<t;k++)
{
    scanf("%d%d%d",&g,&p,&n);
    for(l=0;l<n;l++)
    {
        scanf("%d%d",&i,&j); 
        ot1=ot1+((i*g)+(j*p)); 
        ot2=ot2+((i*p)+(j*g)); 
    }
if(ot1<ot2) 
      {  printf("%d\n",ot1);
     }
    else
     { printf("%d\n",ot2);
     }  
    ot1=0;
    ot2=0;
    }
    return 0;
 }
