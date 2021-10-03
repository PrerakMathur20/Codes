#include<iostream>
#include<vector>

int main(){

std::vector<int> even = {2,4,6,8,10,12};
std::vector<int> odd = {1,3,5,7,9,11};

int teven=0;

for(int i=0; i<even.size(); i++){

  teven = teven + even[i];
}

std::cout<<"\nSum of even numbers is "<<teven;

int todd=1;

for(int x=0; x<odd.size();x++){
todd = todd * odd[x];

}

std::cout<<"\nProduct of odd numbers is "<<todd;

}