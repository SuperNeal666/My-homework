#include <iostream>

using namespace std;

int main()
{ int a,b,c,Sum,Averger,Product,Min,Max;
 cin>>a>>b>>c;
 Sum=a+b+c;
 cout<<"Sum= "<<Sum<<endl;
 Averger=(a+b+c)/3;
 cout<<"Average= "<<Averger<<endl;
 Product=a*b*c;
 cout<<"Product= "<<Product<<endl;
 Min=c;
 if(a<c)
    Min=a;
 if(b<a)
    Min=b;
 cout<<"Smallest= "<<Min<<endl;

 Max=a;
 if (b>a)
    Max=b;
 if(c>b)
    Max=c;
    cout<<"Largest= "<<Max<<endl;
    return 0;
}
