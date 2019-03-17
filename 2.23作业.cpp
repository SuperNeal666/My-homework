#include <iostream>

using namespace std;

int main()
{
    int a,b,c,d,e,Largest,smallest;
    cout<<"Enter five integers: ";
    cin>>a>>b>>c>>d>>e;
    Largest=a;
    if(a<b)
        Largest=b;
    if(Largest<c)
        Largest=c;
    if(Largest<d)
        Largest=d;
    if(Largest<e)
        Largest=e;
    Largest=a;
    if(b<a)
        smallest=b;
    if(smallest>c)
        smallest=c;
    if(smallest>d)
        smallest=d;
    if(smallest>e)
        smallest=e;
    cout<<"Largest= "<<Largest<<endl;
    cout<<"smallest= "<<smallest<<endl;
    return 0;
}
