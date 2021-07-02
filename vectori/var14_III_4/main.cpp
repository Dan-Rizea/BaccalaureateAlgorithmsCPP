#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream f("date.in");
    int n;
    int c,v[10]={0},i;
    f>>n;
    for(i=1;i<=n;i++)
    {
        f>>c;
        v[c]++;
    }
    for(c=0;c<=9;c++)
       for(i=1;i<=v[c];i++)
         cout<<c<<" ";

}
