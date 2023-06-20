#include <iostream>
using namespace std;
int main(){
    int num1,num2,num3;
    cout<<"enter the first number";
    cin >>num1;
    cout<<"enter the second number";
	cin>>num2;
	cout<<"enter the third number";
	cin>>num3;
    if (num1>num2)
    {if (num1<num3)
    {
        cout<<"num3 is greater";
        /* code */
    }
    else{
        cout<<"num1 is greater";
        /* code */
    }
    }
    else
    {
        if (num2<num3)
    {
        cout<<"num3 is greater";
        /* code */
    }
    
    else{
        cout<<"num2 is greater";
    }
    }
    
    return 0;
}
// j
