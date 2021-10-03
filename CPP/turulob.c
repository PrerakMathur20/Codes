#include<stdio.h>
#include<string.h>

int main(){

   int i,x=0,j,y=0,T,p,q;
   char s1[1000001], v1[6] ="aeiou", v2[6] = "AEIOU";

    scanf("%d",&T);
	for(q=0;q<T;q++){

   scanf("%s",&s1);
   p=strlen(s1);
   
   for(i=0;i<5;i++){
	   for(j=0;j<p;j++){
		   if(v1[i]== s1[j]){
			   y++;
			   break;}}}
		   
	for(i=0;i<5;i++){
		for(j=0;j<p;j++){
			 if(v2[i]== s1[j]){
				 x++;
				 break;}}}
 
    if(y==5 || x==5) {
		printf("lovely string\n");
	}
    else{
		printf("ugly string\n");
	}
    x=0;
	y=0;

	}
	return 0;
}