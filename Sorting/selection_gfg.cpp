#include<bits/stdc++.h>
using namespace std;

  int select(int arr[], int i)
    {
         for (int i= 0; j < (sizeof(arr)/sizeof(int))-1; i++){
    int min_index = i;
        for (int j = i + 1; j < (sizeof(arr)/sizeof(int)); j++)
        {
            if (arr[j] < arr[min_index])
            {
                min_index = j;
            }
        }
           return min_index;
         }
  
    }

 int main(){
    
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

   select(arr, 0);

    return 0;
}