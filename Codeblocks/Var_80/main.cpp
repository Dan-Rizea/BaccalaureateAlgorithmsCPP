#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char s[20],s1[20];
    int i,ok1=0,ok2=0,n,p;
    cin.get(s,20);
    for(i=0;i<strlen(s);i++)
    {
        if((s[i]>='a'&&s[i]<='z'&&(s[i]!='a'&&s[i]!='e'&&s[i]!='i'&&s[i]!='o'&&s[i]!='u'))||(s[i]>='A'&&s[i]<='Z'&&(s[i]!='A'&&s[i]!='E'&&s[i]!='I'&&s[i]!='O'&&s[i]!='U')))
        {
            ok1=1;
            p=s[i];
            break;
        }
    }
    for(i=strlen(s-1);i>=0;i--)
    {
    if((s[i]>='a'&&s[i]<='z'&&(s[i]=='a'&&s[i]=='e'&&s[i]=='i'&&s[i]=='o'&&s[i]=='u'))||(s[i]>='A'&&s[i]<='Z'&&(s[i]=='A'&&s[i]=='E'&&s[i]=='I'&&s[i]=='O'&&s[i]=='U')))
        {
            ok2=1;
            n=s[i];
            break;
        }
    }
    if(ok1==1&&ok2==1)
    {
        s1[0]=s[p];
        s[p]=s[n];
        s[n]=s1[0];
        cout<<s;
    }
    else cout<<"IMPOSIBIL";
}
