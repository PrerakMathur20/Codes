#include <stdio.h>
#include<stdlib.h>
int main(){
int t;
scanf("%d", &t);
while(t>0){
        int n;
    scanf("%d", &n);
    int sum = 0;
    for(int i=1; i<n; i++){
        if(n%i == 0){
            sum = sum + i;
        }
    }
    if(sum == n) printf("YES\n");
    else printf("NO\n");
t--;
}
}