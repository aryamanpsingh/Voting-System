#include <iostream.h>
#include <math.h>
#include <fstream.h>
using namespace std;
int main()
{   
    
    ifstream backupin;
    ofstream backup[1000];
    ifstream menuinput[1000];
    int c=0,candscore[5]={0,0,0,0,0},vote,buffer;
    c++;
    ofstream candscores[1000];
    string candidate[100],candinp[1000];
    int a=0,b,i,att,adno[1000],inp=0;
    cout<<"Attendance today ? ";
    cin>>att;
    backupin.open("backup.txt");
    for (b=0;b<5;b++)
        {
              backupin>>buffer;
              candscore[b]=buffer;
              }
                                             
    for (i=0;i<att;i++)
    {
        a=0;
        cout<<"Enter admission no. ";
        
        cin>>adno[i];
        while (a<100)
        {
              if (adno[i]==adno[a]&&a!=i)
              {
                                   cout<<"This admission no. has already cast his vote ! \n";
                                   att++;
                                   goto re;
                                   }
              else {}
              a++;
              }
        menuinput[inp].open("candidates.txt");
        for (b=0;b<5;b++)
        {
              cout<<b+1<<". ";
              menuinput[inp]>>candinp[inp];
              cout<<candinp[inp]<<endl;
              candidate[b]=candinp[inp];
                                                }
        cout<<endl<<"Whom would you like to vote for ? [Enter the corresponding number] : ";
        cin>>vote;
        candscore[vote-1]++;
        candscores[i].open("results.txt");
        backup[i].open("backup.txt");
        for (b=0;b<5;b++)
        {
              candscores[i]<<b+1<<". ";
              candscores[i]<<candidate[b]<<" - "<<candscore[b]<<endl;
              backup[i]<<candscore[b]<<endl;
                                                }
        
        inp++;
        re:; 
        system("cls");        
        }   
}   
