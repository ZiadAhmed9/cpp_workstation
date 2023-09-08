#include <iostream>

using namespace std;
/*A friend class can access and use features and functionalities of each other*/

class alpha
{
    private:
    int a1;
    public:
    alpha(int arg=0)
    {
        a1=arg;
    }
    friend class beta;  //here we declare to this class that it has a friend that can access its private contents
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
    void sum()
    {
        alpha alpha_obj(3);             //using contents of first class in the second class normally
        int sum=alpha_obj.a1+b1;
        cout<<sum;
    }
};




int main(void)
{
    beta beta_obj(5);
    beta_obj.sum();
    return 0;
}