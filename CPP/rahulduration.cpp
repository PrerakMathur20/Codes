#include <iostream>
#include <string>
using namespace std;
 
int code(){
int sh,sm,eh,em;
int fh, fm;
cin >> sh >> sm >> eh >> em;
fh=eh;
fm=em;
	if(eh == sh){
			if(em < sm)
				fh = eh + 24;
	}
	else if(eh < sh){
			fh = eh + 24;
		}
	if(em < sm){
		fm = em + 60;
		fh--;
		}
		
cout << (fh - sh) << " " << (fm - sm) << endl;
}



int main() {
	int t;
    cin>>t;
    while(t>0){
        code();
        t--;
    }
	return 0;
}
