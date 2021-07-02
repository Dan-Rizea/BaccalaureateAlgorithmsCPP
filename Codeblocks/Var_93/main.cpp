#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char s[200],x[200];
    int i;
    cin.get(s,200);
    cin.get();
    cin.get(x,200);
    cin.get();
    for(i=0;i<strlen(s);i++)
    {
        if((s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')&&(x[i]=='a'||x[i]=='e'||x[i]=='i'||x[i]=='o'||x[i]=='u')) cout<<"*";
        else if((s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')&&(x[i]!='a'||x[i]!='e'||x[i]!='i'||x[i]!='o'||x[i]!='u')) cout<<"?";
        else if((s[i]!='a'||s[i]!='e'||s[i]!='i'||s[i]!='o'||s[i]!='u')&&(x[i]=='a'||x[i]=='e'||x[i]=='i'||x[i]=='o'||x[i]=='u')) cout<<"?";
        else cout<<"#";
    }
}
