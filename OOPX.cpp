#include <iostream>

using namespace std;

class Arithmatic
{
public:
    int iNo1;
    int iNo2;

    Arithmatic()
    {
        cout << "Inside Default Constructor\n";
        iNo1 = 0;
        iNo2 = 0;
    }

    Arithmatic(int A, int B)
    {
        cout << "Inside Parameterized Constructor\n";

        iNo1 = A;
        iNo2 = B;
    }
    int Addition()
    {
        int iAns = 0;
        iAns = iNo1 + iNo2;
        return iAns;
    }
    int Substraction()
    {
        int iAns = 0;
        iAns = iNo1 - iNo2;
        return iAns;
    }
};
int main()
{
    Arithmatic Aobj1(11, 10);
    Arithmatic Aobj2;
    int iRet = 0;

    iRet = Aobj1.Addition();
    cout << "Addition is:" << iRet << "\n";

    iRet = Aobj1.Substraction();
    cout << "Substraction is:" << iRet << "\n";

    return 0;
}