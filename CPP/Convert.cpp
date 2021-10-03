#include<iostream>
//Master Converter 
int main(){
	
	int x=0;
	int c=0;

	std::cout<<"Welcome to the    MASTER CONVERTER    Application\n\n";
	std::cout<<"Which of the following conversions would you like to perform:\n 1. Length \n 2. Time \n 3. Temperature \n 4. Mass \n ";
	std::cout<<"Please enter the corresponding number for conversion:";
	
	std::cin>>x;
	
	if(x==1){ //Length
		std::cout<<"You chose Length converter. To confirm press 1.\n To go back to main menu, press 2.\nTo cancel press 0.\n";
		std::cin>> c;
		if(c==1){
			std::system("Length.exe");
		}
		else if(c==2){
			std::system("Convert.exe");
		}
		else if(c==0){
			exit(0);
		}
		else{
			std::cout<<"Please enter a Valid resonse.";
		}
		
			}
	else if(x==2){ //Time
		
		std::cout<<"You chose Time converter. To confirm press 1.\n To go back to main menu, press 2.\nTo cancel press 0.\n";
		std::cin>> c;
		if(c==1){
			std::system("Time.exe");
		}
		else if(c==2){
			std::system("Convert.exe");
		}
		else if(c==0){
			exit(0);
		}
		else{
			std::cout<<"Please enter a Valid resonse.";
		}
		
	}
	
	else if(x==3){ //Temperature
	
	std::cout<<"You chose Temperature converter. To confirm press 1.\n To go back to main menu, press 2.\nTo cancel press 0.\n";
		std::cin>> c;
		if(c==1){
			std::system("temp.exe");
		}
		else if(c==2){
			std::system("Convert.exe");
		}
		else if(c==0){
			exit(0);
		}
		else{
			std::cout<<"Please enter a Valid resonse.";
		}
		
		
	}
	
	else if(x==4){  //Mass
		
		std::cout<<"You chose Mass converter. To confirm press 1.\n To go back to main menu, press 2.\nTo cancel press 0.\n";
		std::cin>> c;
		if(c==1){
			std::system("mass.exe");
		}
		else if(c==2){
			std::system("Convert.exe");
		}
		else if(c==0){
			exit(0);
		}
		else{
			std::cout<<"Please enter a Valid resonse.";
		}
		
	}
	else{
		std::cout<<"Please enter a valid input.";
	}
			
	
}