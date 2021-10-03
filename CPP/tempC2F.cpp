#include<iostream>
int main(){
	
	double tempc=0.0;
	double tempf=0.0;
	
	std::cout<< "Enter temperature in celsius:";
	std::cin>> tempc;
	
	tempf=(tempc * 1.8) + 32;
	
	
	std::cout<< "The temperature is "<< tempf << " degrees Farenheit";
}