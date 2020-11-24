#include <iostream>
#include<string.h>

using namespace std;

int main(void)
{
    int T;
    cin>>T;
    string s[3];
    int k=0;
    while(T--)
    {
        k++;
        int c[210][210];//¼ÇÂ¼s[0]s[1]×´Ì¬
        cin>>s[0]>>s[1]>>s[2];
        int a=s[0].length();
        int b=s[1].length();
        memset(c,0,sizeof(c));
        c[0][0]=1;
        int i,j;
        for(i=0;i<=a;i++)
        {
            for(j=0;j<=b;j++)
            {
                if(c[i][j]&&s[0][i]==s[2][i+j]&&i<a)
                    c[i+1][j]=1;
                if(c[i][j]&&s[1][j]==s[2][i+j]&&j<b)
                    c[i][j+1]=1;
            }
        }
        for(i=0;i<=a;i++)
        {
            for(j=0;j<=b;j++)
            {
                cout<<c[i][j]<<"*";
            }
            cout<<"\n";
        }
        if(c[a][b]==1)
            cout<<"Data set "<<k<<": yes\n";
        else
            cout<<"Data set "<<k<<": no\n";
    }
}
