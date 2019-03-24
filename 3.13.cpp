#include <iostream>
#include"009.h"
using namespace std;£¿3.13
int main()
{
    string name3,name4;
    string name5,name6;
    int money2,money3;
    Employee myEmployer1;
    Employee myEmployer2;
    cout<<"Please enter the first surname : "<<myEmployer1.getsurname();
    cin>>name3;
    myEmployer1.setsurname(name3);
    cout<<"Please enter the first name    : "<<myEmployer1.getname();
    cin>>name4;
    myEmployer1.setname(name4);

    cout<<"Please enter the second surname: "<<myEmployer2.getsurname();
    cin>>name5;
    myEmployer2.setsurname(name5);
    cout<<"Please enter the second name   : "<<myEmployer2.getname();
    cin>>name6;
    myEmployer2.setname(name6);

    cout<<"First one's salary is : ";
    cin>>money2;
    if(money2<0)
        money2=0;
    myEmployer1.setsalary(money2);

    cout<<"Second one's salary is: ";
    cin>>money3;
    if(money3<0)
        money3=0;
    myEmployer2.setsalary(money3);

    cout<<"\n"<<"\n";
    cout<<name3<<name4<<"'s salary is   : "<<money2<<"\n";
    myEmployer1.displayMessage();

    cout<<name5<<name6<<"'s salary is   : "<<money3<<"\n";
    myEmployer2.displayMessage();
}
