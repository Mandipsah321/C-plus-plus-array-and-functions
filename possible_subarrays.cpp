#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int ctr = 0;
    int count = 0;
    int i = 0;
    int flag = 0;
    cout << "The possible subarrays are: " << endl;
    for (i; ctr < n; i++)
    {
        for (int j = ctr; j <= count; j++)
        {
            cout << arr[j] << " ";
            flag = 1;
        }
        if (flag == 1)
            cout << endl;
        count++;
        if (i == n - 1)
        {
            ctr++;
            count = 0;
            i = -1;
            flag = 0;
        }
    }
    return 0;
}