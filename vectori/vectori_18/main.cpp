#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    fstream f("numere.txt");
    int v[100],n,x,i,nr=0;
    n=0;
    while(f>>x)
    {
        n++;
        v[n]=x;
    }

    for(i=1;i<=n-3;i++)
            if(v[i]<v[i+1]&&v[i+1]<v[i+2]&&v[i+2]<v[i+3])
                {cout<<v[i]<<" "<<v[i+1]<<" "<<v[i+2]<<" "<<v[i+3]<<endl;
                 nr++;
                 break;
                }
    if(nr==0)  cout<<"NU Ex";

}
