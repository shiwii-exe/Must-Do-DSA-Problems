#include <bits/stdc++.h>
using namespace std;

void reverse(int arr[], int start, int end)
{
    while (start <= end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end++;
    }
}

void left_rotate_d(int arr[], int n, int d)
{
    reverse(arr, 0, n - d - 1);
    reverse(arr, n - d, n - 1);
    reverse(arr, 0, n - 1);
}

int main()
{
    int arr[5] = {5, 7, 9, 2, 12};
    int n = 5;
    int d = 3;

    left_rotate_d(arr, 5, 3);
    cout << "The required array result is:" << endl;
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}