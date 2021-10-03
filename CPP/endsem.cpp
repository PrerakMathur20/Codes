#include <stdio.h>
#include <stdlib.h>

void a(){
    int i=-5;
    int j =2;
    printf("%d", (i/j));
}

void b(){
    char a = 'a';
    char b = a + '1';
    char c = a + '2';
    printf("%ld", (c-b));
}

void c(){
    char name[30];
    printf("Please tell me your name: ");
    scanf("%s", name);
    printf("Hi %s",name);
}

/*void d(){
    printf("An infinite loop will start, are you sure? (0,1) ");
    int n;
    scanf("%d", &n);
    if(n == 1){
        do{
            prvoidf("Hi");
        }
        while();
    }
}*/

void e(){
    printf("An infinite loop will start, are you sure? (0,1) ");
    int n;
    scanf("%d", &n);
    if(n == 1){
        while(0 == 0){
            printf("Hi");
        }
    }

}

void f(){
    printf("An infinite loop will start, are you sure? (0,1) ");
    int n;
    scanf("%d", &n);
    if(n == 1){
        for(;;){
            printf("Hi");
        }
    }
}

void g(){
    int i;
    for(i=0; i < 10; i++){
        if(i%2 == 0)
            continue;
        printf("%d ",i);
    }
}

void h(){
    int i;
    for(i=0; i < 10; i++){
        if(i%2 == 1)
            break;
        printf("%d ",i);
    }
}

void i(){
    printf("%lu %le %lu",
        sizeof((2+2)),
        sizeof((2l+2l)),
        sizeof((2+2l)));
}

void j(){
    char arr[] = "Hi Saurabh !!";
    char* ptr = arr;
    printf("%s", (ptr += 3));
}

void k(){
    int arr[] = {1, 2, 3, 4, 5, 6};
    long* ptr = (long*)arr;
    ptr++;
    printf("%d", *((int*)ptr));
}

void l(){
    int *ptr1 = (int*) calloc(1, sizeof(int));
    int *ptr2 = (int*) malloc(sizeof(int));
    printf("%d,%d", *ptr1, ptr2);
    free(ptr2);
    free(ptr1);
}

/*void m(){
    int i;
    int arr[] = {1, 2, 3, 4, 5};
    for(i=0; i < 5; i++)
        printf("%d ", arr++);
}*/

void n(){
    unsigned int num = 19;
    printf("%u" , ((num>>2)<<2));
}

#define square(a) a*a
void o(){
    int b = square(2+3);
    printf("%d", b);
}

int main(){
    char inp;
    printf("Give your question input: ");
    scanf("%c", &inp);

    if(inp == 'a')
        a();
    if(inp == 'b')
        b();
    if(inp == 'c')
        c();
    // if(inp == 'd')
    //     d();
    if(inp == 'e')
        e();
    if(inp == 'f')
        f();
    if(inp == 'g')
        g();
    if(inp == 'h')
        h();
    if(inp == 'i')
        i();
    if(inp == 'j')
        j();
    if(inp == 'k')
        k();
    if(inp == 'l')
        l();
    // if(inp == 'm')
    //     m();

return 0;
}