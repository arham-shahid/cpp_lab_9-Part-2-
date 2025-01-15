#include <iostream>
using namespace std;

int main()
{   
    int positiveNums = 0,
        negativeNums = 0,
        zeros = 0;

    for(int i = 0 ; i <10 ; i++)
    {   
        int num;
        cout<<"Enter any number: ";
        cin>>num;

        if(num>0)
        positiveNums++;
        else if(num<0)
        negativeNums++;
        else
        zeros++;

    }
    cout<<"Total positive numbers entered by user are: "<<positiveNums<<endl,
    cout<<"Total negative numbers entered by user are: "<<negativeNums<<endl,
    cout<<"Total zeros entered by user are: "<<zeros<<endl;
    
    return 0;
}