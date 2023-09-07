#include <iostream>
using namespace std;


// We use it to link between variables in two classes, including private and protected also 
class alpha
{
    private:
    int a1;
    public:
    alpha(int arg=0)
    {
        a1=arg;
    }
    friend void func(); //friend function declaration
};
class beta
{
    private:
    int b1;
    public:
    beta(int arg=0)
    {
        b1=arg;
    }
    friend void func();//friend function declaration
};

void func() //Friend function definition
{
    alpha a(8);  //create objects of both classes inside it
    beta b(2);
    int x=a.a1+b.b1;        //access the variable of both classes
    cout<<x;
}

int main(void)
{
    func();

    return 0;
}