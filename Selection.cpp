#include <bits/stdc++.h>
using namespace std;




 void selection_sort(int arr[], int n)
{
    int i, j, min_index;
    for (int i = 0; i < n - 1; i++)
    {
        min_index = i;
        for (j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min_index])
            {
                min_index = j;
            }
        }
        swap(arr[min_index], arr[i]);
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

   selection_sort(arr, n);

    cout << "The Sorted array is:" << endl;
  for (int i = 0; i < n; i++)
    {
        cout << arr[i];
        cout << " ";
    }


  
    return 0;
}