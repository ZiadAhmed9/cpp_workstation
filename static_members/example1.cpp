#include <iostream>
using namespace std;

// Static members in classes are shared between all objects
class alpha
{
private:
    int a;
    int b;

public:
    alpha() // to monitor the difference we will increment stat everytime an object is made from this class
    {
        a = 5;
        b = 5;
        stat++;
    }
    static int stat; // declaration of the static member
};

int alpha::stat = 0; // definition of the member initially with 0

int main()
{
    alpha a1; // stat =1
    cout << a1.stat << endl;
    alpha a2; // stat=2
    alpha a3; // stat=3
    cout << a2.stat << endl; //output here is 3
    cout << a2.stat << endl; //ouput here is 3 
    cout << alpha::stat; // stat=2
    return 0;
}