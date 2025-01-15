#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter any number and I will print the Lucas series up to that number: ";
    cin >> num;

    int firstTerm = 2,
        secondTerm = 1,
        temp = 0;

    for (int i = 0; i < num; i++)
    {
        cout << firstTerm << " ";

        temp = firstTerm + secondTerm;

        firstTerm = secondTerm;

        secondTerm = temp;
    }

    cout << endl;
    return 0;
}