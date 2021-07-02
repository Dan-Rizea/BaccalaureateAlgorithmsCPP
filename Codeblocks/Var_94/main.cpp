#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char s1[20],s2[20],s3[20],s4[20];
    int i,n,p,j;
    cin.get(s1,20);
    for(i=0;i<strlen(s1);i++)
    {
        if(s1[i]>='a'&&s1[i]<='z'&&s1[i+1]==NULL)
        {n=i;
        break;}
    }
    for(i=0;i<=n;i++)
    {
        s2[i]=s1[i];
    }
    cout<<s2;
    for(i=0;i<strlen(s1);i++)
    {
        if(s1[i]>='A'&&s1[i]<='Z'&&s1[i-1]==NULL)
        {p=i;
        break;}
    }
    j=0;
    for(i=p;i<=strlen(s1);i++)
    {
        s3[j]=s1[i];
        j++;
    }
    strcpy(s4,s3);
    strcat(s4," ");
    strcat(s4,s2);
    cout<<s2;
}
