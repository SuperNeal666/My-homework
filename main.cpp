#include <iostream>
#include<cmath>
using namespace std;

int main()
{
    float a,b,c,d,x1,x2;
    cin>>a>>b>>c;
    d=b*b-4*a*c;
    if(d<0)
    {cout<<"�˷����޽�";
    }
    else if(d==0)
    {x1=(-b)/(2*a);
    cout<<"x1="<<x1;}
    else
    {x1=(-b+sqrt(d))/(2*a);
    x2=(-b-sqrt(d))/(2*a);
    cout<<"x1="<<x1<<"x2="<<x2;}
    return 0;
}