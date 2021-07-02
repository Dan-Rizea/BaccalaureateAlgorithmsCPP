#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char s[100];
    int i,j,v;
    cin.get(s,100);
    j=strlen(s-2);
    i=0;
    cout<<s<<endl;
    while(i<=j)
    {
        i++;
        j--;
        //strcpy(s,s+1);
        for(v=i;v<=j;v++)
        {
            cout<<s[v];
        }
        cout<<endl;
    }

}
