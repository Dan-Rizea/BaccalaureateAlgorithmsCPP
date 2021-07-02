#include <iostream>
#include <cstring>
using namespace std;

int main()
{
   char s[20];
   int i;
   cin.get(s,20);
   i=0;
   while(i<strlen(s))
       if(s[i]>='a' && s[i]<='z')
            strcpy(s+i,s+i+2);
        else i++;
   if(strlen(s)==0) cout<<"cuvant vid";
        else cout<<s;
}
