#include <iostream>
using namespace std;
int *selectionSort(int array[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (array[j] < array[i])
            {
                int temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
    return array;
}

int main()
{
    int n;
    cout << "Enter the number of elements to be entered: ";
    cin >> n;
    int array[n];
    cout << "Enter the elements: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    int *p = selectionSort(array, n);
    cout << "The elements in ascending order  are: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << *(p + i) << endl;
    }
    return 0;
}