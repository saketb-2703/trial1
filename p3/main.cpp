#include <iostream>


using namespace std;

template <class S>
class Saket
{
    S firstv,secondv;

    public:

        Saket(S a, S b)
        {
            firstv=a;
            secondv=b;
        }
        S bigger();
};

template <class S>
S Saket<S>::bigger()
{
    return(firstv>secondv?firstv:secondv);
}

int main()
{
    Saket <int> so(7,10);
    cout<<so.bigger();
}
