#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char s[250],c1,c2;
    int i;
    cin.get(s,250);
    cin>>c1;
    cin>>c2;
    cout<<s<<endl;
    for(i=0;i<strlen(s);i++)
    {
        if(s[i]==c1) s[i]=c2;
        else if(s[i]==c2) s[i]=c1;
    }
    cout<<s;

}
