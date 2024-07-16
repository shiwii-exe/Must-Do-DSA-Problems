#include <bits/stdc++.h>
using namespace std;

void bubble_sort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        bool swapped = false;
        for (int j = 0; j < n - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (swapped = false)
        {
            break;
        }
    }
}
int main()
{

    int n;
    cout << "Enter the size of array" << endl;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << endl;

    cout << "The given array is:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
        cout << " ";
    }

    cout << endl;

    bubble_sort(arr, n);

    cout << "The Sorted array is:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
        cout << " ";
    }
    return 0;
}