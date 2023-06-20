#include <iostream>
using namespace std;
int main(){
    int num1,num2;
	cout<<"enter the first number";
    cin >>num1;
    cout<<"enter the second number";
	cin>>num2;
    int sum;
    sum=0;
   for (num1; num1 < num2; num1++)
   {
    /* code */
    sum+=num1;
   }
   cout<<"sum:"<<sum;

    
    return 0;
}
