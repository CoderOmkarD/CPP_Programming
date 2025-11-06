#include<iostream>

using namespace std;

int main()
{
    int length=0;
    int *Arr =NULL;
    cout<<"Enter the no.of elements\n";
    cin>>length;

    //Step 1= Allocate the Memory
    Arr=new int[length];

    if (Arr=NULL)
    {
        cout<<"Enable to allocate the memory \n";
    }
    else{
        cout<<"Memory get successfully allocated \n";
    }

    //Step 2=  Use the Memory

    //Step 3=Dealloacte the memory

    //delete Arr;    //this will delete the first element of an array


    delete []Arr;  //this will delete the all element of an array

    return 0;
}