#include<bits/stdc++.h>
using namespace std;
int remove_duplicates(int arr[], int n){

int i=0;
for(int j=1; j<n;j++){
    if(arr[j]!=arr[i]){
        arr[i+1]=arr[j];
        i++;
    }
    
}
 cout<<(i+1);


}
 int main(){

     int arr[11] = {2, 2, 4, 5, 7, 7, 8, 9,  9, 12, 12};
    int n = 11;

   remove_duplicates(arr, 11);

    
    return 0;
}