#include <iostream>
#include <cstring>
using namespace std;

int main()
{
   char s[200],sep[]=" ,?!",*p;

   cin.get(s,200);
   p=strtok(s,sep);
   while(p)
   {
       cout<<p<<endl;
       p=strtok(NULL,sep);
   }

}
