#include<iostream>
#include"009.h"
using namespace std;
Employee::Employee()
{
    salary=0;
}
void Employee::setname(string name1)
{
    name=name1;
}
string Employee::getname() const
{
    return name;
}
void Employee::setsurname(string name2)
{
    surname=name2;
}
string Employee::getsurname() const
{
    return surname;
}
void Employee::setsalary(int money1)
{
    salary=money1;
}
int Employee::getsalary() const
{
    return salary;
}
void Employee::displayMessage()
{
    addsalary=salary*1/10+salary;
    cout<<"After adding salary,his/her salary is: "<<addsalary<<"\n";
}
