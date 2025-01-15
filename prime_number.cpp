#include <iostream>
using namespace std;
int isPrime(int);

int main()
{
    int num;
    cout << " Enter a number: ";
    cin >> num;

    if (isPrime(num))
        cout << "It is a Prime number. \n";
    else
        cout << "It is not a prime number. \n";

    return 0;
}
int isPrime(int num)
{
    bool result = true;

    if (num <= 1)
    {
        return false;
    }

    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
            result = false;
    }
    return result;
}