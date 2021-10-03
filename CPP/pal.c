#include<stdio.h>

#include<string.h>

int main()
{
    int i=0;
    char s1[6],s2[6];
    printf("Give me a 5-character word in lowercase: ");
    scanf("%s",s1);
    strcpy(s2,s1);
    if(strlen(s1)==5) {
        if(s1[0]>s1[4]) {
            s1[0] = s1[4];
            i+=1;
        }
        else if(s1[0]<s1[4]) {
            s1[4]=s1[0];
            i+=1;
        }
        if(s1[1]>s1[3]) {
            s1[1] = s1[3];
            i+=1;
        }
        else if(s1[1]<s1[3]) {
            s1[3]=s1[1];
            i+=1;
        }
        if(i>0) {
            printf("I have changed %s to %s by making %d change(s) !!\n",s2,s1,i);
        }
        else printf("%s is already a palindrome !!\n",s2);
    }
    else printf("Invalid input...\n");
}