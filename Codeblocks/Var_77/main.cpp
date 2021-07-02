#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char s[255];
    int i;
    cin.get(s,255);
    for(i=0;i<=strlen(s);i++)
    {
        if(s[i]>='a'&&s[i]<='z'&&s[i+1]==' ') s[i]=s[i]-32;
        else if(s[i]>='a'&&s[i]<='z'&&s[i-1]==' ') s[i]=s[i]-32;
    }
    s[0]=s[0]-32;
    s[strlen(s)-1]=s[strlen(s)-1]-32;
    cout<<s;
}
