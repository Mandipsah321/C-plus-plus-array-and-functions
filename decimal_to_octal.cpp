#include <iostream>
using namespace std;
int decimalToOctal(int n)
{
    int ans = 0;
    int x = 1;
    int lastdigit;
    while (n >= x)
        x = x * 8;
    x = x / 8;
    while (n > 0)
    {
        lastdigit = n / x;
        n = n - lastdigit * x;
        x = x / 8;
        ans = ans * 10 + lastdigit;
    }
    return ans;
}
int main()
{
    int n;
    cout << "Enter the number:  ";
    cin >> n;
    cout << "The equivalent Octal number is: " << decimalToOctal(n);
    return 0;
}