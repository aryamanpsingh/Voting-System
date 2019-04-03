#include <iostream.h>
#include <math.h>
#include <fstream.h>
#include <windows.h>
using namespace std;
int main()
{   
    string c[100];
    int i,b;
    ofstream cand;
    cand.open("candidates.txt");
    cout<<"Welcome ! "<<endl<<"Please enter the names of 5 Presidential candidates ! "<<endl;
    for (i=0;i<5;i++)
    {
        cout<<i+1<<". ";
        cin>>c[i];
        }
    for (b=0;b<5;b++)
        {
              
              cand<<c[b]<<endl;
              }
    
        
              }
              
                                                
