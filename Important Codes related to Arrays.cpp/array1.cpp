#include <iostream>
using namespace std;
int main(){
  int arr[]={10, 89, 67, 56, 45, 78};
  int n = sizeof(arr)/sizeof(arr[0]);
  cout<<n<<endl;
  int max_element = INT_MIN;
	cout<<max_element<<endl;
  for(int i=0; i<n; i++)
  {
  	if(arr[i]>max_element)
      	max_element = arr[i];
  }

  cout<<max_element;
}
