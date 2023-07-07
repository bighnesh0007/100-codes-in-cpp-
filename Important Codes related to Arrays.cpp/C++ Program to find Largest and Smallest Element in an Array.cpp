#include <iostream>
using namespace std;
int main(){
int arr[]={10,12,45,78,21,56,79};
int n=sizeof(arr)/sizeof(arr[0]);
int smallest=INT_MAX ,largest=INT_MIN;
for (int i = 0; i <n; i++)
{
    if (arr[i]<smallest )
    {
    smallest=arr[i];
    }
    if (arr[i]>largest)
    {
        largest=arr[i];
    }
}
cout<<smallest<<"\n"<<largest<<endl;
}