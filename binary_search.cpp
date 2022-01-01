#include <bits/stdc++.h>
using namespace std;
int binarySearch(int arr[], int key, int n)
{
    int s = 0;
    int e = n - 1;
    while (s <= e)
    {
        int mid = (s + e) / 2;
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] < key)
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
    }
    return -1;
}

int main()
{
    int n;
    int key;
    cout << "Enter the number of elements to be entered: ";
    cin >> n;
    cout << "Enter the element to be searched: ";
    cin >> key;
    int array[n];
    cout << "Enter the elements in ascending order: \n";
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    int result = binarySearch(array, key, n);
    cout << "The index of the entered element to be searched is:" << result;
    return 0;
}