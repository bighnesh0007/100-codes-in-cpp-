#include <iostream>
#include <string>
using namespace std;
int main(){
    int n=5,k=1;
    for (int i=1; i <=n ; i++)
        {
            for (int j=1;j<=n; j++)
                {
                   cout<<(i*j)<<" ";
                }
             cout<<endl;
        }
    return 0;
}

