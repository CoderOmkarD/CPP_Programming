#include<iostream>

using namespace std;



int Area(int Rad=2,int PI=3.14)  //The Assigning the PI value at this is called as default Arguments
{   

    int iAns=0;
    iAns=PI*Rad*Rad;
    cout<<"The Area Is :"<<iAns<<"\n";
    return 0;

};

int main()
{
  Area(2,10);

    // cout<<"The Area of the cicle is"<<iRet<<"\n";

    return 0;


};

