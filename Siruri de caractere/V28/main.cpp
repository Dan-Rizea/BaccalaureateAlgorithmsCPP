#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char s1[20],s2[20],s3[20];
    int i,ok=0;
    cin.get(s1,20);
    strcpy(s2,s1);
    for(i=0;i<strlen(s1);i++)
    {
        if(s2[i]=='a')
        {strcpy(s2+i,s2+i+1);
        ok=1;}
        strcpy(s3,s2);
    }
    if (ok==1) cout<<s3<<endl;
    ok=0;
    strcpy(s2,s1);
    for(i=0;i<strlen(s1);i++)
    {
        if(s2[i]=='e')
        {strcpy(s2+i,s2+i+1);
        ok=1;}
        strcpy(s3,s2);
    }
    if (ok==1) cout<<s3<<endl;
    ok=0;
    strcpy(s2,s1);
    for(i=0;i<strlen(s1);i++)
    {
        if(s2[i]=='i')
        {strcpy(s2+i,s2+i+1);
        ok=1;}
        strcpy(s3,s2);
    }
    if (ok==1) cout<<s3<<endl;
    ok=0;
    strcpy(s2,s1);
    for(i=0;i<strlen(s1);i++)
    {
        if(s2[i]=='o')
        {strcpy(s2+i,s2+i+1);
        ok=1;}
        strcpy(s3,s2);
    }
    if (ok==1) cout<<s3<<endl;
    ok=0;
    strcpy(s2,s1);
    for(i=0;i<strlen(s1);i++)
    {
        if(s2[i]=='u')
        {strcpy(s2+i,s2+i+1);
        ok=1;}
        strcpy(s3,s2);
    }
    if (ok==1) cout<<s3<<endl;

}

