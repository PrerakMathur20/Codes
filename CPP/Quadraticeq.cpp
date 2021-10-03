#include<iostream>
#include <math.h>
int main(){

int a,b,c;
std::cout<<"Input the 3 variables: \na : ";
std::cin>>a;
std::cout<<"b : ";
std::cin>>b;
std::cout<<"c : ";
std::cin>>c;

int d = b * b - 4 * a * c;
int x1,x2;

if (d==0){
    x1=x2= -b / (2 * a);
}
else if (d > 0){
    x1= (-b+ d) / (2*a);
    x2= (-b -d)/ (2*a);
}
else{
    std::cout<<"No real roots!\n";
}


}