#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream f("test.in");
    int x;
    while(!f.eof())
        {f>>x;cout<<x<<" ";}
}
