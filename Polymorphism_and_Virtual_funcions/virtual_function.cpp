#include <iostream>
using namespace std;

class base
{
public:
    virtual void show() //using virtual will make the function that is present in the derived class be the one executed when called from pointer
    {
        cout << "Base class" << endl;
    }
};

class derv1 : public base
{
    public:
    void show()
    {
        cout<<"derived class 1"<<endl;
    }
};

class derv2 : public base
{
    public:
    void show()
    {
        cout<<"derived class 2"<<endl;
    }
};

int main(void)
{
    base *ptr;
    ptr= new derv1();
    ptr->show();    //function executed if the function is not virtual is the one in base class

    return 0;
}