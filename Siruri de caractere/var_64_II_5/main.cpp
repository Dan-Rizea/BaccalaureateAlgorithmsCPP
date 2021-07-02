#include <iostream>
#include <cstring>
using namespace std;

int main()
{
   char s[200],sep[]=" ",*p,voc[]="aeiouAEIOU";
   int nr=0;
   cin.get(s,200);
   p=strtok(s,sep);
   while(p)
   {
       if(strchr(voc,p[0]) && strchr(voc,p[strlen(p)-1])) nr++;
       p=strtok(NULL,sep);
   }
   if(nr==0) cout<<"Nu exista";
    else cout<<nr;
}
