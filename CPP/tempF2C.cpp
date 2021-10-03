#include<iostream>
int main(){
	
	
	double tempc=0.0;
	double tempf=0.0;
	
	std::cout<< "Enter temperature in fahrenheit:";
	std::cin>> tempf;
	
	tempc=(tempf -32) * 5/9;
	
	
	std::cout<< "The temperature is "<< tempc << " degrees Celsius";
	
}