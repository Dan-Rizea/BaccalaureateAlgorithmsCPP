#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    float m;
    int n,nr=0,s=0;
    fstream f("numere.txt");
    while(f>>n)
    {
        if(n>0)
        {
            nr=nr+1;
            s=s+n;
        }
    }

    m=s/(nr*1.0);
    cout<<m;
}
