#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char s[200];
    int i;
    cin.get(s,200);
    for(i=0;i<strlen(s);i++)
    {
        if(s[i]>='a'&&s[i]<='z') s[i]=s[i]-32;
        else if(s[i]>='A'&&s[i]<='Z') s[i]=s[i]+32;
    }
    cout<<s;
}
