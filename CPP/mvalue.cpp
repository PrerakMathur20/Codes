#include <bits/stdc++.h>

using namespace std;

int code(){
    long int n;
    cin>>n;

    long int arr[n];
    for(int i =0; i<n; i++){
        cin>>arr[i];
    }

long int s = sizeof(arr) / sizeof(arr[0]);
sort(arr, arr + s, greater<int>()); 

long int x=0;

for(int i=1; i<n; i++){
    //long int temp= ((arr[i-1] * arr[i]) + (arr[i-1] - arr[i]));
    x = max(x , ((arr[i-1] * arr[i]) + (arr[i-1] - arr[i])));
}
cout<< x <<"\n";
return 0;
}

int main() {
	long int t;
    cin>>t;
    while(t>0){
        code();
        t--;
    }
	return 0;
}
