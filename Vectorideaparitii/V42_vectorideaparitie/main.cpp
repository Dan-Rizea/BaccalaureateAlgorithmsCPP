#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int i,v[100]={0},x,n;
    ifstream f("numere.txt");
    f>>n;
    for(i=1;i<=n;i++)
    {
        f>>x;
        v[x]++;
    }
    for(i=1;i<=99;i++)
        if(v[i]==1) cout<<i<<" " ;
}
