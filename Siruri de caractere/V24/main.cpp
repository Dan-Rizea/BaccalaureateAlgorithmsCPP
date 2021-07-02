#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char s[100];
    char v[100];
    int i,nr=0;
    cout<<"primul sir =";
    cin.get(s,100);
    cout<<"al doilea sir=";
    cin.get(v,100);
    for(i=strlen(s)-1;i>=0;i--)
        for(i=strlen(v)-1;i>=0;i--)
    {
        if(s[i]==v[i])
        {
            nr=nr+1;
            cout<<s[i];
        }
        else if(nr==0) cout<<"NU EXISTA";
        //break;
    }

}
