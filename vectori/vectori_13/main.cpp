#include <iostream>

using namespace std;

int main()
{
    int k,n,i,j,nr=0;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=i;j>=1;j--)
             {cout<<j<<" ";nr++;
              if(nr==n) break;
             }
        if(nr==n) break;
    }
}
