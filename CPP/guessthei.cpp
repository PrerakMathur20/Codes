#include<iostream>
#include<math.h>
using namespace std;

int main ()
{
    int T;
    cin >> T;
    while ( T > 0 ) 
    {
    int N;
    cin >> N;
    int R[N];
    int L[N];
    string j;

    int counter =0;
    int counter2 = 0;
   
    for ( int i = 0; i < N; i++ )
    {   cin >> j;
        if ( j == "R" )
        {
            cin >> R[counter];
            counter ++;
        }
        if ( j == "L" )
        {
            cin >> L[counter2];
            counter2 ++;
        }
    }


    int max = L[0];
    for (int M = 1; M <= counter2; M++ ) 
    {
        if (L[M] < max)
        {
            max = L[M];
        } 
    }
    int min = R[0];  
    for (int m = 1; m <= counter; m++ ) 
    {
        if (R[m] > min ) 
        {
             min = R[m];
        }
    }

    cout << max << " " << min << endl;
    cout << j << endl;

    

    if ( max > min && (max-min) >= 2  )
    {
        cout << max - min - 1 << endl;
    }
    /*
    {
        cout << -1 << endl;
    }
    */
    else 
    {
        cout << -1 << endl;
    }

    T--;
    }
    
    return 0;
}