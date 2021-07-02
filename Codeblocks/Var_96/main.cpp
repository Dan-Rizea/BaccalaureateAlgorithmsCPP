#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char x[20],y[20],z[20];
    int i;
    cin.get(y,20);
    cin.get();
    cin.get(x,20);
    for(i=0;i<strlen(x);i++)
    {
        if(strchr("aeiou",x[i]))
        strcpy(x+i,x+i+1);
    }
    strcpy(z,x);
    cin.get();
    strcat(z," ");
    strcat(z,y);
    cout<<z;
}
