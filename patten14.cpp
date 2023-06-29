#include <iostream>
#include <string>
using namespace std;
int main(){
    int n=5,x;

    for (int i=1; i <=n; i++)
        {
            x=n-i+1;
            for (int j=1;j<=n; j++)
                {
                	cout<<x<<" ";
                    x=x+n;
                }
             cout<<endl;
        }
    return 0;
}

