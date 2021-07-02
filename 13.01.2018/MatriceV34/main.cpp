#include <iostream>

using namespace std;

int main()
{
    int a[20][20],i,j,n,k=2;
    cout<<"n=";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(k%3!=0)
            {a[i][j]=k;
            k=k+2;}
            else{
            a[i][j]=k+2;
            k=k+4;
            }
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}
