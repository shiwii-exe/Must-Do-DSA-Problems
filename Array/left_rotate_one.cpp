#include<bits/stdc++.h>
using namespace std;

//  <........LEFT ROTATE AN ARRAY BY ONE PLACE.........>
//  <........LEFT ROTATE AN ARRAY BY ONE PLACE.........>
//  <........LEFT ROTATE AN ARRAY BY ONE PLACE.........>

void printArray(int arr[], int n) {

    for(int i=0; i<n; i++){
        cout<< arr[i] <<" ";
    }cout<<endl;
}

void left_rotate_one(int arr[], int n){
int temp=arr[0];
for(int i=1; i<n; i++){
    arr[i-1]=arr[i];
}
arr[n-1]=temp;
}

 int main(){

    
    int arr[5] = {5, 7, 9, 2, 12};
    int n = 5;

    left_rotate_one(arr, 5);
    printArray(arr,5);

    
    return 0;
}