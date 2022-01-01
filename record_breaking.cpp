#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number of days: ";
    cin >> n;
    cout << "Enter the number of tourists :" << endl;
    int array[n];
    if (n == 1)
    {
        cout << 1;
        return 0;
    }
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    int mx = -1;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (i == n - 1 && array[i] > mx)
        {
            ans++;
            cout << "The number of record breaking days is: ";
            cout << ans;
            return 0;
        }
        if (array[i] > mx && array[i] > array[i + 1])
        {
            ans++;
        }
        mx = max(mx, array[i]);
    }
    cout << "The number of record breaking days is: ";
    cout << ans;
    return 0;
}