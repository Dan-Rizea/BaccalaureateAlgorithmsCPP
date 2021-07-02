#include <iostream>
#include <cstring>
using namespace std;

int main()
{
   char s[200],sep[]=" ",*p,voc[]="aeiou";
   int nr=0;
   cin.get(s,200);
   p=strtok(s,sep);
   while(p)
   {
       if(strchr(voc,p[0])) strrev(p);
       cout<<p<<" ";
       p=strtok(NULL,sep);
   }

}

