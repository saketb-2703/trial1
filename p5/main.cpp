#include <iostream>
#include <fstream>

using namespace std;

int main()
{
     ofstream SaketFile("players.txt");
     cout<<"Enter player id,name and money"<<endl;
     cout<<"Press Ctrl+Z to quit"<<endl;

     int id;
     double money;
     string name;

     while(cin>>id>>name>>money)
     {
         SaketFile<<id<<" "<<name<<" "<<money<<endl;
     }

}
