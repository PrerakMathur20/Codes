#include <iostream>

int main() {
  
 double ew=0.0;
 double aw=0.0;
 int p=0;

std::cout<<"Enter your weight on Earth:";
std::cin>>ew;

std::cout<<"Enter the planetn number you want to fight on:";
std::cin>>p;


switch (p){
  case 1:
  std::cout<<"You chose Mercury.\n";
  std::cout<<"Your Relative weight is " << ew*0.38 << " kg.\n";
  break;
  case 2:
  std::cout<<"You chose Venus.\n";
  std::cout<<"Your Relative weight is " << ew*0.91 << " kg.\n";
  break;
  case 3:
  std::cout<<"You chose Mars.\n";
  std::cout<<"Your Relative weight is " << ew*0.38 << " kg.\n";
  break;
  case 4:
  std::cout<<"You chose Jupiter .\n";
  std::cout<<"Your Relative weight is " << ew*2.34 << " kg.\n";
  break;
  case 5:
  std::cout<<"You chose Saturn .\n";
  std::cout<<"Your Relative weight is " << ew*1.06 << " kg.\n";
  break;
  case 6:
  std::cout<<"You chose Uranus.\n";
  std::cout<<"Your Relative weight is " << ew*0.92 << " kg.\n";
  break;
  case 7:
  std::cout<<"You chose Neptune.\n";
  std::cout<<"Your Relative weight is " << ew*1.19 << " kg.\n";
  break;
  
}
  
}