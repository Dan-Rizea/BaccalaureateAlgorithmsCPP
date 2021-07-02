#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int n,i=0;
    fstream f("bac.txt");
    while(f>>n)
    {
        cout<<n<<" ";
        i=i+1;
        if(i%5==0) {cout<<endl;}
    }
}
