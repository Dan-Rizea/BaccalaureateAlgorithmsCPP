#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int v[100]={0},n,x,i,j,aux;
    ifstream f("bac.txt");
    f>>n;
    for(i=1;i<=n;i++)
    {
        f>>x;
        v[x]++;
        for(i=1;i<=n;i++)
        if(v[x]==1) cout<<x<<" ";
    }



}
