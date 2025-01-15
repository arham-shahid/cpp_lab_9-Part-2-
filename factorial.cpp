#include <iostream>
using namespace std;
int isFactorial(int);

int main()
{
    int num;
    cout << "Enter any positive integer to find its Factorial: ";
    cin >> num;
    cout << "Factorial of " << num << " is " << isFactorial(num) << endl;

    return 0;
}
int isFactorial(int num)
{
    int copyNum = num;
    int product = 1;
    if (num == 0)
        return product;

    for (int i = 0; i < copyNum; i++)
    {
        product *= num;
        num--;
    }
    return product;
}