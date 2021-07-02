#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int nr=0,pa_i;
    float n;
    fstream f("numere.txt");
    while(f>>n)
    {
        pa_i=n;
        if(n==pa_i && n>0) nr=nr+1;
    }
    if (nr>=10) cout<<"DA";
      else cout<<"NU";
}
