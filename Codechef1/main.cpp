#include <iostream>
using namespace std;

int main()
{
    int N,H,x,m;
	cout<< "Enter no. of N  different time zones available, H Hours required and x Hours remaining in the current time zone"<<endl;
	cin>>N;
	cin>>H;
	cin>>x;




	cout<< "Enter the "<< N << " different time zones"<<endl;


    int i=0,c=0;
    while(i<N)
    {
        cin>>m;
        if(m>c)
        c=m;
        i++;
    }
	if((c+x)>=H)
	cout<<"YES"<<endl;
	else
	cout<<"NO"<<endl;


}
