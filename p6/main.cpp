#include <iostream>
#include<fstream>


using namespace std;
int getWhatTheyWant();
void printWhatTheyWant(int x);


int main()
{

   int WhatTheyWant;
   WhatTheyWant=getWhatTheyWant();

    while(WhatTheyWant!=3)
    {
        switch(WhatTheyWant)
        {

        case 0:
            printWhatTheyWant(0);
            break;
        case 1:
            printWhatTheyWant(1);
            break;
        case 2:
            printWhatTheyWant(2);
            break;
        }
        WhatTheyWant=getWhatTheyWant();


   }



}

int getWhatTheyWant()
{
    int choice;
    cout<<"Enter your preferred choice"<<endl;
    cout<<"0-Plain Items"<<endl;
    cout<<"1-Helpful Items"<<endl;
    cout<<"2-Harmful Items"<<endl;
    cout<<"3-Quit the program"<<endl;

    cin>>choice;
    return choice;
}

void printWhatTheyWant(int x)
{
    ifstream SaketGame("players.txt");
    string name;
    int power;
    if(x==0)
    {
        while(SaketGame>>name>>power)
        {
            if(power==0)
                cout<<name<<" "<<power<<endl;
        }

    }
    if(x==1)
    {
        while(SaketGame>>name>>power)
            {
                if(power>0)
                   cout<<name<<" "<<power<<endl;
            }
    }
    if(x==2)
    {
        while(SaketGame>>name>>power)
            {
                if(power<0)
                  cout<<name<<" "<<power<<endl;
            }
    }

    if(x==3)
    {
         cout<<"You have quit the program"<<endl;
    }
}
