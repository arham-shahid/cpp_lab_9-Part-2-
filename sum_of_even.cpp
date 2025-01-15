#include <iostream>
using namespace std;
int isEven(int);
int main()
{
    int num;
    cout << "Sum of how many even numbers do you want: ";
    cin >> num;
    cout << "Total sum of " << num << "even numbers is " << isEven(num);

    return 0;
}
int isEven(int num)
{
    int evenCount = 0;
    int sumOfEvens = 0;
    for (int i = 0; i < num; i++)
    {
        if (i % 2 == 0)
            evenCount++;
        sumOfEvens += evenCount;
    }
    return sumOfEvens;
}