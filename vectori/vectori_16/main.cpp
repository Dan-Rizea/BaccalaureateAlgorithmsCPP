#include <iostream>

using namespace std;

int main()
{
    int v[11],n,i,nr=0,p=0;
    for(i=1;i<=10;i++)
        {cin>>v[i];
          if(v[i]%13==0)
            nr=nr+1;
        }
    cout<<nr<<" ";
    for(i=1;i<=10;i++)
    {
        if(v[i]%13==0)
             cout<<i<<" ";
    }

}
