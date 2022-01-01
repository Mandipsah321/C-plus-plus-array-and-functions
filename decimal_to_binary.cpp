#include <iostream>
using namespace std;
int decimalToBinary(int n)
{
    int ans = 0;
    int x = 1;
    int lastdigit;
    while (n >= x)
        x = x * 2;
    x = x / 2;
    while (n > 0)
    {
        lastdigit = n / x;
        n = n - lastdigit * x;
        x = x / 2;
        ans = ans * 10 + lastdigit;
    }
    return ans;
}
int main()
{
    int n;
    cout << "Enter the number:  ";
    cin >> n;
    cout << "The equivalent binary number is: " << decimalToBinary(n);
    return 0;
}