#include<iostream>

using namespace std;

int main()
{
    int i,n,v[100],x,j,aux;
    cout<<"n="; cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>v[i];
    }
    for(i=1;i<n;i++)
    for(j=i+1;j<=n;j++)
        if(v[i]>v[j])
    {
        aux=v[i];
        v[i]=v[j];
        v[j]=aux;
    }
    for(i=1;i<=n;i++)
        cout<<v[i]<<" ";
}
