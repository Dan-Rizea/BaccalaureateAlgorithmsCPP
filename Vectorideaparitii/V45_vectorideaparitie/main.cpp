#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int v[100],i,j,n,aux;
    ifstream f("numere.txt");
    f>>n;
    for(i=1;i<=n;i++)
    {
        f>>v[i];
    }
    for(j=1;j<=n;j++)
    for(i=1;i<n;i++)
        if(v[i]>v[j])
    {
        aux=v[i];
        v[i]=v[j];
        v[j]=aux;
    }
    for(i=1;i<=n;i++)
        cout<<v[i]<<" ";
        }



