#include <iostream>

using namespace std;

int main()
{
    int a[50][50],i,j,n,k;
    cout<<"n=";
    cin>>n;
    cin>>a[i][j];
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
    {
    if(a[i][j]<a[i][j+1])
        k=a[i][j];
    cout<<k<<" ";
    }
}
}
