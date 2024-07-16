#include <bits/stdc++.h>
using namespace std;
bool check(int arr[], int n){


    for(int i=0; i<n; i++){
        if(arr[i]>=arr[i-1]){
          cout<<"true";
        }
        
        else {
           cout<<"false";
        break;
        }
          cout<<"true";
    }

  
}

int main()
{

 int arr[5] = {5, 7, 9, 11, 12};
    int n = 5;
check(arr,5);

    return 0;
}