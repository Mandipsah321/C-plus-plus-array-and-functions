#include <iostream>
using namespace std;

int *insertionSort(int array[], int n)
{
    for(int i=1; i<n; i++){
        int current=array[i];
        int j=i-1; 
        while(array[j]>current && j>=0){
            array[j+1]=array[j];
            j--;
        }
        array[j+1]=current;
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
    int *p = insertionSort(array, n);
    for (int i = 0; i < n; i++)
    {
        cout << *(p + i) << endl;
    }

    return 0;
}