#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream f("bac.txt");
    int v[100]={0},x,t,nr=0;
    while(f>>x)
    {
        while(x!=0)
        {t=x%100;
         v[t]++;
         x=x/10;
        }
    }
    for(x=10;x<=99;x++)
      if(v[x]==1) {cout<<x<<" " ; nr++;}
    if(nr==0)  cout<<"Nu exista";
}
