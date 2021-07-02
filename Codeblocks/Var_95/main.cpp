#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char s1[20],s2[20],s3[20];
    int i,n,v;
    cin.get(s1,20);
    for(i=0;i<strlen(s1);i++)
    {
        if(s1[i]>='a'&&s1[i]<='z'&&s1[i-1]==32)
        n=i;
    }
    s3[0]=s1[n];
    strcpy(s2,s3);
    strcat(s2,". ");
    for(i=0;i<strlen(s1);i++)
    {
        if(s1[i]==32)
        {v=i-1;
        break;}
    }
    for(i=0;i<=v;i++)
    {
        s3[i]=s1[i];
    }
    strcat(s2,s3);
    cout<<s2;
}
