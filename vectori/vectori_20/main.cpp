#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    fstream f("numere.txt");
    int v[90],n,x,i;
    n=0;
    while(f>>x)
    {
        for(i=1;i<=n;i++)
        {
            if(v[i]>v[i+1]&&v[i+1]>v[i+2]&&v[i+2]>v[i+3])
                cout<<v[i]<<" "<<v[i+1]<<" "<<v[i+2]<<" "<<v[i+3];
                else cout<<"NU EXISTA";
        }
        {n++;
        v[n]=x;}
    }

}
