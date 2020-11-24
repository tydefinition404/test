#include <iostream>

using namespace std;

int main(void)
{
    int n;
    while(cin>>n&&n)
    {
        int f1=1,f2=0,f3=0,f4=0;
        for(int i=2;i<=n;i++)
        {
            f1+=f2;
            f2=f3;
            f3=f4;
            f4=f1;
        }
        int f=f1+f2+f3+f4;
        cout<<f<<'\n';
    }
}
