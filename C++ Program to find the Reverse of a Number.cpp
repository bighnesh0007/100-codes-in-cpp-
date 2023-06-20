#include <iostream>
#include <string>
using namespace std;
int main(){
    int num,reverse=0,rem,temp;
    cin>>num;
    temp=num;
    // for ex:- num=123321
    while (temp!=0)
    {
        rem=temp%10;
        reverse=reverse*10+rem;
        temp/=10;
    }
    cout<<reverse;
}
