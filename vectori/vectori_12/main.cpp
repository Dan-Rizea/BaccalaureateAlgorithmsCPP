#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int m,n,ok,i,j,nr=0,a[100],b[100];
    fstream f("bac.txt");
    f>>m>>n;
    for(i=1;i<=m;i++)
       f>>a[i];
    for(i=1;i<=n;i++)
       f>>b[i];

    for(j=1;j<=n;j++)
    {
        ok=0;
        for(i=1;i<=m;i++)
            if(b[j]==a[i]) ok=1;
        if(ok==0) {cout<<b[j]<<" ";nr++;}
    }
    cout<<endl<<nr;
}
