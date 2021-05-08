#include "Birthday.h"
#include <iostream>

using namespace std;

Birthday::Birthday(int d,int m,int y)
{
    day=d;
    month=m;
    year=y;
}

void Birthday::printDob()
{
    cout<<day<<"/"<<month<<"/"<<year<<endl;
}
