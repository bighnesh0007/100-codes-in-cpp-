#include <iostream>
using namespace std;
int main(){
    int arr[] = {10,20,30,40,30,50,60,60,70,90,1011};
    int n =sizeof(arr)/sizeof(arr[0]);
    int sum=0;
    for (int i = 0; i < n; i++)
    {
        sum+=arr[i];
    }
    cout<<sum<<endl;
}