#include <iostream>
using namespace std;
int main(){
int sum,num;
sum=0;
cout<<"enter the number : ";
cin>>num;
while (num!=0)
{
    sum=sum+num%10;
    num=num/10;
}

    cout<<"sum is "<<sum;
    return 0;
}

