#include<bits/stdc++.h>
using namespace std;

int partition(int arr[], int s, int e) {
    int pivot=arr[s];
    int cnt=0;
    for(int i=s+1; i<=e; i++) {
        if(arr[i]<=pivot) {
            cnt++;
        }
    }

    // place pivot at right position
    int pivotindex=s+cnt;
    swap(arr[pivotindex],arr[s]);

    //manage left and right part

    int i=s,j=e;
    while(i<pivotindex && j>pivotindex){

        // when left element is already smaller than pivot index

        while(arr[i]<pivot){
            i++;
        }

        while(arr[j]>pivot){
            j--;
        }

        if(i<pivotindex && j>pivotindex){
            swap(arr[i++], arr[j--]);
        }
    }

    return pivotindex;
}
void quick_sort(int arr[], int s, int e){

    //base case
    if(s>=e)
    return;

    //partition function

    int p=partition(arr,s,e);

    //sort left part
quick_sort(arr,s,p-1);

    //sort right part
quick_sort(arr,p+1,e);
}
 int main(){
    int arr[5] = {2,4,1,6,9};
    int n=5;

    quick_sort(arr, 0,n-1);
    
    cout<<"The sorted array is"<<endl;

    for(int i=0; i<n; i++){
        cout<< arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}