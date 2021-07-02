#include <iostream>
#include <cstring>
using namespace std;

int main()
{
   char s[200],l;
   int i;
   cout<<"text=";cin.get(s,200);
   cout<<"litera=";cin>>l;
//   for(i=0;i<strlen(s);i++)
//      if(s[i]==l)
//         {strcpy(s+i,s+i+1);i--;}

   i=0;
   while(i<strlen(s))
      if(s[i]==l) strcpy(s+i,s+i+1);
     else i++;

   cout<<s;
}
