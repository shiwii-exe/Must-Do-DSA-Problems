#include <bits/stdc++.h>
using namespace std;

//<...This is optimal solution of finding second largest element...>
//<...This is optimal solution of finding second largest element...>
//<...This is optimal solution of finding second largest element...>

int slargest(int arr[], int n)
{
    int slargest = 0;
    int largest = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > largest)
        {
            slargest = largest;
            largest = arr[i];
        }
        else if (arr[i] < largest && arr[i] > slargest)
        {
            slargest = arr[i];
        }
    }
    return slargest;
}

int main()
{

    int arr[5] = {5, 7, 9, 2, 12};
    int n = 5;

    slargest(arr, 5);

    return 0;
}