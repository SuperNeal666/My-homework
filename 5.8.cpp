#include <iostream>

using namespace std;

int main()
{
    int number1=0;
    int numbers=0;
    int minimum=0;
    cout<<"Enter the quality of the numbers: ";
    cin>>number1;
    minimum=number1;
    for(int counter=1;counter<=number1;counter++)
    {
        cout<<"Enter the numbers: ";//������Щ��
        cin>>numbers;
        if(numbers<minimum)
        {
            minimum=numbers;
        }
        cout<<minimum;
    }

}
