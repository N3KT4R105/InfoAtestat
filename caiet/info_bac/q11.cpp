#include<iostream>
using namespace std;
int main()
{
    int n,a[100][100];
    cin>>n;
    for(int i=1;i<=n;i++)
        {
            a[i][n-i+1]=0;
            for(int j=0;n-i+1+j<=n;j++)
                a[i][n-i+1+j]=j;
            for(int k=0;n-i-k+1>=1;k++)
                a[i][n-i-k+1]=k;

        }

    for(int i=1;i<=n;i++)
    {for(int j=1;j<=n;j++)
        cout<<a[i][j]<<" ";
    cout<<endl;
    }

}
