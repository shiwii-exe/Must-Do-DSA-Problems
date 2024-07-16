#include <bits/stdc++.h>
using namespace std;

// <.......This is not a better approach than sorting but more optimal solution can be achieved......>
// <.......This is not a better approach than sorting but more optimal solution can be achieved......>
// <.......This is not a better approach than sorting but more optimal solution can be achieved......>
// <.......This is not a better approach than sorting but more optimal solution can be achieved......>


int largest(int arr[], int n)
{
    int largest = arr[0];

    for (int i = 1; i < n; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }
    return largest;
}

int slargest(int arr[], int n)
{
    int max = largest(arr, n);
    int slargest = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > slargest && arr[i] != max)
        {
            slargest = arr[i];
        }
    }
    cout << slargest;
}

int main()
{

    int arr[5] = {5, 7, 9, 2, 12};
    int n = 5;

    slargest(arr, 5);
    return 0;
}