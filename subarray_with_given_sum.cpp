#include "bits/stdc++.h"
using namespace std;
int main()
{
    int n;
    int s;
    cout << "Enter the number of elements to be entered: ";
    cin >> n;
    cout << "Enter the sum to be checked: ";
    cin >> s;
    cout << "Enter the numbers: " << endl;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int i = 0, j = 0, st = -1, en = -1, sum = 0;
    while (j < n && sum + a[j] <= s)
    {
        sum = sum + a[j];
        j++;
    }
    if (sum == s)
    {
        cout << "The starting and ending subindex of subarray is: " << i + 1 << " "
             << "and"
             << " " << j << " "
             << "respectively";
        return 0;
    }
    while (j < n)
    {
        sum = sum + a[j];
        while (sum > s)
        {
            sum = sum - a[i];
            i++;
        }
        if (sum == s)
        {
            st = i + 1;
            en = j + 1;
            break;
        }
        j++;
    }
        cout << "The starting and ending subindex of subarray is: " << st << " "
             << "and"
             << " " << en << " "
             << "respectively";
        return 0;
    }