#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int v[10]={0},i,x,n,maxx=0,nr;
    ifstream f("date.in");
    f>>n;
    for(i=1;i<=n;i++)
    {
        f>>x;
        if(x>maxx)
            {maxx=x;
             nr=1;}
         else if(x==maxx)
                nr++;
    }
    cout<<maxx<<" "<<nr;
}
