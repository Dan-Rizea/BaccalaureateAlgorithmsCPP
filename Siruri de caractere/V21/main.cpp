#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char s[250];
    int i,nr=0;
    cin.get(s,250);
    for(i=0;i<strlen(s);i++)
        if(s[i]==s[i+1] && s[i]!='*') cout<<s[i]<<s[i]<<" ";
}
