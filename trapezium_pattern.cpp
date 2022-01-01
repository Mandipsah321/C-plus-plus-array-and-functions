#include <iostream>
using namespace std;
int main()
{

    int num;
    cout << "Enter the number of rows: ";
    cin >> num;
    int space;
    int leftterm = 1;
    int rightterm = num * num + 1;
    for (int i = num; i > 0; i--)
    {
        for (space = num; space > i; space--)
            cout << "   ";
        for (int j = 1; j <= i; j++)
        {
            cout << leftterm<<"  ";
            leftterm++;
        }
        for (int j = 1; j <= i; j++)
        {
            cout << rightterm<<"  ";
            rightterm++;
        }
        rightterm = rightterm - (i - 1) * 2 - 1;
        cout << endl;
    }
}
