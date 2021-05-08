#include "People.h"
#include <iostream>
using namespace std;

People::People(string x,Birthday bo)
:dob(bo)
{
    name=x;

}

void People::printInfo()
{
    cout<<name<<"was born on";
    dob.printDob();
}
