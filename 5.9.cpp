#include <iostream>

using namespace std;

int main()
{
    int multiply=1,oddnumber=1,a=0,b=0;
 for(int i=1;i<=15;i++)
 { a=(i-1)/2;
   b=i/2;
     if(a==b)
     {
        oddnumber=i;
        multiply=multiply*oddnumber;
     }

 }
 cout<<multiply;
 return 0;//
}
