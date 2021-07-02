#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char s1[100],s2[200];
    int i,j=0,ok=0;
    cin.get(s1,100);
    for(i=0;i<strlen(s1);i++)
    {
        if(s1[i]=='a'||s1[i]=='e'||s1[i]=='i'||s1[i]=='o'||s1[i]=='u'||s1[i]=='A'||s1[i]=='E'||s1[i]=='I'||s1[i]=='O'||s1[i]=='U')
        {
            s2[j]=s1[i];
            j++;
            s2[j]='*';
            j++;
            ok=1;
        }
        else
            {
                s2[j]=s1[i];
                j++;
            }
    }
    if(ok==1)cout<<s2;
    else cout<<"NU EXISTA VOCALE";
}
