#include <bits/stdc++.h>
using namespace std;

int largest(int arr[], int n){
    int largest=arr[0];

    for(int i=1;i<n;i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
    }
    return largest;
}

int main()
{

    int arr[5] = {5, 7, 9, 2, 12};
    int n = 5;
largest(arr,5);
    return 0;
}