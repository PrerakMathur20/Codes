#include <iostream>
#include <vector>
#include <stdlib.h>

using namespace std;
int test(){

int main1[1000000];
memset(main1,-1,1000000*sizeof(int));
cout<<"Enter length of array : "; 
int a;
cin>>a;
int min = 2000000000;
vector<int> vec;
int ind;
cout<<"Enter array elements : ";
for(int i=0; i < a; i++){
    int temp;
    cin>>temp;
    vec.push_back(temp);

if(main1[temp] == -1){
    main1[temp]= i;
} 
else{
    if(main1[temp] < min){
        min =main1[temp];
    }
}
}
if(min != 2000000000)cout<<"ind of "<<vec[min]<<" has index "<<main1[vec[min]] +1<<"\n";
else cout<<" Not hapenin' bro! \n";
return 0;
}


int main() {
	int t;
    cout<<"Enter number of test cases: ";
    cin>>t;
    while(t>0){
        test();
        t--;
    }
	return 0;
}
