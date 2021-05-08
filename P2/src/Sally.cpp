#include "Sally.h"
#include <iostream>
using namespace std;

Sally::Sally()
{
}

Sally::Sally(int a)
{
    num=a;
}

Sally Sally::operator+(Sally obj2)
{
    Sally c;
    c.num=num+obj2.num;
    return(c);
}
