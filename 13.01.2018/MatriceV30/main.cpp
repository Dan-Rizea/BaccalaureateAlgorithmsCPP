#include<iostream>

using namespace std;

int main()
{
    int A[20][20],n,i,j;
    cout<<"n="; cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i==1) A[i][j]=1;
            else if(j==1) A[i][j]=1;
            else A[i][j]=A[i][j-1]+A[i-1][j];
            cout<<A[i][j]<<" ";
        }
      cout<<endl;
    }
}
