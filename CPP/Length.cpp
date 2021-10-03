#include<iostream>
//	LENGTH CONVERTER
int main(){
	
	int i=0;
	double x;
	double o;
	std::cout<<"Select Conversion Index:\n";
	std::cout<<"1. Meter to Foot\n2. Foot to Meter\n3. Meter to Kilometer\n4. Kilometer to Meter\n5. Meter to Yard\n6. Yard to Meter\7. Kilometer to Mile\n8. Mile to Kilometer\n\nPress 0 to exit.\n\nYour Input:";
	std::cin>>i;
	
	if(i==0){
		exit(0);
	}
	else if(i==1){//Meter to Foot
	std::cout<<"You Chose- Meter to Foot\n";
	std::cout<<"Length in Meter: ";
	std::cin>>x;
	o=x*3.281;
	std::cout<<x<<" Meter(s) in Foot is: "<<o<<".\n";		
		
	}
	else if(i==2){//Foot to Meter
	std::cout<<"You Chose- Foot to Meter\n";
	std::cout<<"Length in Foot: ";
	std::cin>>x;
	o=x/3.281;
	std::cout<<x<<" Foot in Meter is: "<<o<<".\n";		
		
	}
	else if(i==3){//Meter to Kilometer
	std::cout<<"You Chose- Meter to Kilometer\n";
	std::cout<<"Length in Meter: ";
	std::cin>>x;
	o=x/1000;
	std::cout<<x<<" Meter(s) in Kilometer is: "<<o<<".\n";		
		
	}
	else if(i==4){//Kilometer to Meter
	std::cout<<"You Chose- Kilometer to Meter\n";
	std::cout<<"Length in Meter: ";
	std::cin>>x;
	o=x*1000;
	std::cout<<x<<" Kilometer(s) in Meter is: "<<o<<".\n";		
		
	}
	else if(i==5){//Meter to Yard
	std::cout<<"You Chose- Meter to Yard\n";
	std::cout<<"Length in Meter: ";
	std::cin>>x;
	o=x*1.094;
	std::cout<<x<<" Meter(s) in Yard is: "<<o<<".\n";		
		
	}
	else if(i==6){//Yard to Meter
	std::cout<<"You Chose- Yard to Meter\n";
	std::cout<<"Length in Yard: ";
	std::cin>>x;
	o=x/1.094;
	std::cout<<x<<" Yard(s) in Meter(s) is: "<<o<<".\n";		
		
	}
	else if(i==7){//Kilometer to Mile
	std::cout<<"You Chose- Kilometer to Mile\n";
	std::cout<<"Length in Kilometer: ";
	std::cin>>x;
	o=x/1.609;
	std::cout<<x<<" Kilometer(s) in Mile(s) is: "<<o<<".\n";		
		
	}
	else if(i==8){//Mile to Kilometer
	std::cout<<"You Chose- Mile to Kilometer\n";
	std::cout<<"Length in Mile: ";
	std::cin>>x;
	o=x*1.609;
	std::cout<<x<<" Mile(s) in Kilometer(s) is: "<<o<<".\n";		
		
	}
	else{
		std::cout<<"Please enter a valid Index.";
	}
	std::cout<<"----x----x----x----x----x----x----x----x----x----x----x---- ";
	std::cout<<"\n\n\n";
	std::system("length.exe");
}