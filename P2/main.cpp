#include <iostream>
#include "Sally.h"

using namespace std;

int main()
{
   Sally a(7);
   Sally b(10);
   Sally c;

   c=a+b;
   cout<<c.num<<endl;
}


