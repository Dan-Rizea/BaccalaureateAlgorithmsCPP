#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int v[100],n,i,nr=0,aux;
    fstream f("bac.txt");
        v[i]=0; //initializarea
        while (f>>n)  //citire n
        {
            for(i=999;i>=100;i--)
        {
            if(v[i]!=n)   //daca nu se gaseste niciun element in n, se desfasoara
            {
                nr=nr+1;  //contor
                if(nr==2) //daca a gasit 2 numere
                    {cout<<aux<<v[i]; // cand a gasit 2 numere, bucla se sfarseste si se afiseaza cele 2 numere
                        break;}
                aux=v[i]; // primul numar
            }
            if (nr<2) cout<<0; //daca nu sunt 2 numere, se afiseaza 0
        }
    }

}
