#include<iostream>
using namespace std;
class Employee
{
 public:
     explicit Employee();
     void setname(string name1);
     string getname() const;
     void setsurname(string name2);
     string getsurname() const;
     void setsalary(int money1);
     int getsalary() const;
     void displayMessage();
 private:
    string name;
    string surname;
    int salary,addsalary;
};
