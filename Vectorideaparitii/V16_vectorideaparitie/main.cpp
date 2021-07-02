#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int i,v[10]={0},x,j,aux;
    ifstream f("numere.txt");
        while(f>>x)
        {
            while(x>0)
            {
                v[x%10]++;
                x=x/10;
            }
        }
        for(x=9;x>=0;x--)
            for(j=1;j<=v[x];j++)
                cout<<x;
}
