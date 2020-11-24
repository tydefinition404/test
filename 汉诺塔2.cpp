#include <iostream>

using namespace std;

long long int f(int n)
{
    long long int step3[10000],step4[10000];
    step3[1]=1,step4[1]=1,step4[2]=3;

    for(int i=2;i<=n;i++)
        step3[i]=2*step3[i-1]+1;

    for (int i=3;i<=n;i++)
    {
        step4[i]=1e15;
        for(int j=1;j<i-1;j++)
        {
            long long temp;
            temp= step3[j]*2+step4[i-j-1]*2+1;
            if(temp>0&&temp<step4[i]) step4[i]=temp;
        }

    }
    return step4[n];
}
int main(void)
{
    int n;
    while(cin>>n)
    {
        cout <<f(n)<<'\n';
    }
}
