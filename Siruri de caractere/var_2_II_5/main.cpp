#include <iostream>
#include <cstring>
using namespace std;

int main()
{
   char s[20];
   int i,nr=0;
   cin.get(s,20);
   for(i=0;i<strlen(s);i++)
      if(s[i]>='A' && s[i]<='Z')
        { cout<<s[i];nr++;}
   if(nr==0) cout<<"cuvant vid";
}
