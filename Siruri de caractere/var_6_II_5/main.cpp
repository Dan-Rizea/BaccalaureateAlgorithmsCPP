#include <iostream>
#include <cstring>
using namespace std;

int main()
{
   char s[255];
   int i;
   cin.get(s,255);
   s[0]=s[0]-32;
   for(i=1;i<strlen(s);i++)
      if(s[i]>='a' && s[i]<='z' && s[i-1]==' ')
          s[i]=s[i]-32;
   cout<<s;
}
