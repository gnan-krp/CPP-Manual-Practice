#include<iostream>
using namespace std;

class employee
{
    char name[20], city[20];
    float salary, DA , HRA, total;

    public:
        void getdata()
        {
            cout << "Enter Employee's Name = " << endl;
            cin >> name;

            cout << "Enter Employee's City = " << endl;
            cin >> city;

            cout << "Enter Employee's Salary = " << endl;
            cin >> salary;

            cout << "Enter Employee's Dearness Allowance = " << endl;
            cin >> DA;

            cout << "Enter Employee's House Rent = " << endl;
            cin >> HRA;
        }
        void calculate()
        {
            total = salary + (salary * DA/100.0) + (salary * HRA/100.0) ;
        }
        void display()
        {
            cout << "Name Of The Employee Is = " << name << endl;
            cout << "City Of The Employee Is = " << city << endl;
            cout << "Total Salary Of The Employee Is = " << total << endl;
        }
};

int main()
{
    int n,i;

    cout << "Enter Number Of Employees = " << endl;
    cin >> n;

    employee *e = new employee[n];

    cout << "Enter The Details Of The Employee : " << endl;
    for(i=0; i<n ; i++)
    {
        e[i].getdata();
    }

    cout << "Details Of The Employee Are : " << endl;
    for(i=0; i<n ; i++)
    {
        e[i].calculate();
        e[i].display();
    }

    delete[] e;

    return 0;
}