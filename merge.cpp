#include<bits/stdc++.h>
using namespace std;
void merge(int arr[], int low, int mid, int high){
    vector<int> temp;

    int left=low;
    int right=mid+1;
    while(left<=mid && right<=high){
        if(arr[left]<=arr[right]){
temp.push_back(arr[left]);
left++;
        }
        else{
            temp.push_back(arr[right]);
            right++;
        }
    }

    while(left<=mid){
        temp.push_back(arr[left]);
        left++;
    }

    while(right<=high){
        temp.push_back(arr[right]);
        right++;
    }

    for(int i=low; i<=high; i++){
        arr[i]=temp[i-low];
    }
}
void mS(int arr[], int low, int high){
    if(low==high){
        return;
    }
    int mid=(low+high)/2;
    mS(arr, low, mid);
    mS(arr,mid+1, high);
    merge(arr, low, mid, high);
}

void merge_sort(int arr[], int n){
    mS(arr,0,n-1);
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

    merge_sort(arr, n);

    cout << "The Sorted array is:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
        cout << " ";
    }
    return 0;
}