#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int m,n,x,i,j,nr=0,a[100];
    fstream f("bac.txt");
    f>>m>>n;
    for(i=1;i<=m;i++)
       f>>a[i];
    i=1;
    f>>x;
    while(!f.eof())
    {
        if(x==a[i]) {nr++;i++;f>>x;}
           else if (x>a[i]) i++;
              else f>>x;
    }
    cout<<n-nr;
}
