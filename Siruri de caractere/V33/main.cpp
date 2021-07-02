#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char s[255],s1[255];
    int i,j,nr=0,v=0;
    cin.get(s,255);
    for (i=66;i<=90;i++)
    {
    for(j=0;j<=strlen(s);j++)
    {
            if(i!=69 && i!=73 && i!=79 && i!=85 && s[j]==i)
            {
                nr=nr+1;
                s1[v]=s[j];
                i=i+1;
                v=v+1;
                s1[v]=255;
                v=v+1;
            }
    }
    }
    cout<<nr<<endl;
    cout<<s1;
}
