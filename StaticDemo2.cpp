#include <iostream>

using namespace std;

class Demo
{
public:
    int i;
    int j;

    static int x;

    Demo()
    {
        this->i = 0;
        this->j = 0;
    }

    Demo(int a, int b)
    {

        this->i = a;
        this->j = b;
    }

    void fun() // void Fun(Demo * const this)
    {
        cout << "Inside Fun \n";
        cout << "The value of i is:" << this->i << "\n";
        cout << "The value of j is:" << this->j << "\n";
        cout << "The value of x is:" << x << "\n";
    }

    static void gun() // static void gun()
    {
        cout << "Inside gun \n";
    }
};

int Demo::x = 11;

int main()
{
    Demo::gun(); // :: is called as scope resolution operator

    cout << "Value of x is:" << Demo::x << "\n";
    
    Demo obj(10,20);

    obj.fun();

    return 0;
}