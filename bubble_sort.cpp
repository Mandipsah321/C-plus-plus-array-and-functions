#include <iostream>
using namespace std;

int *bubbleSort(int array[], int n)
{
    int counter = 1;
    while (counter < n)
    {
        for (int i = 0; i < n - counter; i++)
        {
            if (array[i] > array[i + 1])
            {
                int temp = array[i];
                array[i] = array[i + 1];
                array[i + 1] = temp;
            }
        }
        counter += 1;
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
    cout << "The elements in ascending order are:" << endl;
    int *p = bubbleSort(array, n);
    for (int i = 0; i < n; i++)
    {
        cout << *(p + i) << endl;
    }

    return 0;
}