#include <iostream>

using namespace std;

template <class T>
class Saket
{
public:
    Saket(T x)
    {
        cout<<x<<" is not a character"<<endl;
    }
};

template<>
class Saket<char>
{
public:
    Saket(char x)
    {
        cout<<x<<" is indeed a character"<<endl;
    }
};

int main()
{
    Saket<int> s1(7);
    Saket<double> s2(7.0);
    Saket<char> s3('s');
}
