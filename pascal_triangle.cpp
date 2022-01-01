#include <iostream>
using namespace std;
int factorial(int num)
{
    int fact = 1;
    for (int i = 2; i <= num; i++)
    {
        fact = fact * i;
    }
    return fact;
}

int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << factorial(i) / (factorial(i - j) * factorial(j));
            cout << "  ";
        }
        cout << endl;
    }
    return 0;
}