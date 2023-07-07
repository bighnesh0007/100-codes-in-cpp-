#include <iostream>
using namespace std;
int main(){

  int arr[] = { 34, 5, 89, 90, 56};
  int n = sizeof(arr)/ sizeof(arr[0]);

  int mini = INT_MAX;

  for(int i=0; i<n; i++){
    if(arr[i]<mini)
      mini = arr[i];
  }

  cout<<mini;
}