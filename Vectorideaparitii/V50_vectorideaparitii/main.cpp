#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int x,n,v[100]={0},aux,i;
    ifstream f("bac.in");
    ofstream g("bac.out");
    f>>n;
    for(i=1;i<=n;i++)
    {
        f>>x;
        v[x]++;
        cout<<v[x]<<" ";
    }

}

