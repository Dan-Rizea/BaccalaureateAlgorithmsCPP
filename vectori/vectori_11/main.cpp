#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int nr=0,n,i,OK,j,x;
    ifstream f("bac.txt");
    f>>n;
    for(i=1;i<=n;i++)
    {
        f>>x;
        OK=1;
        for(j=2;j<=x/2;j++)
        {
            if(x%j==0) OK=0;
        }
        if(OK==1) nr=nr+1;
        if (x==1) nr=nr-1;
    }
    cout<<nr;

}
