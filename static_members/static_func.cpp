#include <iostream>
using namespace std;

class alpha
{
private:
    int a;
    int b;

public:
    alpha()
    {
        a = 5;
        b = 5;
    }
    static int stat;
    static int getStat() // whenever this function is called the static variable will be incremented
    {
        stat++;
        //a=5; this gives error as we can't access non static members in a static member function
        return stat;
    }
};

int alpha::stat = 0; // initially with 0

main()
{
    cout << alpha::getStat() << endl;   //only static function can be accessed this way
    cout << alpha::stat << endl;
    alpha a1;
    alpha a2;
    cout << alpha::getStat() << endl;
    return 0;
}