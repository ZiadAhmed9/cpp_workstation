#include <iostream>
using namespace std;
// Write a program,implement overloading of comparison operator (>,<)

class person
{
private:
    int weight;

public:
    person(int w = 0)
    {
        weight = w;
    }
    friend bool operator>(person x, person y); // declaration of overloading function as a friend
    friend bool operator<(person x, person y); // declaration of overloading function as a friend
};

bool operator>(person x, person y)
{
    return x.weight > y.weight;
}
bool operator<(person x, person y)
{
    return x.weight < y.weight;
}

int main()
{
    int w1, w2;
    cout << "Enter the weight of john" << endl;
    cin >> w1;
    cout << "Enter the weight of rick" << endl;
    cin >> w2;
    person john(w1);
    person rick(w2);
    if (john > rick)
    {
        cout << "john is heavier" << endl;
    }
    else
    {
        cout << "rick is heavier" << endl;
    }
    return 0;
}
