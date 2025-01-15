#include <iostream>
using namespace std;
int sumEven(int);
int main()
{
    int num;
    cout << "Print sum of even numbers till: ";
    cin >> num;

    int evenCount = 0;
    int sumOfEvens = 0;
    for (int i = 0; i < num; i++)
    {
        if (i % 2 == 0)
            evenCount++;
        sumOfEvens += evenCount;
    }
    cout << "Sum of even numbers from 1 to " << num << " is " << sumOfEvens << endl;
    cout << "Aveage of even numbers from 1 to "<< num <<" is "<< (sumOfEvens / evenCount)<<endl;

    return 0;
}
