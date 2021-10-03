#include <iostream>
#include <conio.h>
using namespace std;
const int NO_OF_STATES = 15;  //max no of states allowed in input
int n1,n;                     //n1 = no of states, n = no of inputs
class states
{
      public:
      char status;  // i or I = initial and f or F= final       
      int sno;  //state number
      int gp;   //group number of state
      int* ts;  //this ptr will be initialized as an array. 
      //ts[i] will store sno of the state which is reached on transition on input symbol number 'i'. (a = 1, b =2 and so on)
      states()
      {
           sno=gp=0;
           ts=NULL;
      }
      states(int state_no)
      {
           gp=0;     
           sno=state_no;
           ts = new int[n];
           for(int i=0;i<n;i++)
              ts[i]=-1;
      }            
      void input();  
      void output();
};

void states::input()
{
           char ch='a';
           cout<<"\nEnter transition details for ";
           if(sno==0)  
              cout<<"INITIAL ";
           cout<<"state q"<<sno<<" : \n";
           for(int j=0;j<n;j++,ch++)
           {
                cout<<"State reached on Input "<<ch<<" : q";
                cin>>ts[j];
           }
           cout<<"Non-final state or final? (N/F) : ";
           cin>>status;
           if(status=='n'||status=='N')
           gp=0;
           else
           gp=1;
} 

void states::output()
{
      if(sno==-1)
      return;
      cout<<"\n\n    q "<<sno<<"| - ";
      for(int i=0;i<n;i++)
         if(ts[i]!=-1)
         cout<<"     q"<<ts[i];
         else
         cout<<"    N/A";
      if(sno==0)   
      cout<<"     Initial state";
      if((status=='f'  ||   status=='F')and(sno==0))   
      cout<<" and Final state";
      else if(status=='f'  ||   status=='F')
      cout<<"     Final state";
}

//---------------------------
void check(states *);   
//--------------------------
int main()
{     
      char ch='a';   
      cout<<"\nEnter DFA details : \n";
      cout<<"\nHow many inputs? : ";
      cin>>n;
      cout<<"\nEnter no. of states (max 15): ";
      cin>>n1;
      states state[NO_OF_STATES]={0,1,2,3,4,5,6,7,8,9,10,11,12,13,14};  //create and initialize '15' objects using constructor(n)
      for(int i=0;i<n1;i++)
      state[i].input();
      //---------------------------------------- //above section is for initialization and input 
      check(state);
      //---------------------------------------- //below section is for output
      cout<<"       |    Input Symbols\n";                       
      cout<<"States |   ";
      for(int i=0;i<n;i++,ch++)          cout<<"      "<<ch;
      cout<<endl;                
      for(int i=0;i<n+3;i++)               cout<<"-----";
      for(int i=0;i<n1;i++)
          state[i].output();
      getch();
}    

int exists(int s[],int ref)
{
      for(int i=0;i<n1;i++)
           if(s[i]==ref)
             return i; 
      return -1;
}

void check(states state[])
{
      int array[NO_OF_STATES],temp,newgp[NO_OF_STATES],flag=0,count=2;  // count=no of groups formed
      for(int outerloop=0;outerloop<n1-2;outerloop++)//   main loop controls no of times function check() will execute
      {
      for(int j=0;j<n;j++)                          // j -transition loop   (j=0 for input 'a', 1 for input 'b' and so on...)   
      {
            for(int z=0;z<NO_OF_STATES;z++)  
               array[z]=-1;  
            for(int i=0;i<n1;i++)
            {  
                 temp=state[i].ts[j];  
                 for(int k=0;k<n1;k++)    
                     if(state[k].sno==temp)
                     {
                          array[i]=state[k].gp;  //array[i] = group no. of state which is reached on j- transition from state i
                          break;
                     }
            }
            //now array[] is fully initialized for given 'j' input symbol
            for(int i=0;i<n1-1;i++)
            {
                 for(int z=0;z<NO_OF_STATES;z++)  newgp[z]=-1;   
                 flag=0;
                 for(int k=i+1;k<n1;k++)
                 {
                     if(state[i].gp==state[k].gp)
                     {    
                       if((array[i]!=array[k]) && ( (flag==0) || (exists(newgp,array[k])==-1)) )
                       {
                              state[k].gp = count;
                              count++;
                              newgp[k] = array[k]; //newgp[] keeps track of all array[] elements that were used during creation of new groups
                              flag++; 
//if a state 'k' has to be expelled from a gp, it is checked if it can be included in one of the new gps already created in this j-transition loop
//we do this by checking if array[k] value already appears in newgp[] array
                       }
                       else if(array[i]!=array[k])
                       {
                              state[k].gp = state[exists(newgp,array[k])].gp;
                       }
                     }
                 }
            }
      }
      }     //end of outer for loop
//code to create a representative for each group, and replace other group member entries in transition table, by the representative.      
      for(int i=0;i<n1-1;i++)  //for a given state i
      {
          if(state[i].sno!=-1)  //if state i is not already being represented by some other state in the same group, proceed
             for(int j=i+1;j<n1;j++)   //for all other states j
                if(state[i].gp==state[j].gp)  //if state j and i are in same group;
                {
                     for(int h=0;h<n1;h++)  //then, for all the states
                          for(int z=0;z<n;z++) // and all the input symbols                        
                              if(state[h].ts[z]==state[j].sno) //if transition gives state j
                                  state[h].ts[z]=state[i].sno; // then, change it to state i (i.e. merge states i and j)
                     state[j].sno=-1;  //this value means the  given state is being represented by some other state in the group
                     if((state[j].status=='f') || (state[j].status=='F'))
                     state[i].status='F';
                }
      }     
}