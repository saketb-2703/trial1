#include <iostream>
#include "Birthday.h"
#include "People.h"

using namespace std;

int main()
{
     Birthday birthobj(27,03,2002);

     People listInfo("Saket",birthobj);
     listInfo.printInfo();
}
