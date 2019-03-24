#include <iostream>
#include <string>

using namespace std;

class account
{
public:
    explicit account(int c)
    {
      a(c);
    }
    void a(int b)
    {
       money=b;
    }
    int b()
    {
      return money;
    }
    void in(int number)
    {
      money=money+number;
    }
    void out(int number)
    {
       if(number>money)
       {
         cout<<"F"<<endl;

        }
        else
        {
          money=money-number;
        }

    }
private:
    int money;
};
int main()
{
  account mybalance(1);
  mybalance.in(2);
  cout<<mybalance.b()<<endl;
  mybalance.out(4);
  cout<<mybalance.b()<<endl;

  }
