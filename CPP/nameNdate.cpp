#include<iostream>
#include <string>
int main(){
	char fname[100];
	char lname[100];
	std::cout<< "Enter your First name:";
	std::cin>> fname;
	std::cout<< "Enter your Last name:";
	std::cin>> lname;
	
	int age;
	std::cout<< "Enter your age: ";
	std::cin>> age;
	
	std::cout<<"\n \n \nYour name is " << fname << " " << lname << ".\n";
	std::cout<< "Your age is "<< age << ".\n";
	
}