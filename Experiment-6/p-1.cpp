#include<iostream>
using namespace std;

class Student
{
    protected:
        string university, degree;

    public:
        void getdata()
        {
            cout << "Enter Name Of The Univrsity = " << endl;
            cin >> university;
            cout << "Enter Branch = " << endl;
            cin >> degree;
        }
        void showdata()
        {
            cout << "Name Of The University Is = " << university << endl;
            cout << "Branch Of The Student Is = " << degree << endl;
        }
};

class Employee
{
    protected:
        string name;
        float salary;

    public:
        void getdata()
        {
            cout << "Enter Name Of The Employee = " << endl;
            cin >> name;
            cout << "Enter Salary Of The Employee Is = " << endl;
            cin >> salary;
        }
        void showdata()
        {
            cout << "Name Of The Employee Is = " << name << endl;
            cout << "Salary Of The Employee Is = " << salary << endl; 
        }
};

class Manager : private Student, private Employee
{
    public:
        void getdata()
        {
            Student::getdata();
            Employee::getdata();
        }
        void showdata()
        {
            cout << "Manager Details Are : " << endl;
            Student::showdata();
            Employee::showdata();
        }
};

int main()
{
    Manager m;

    m.getdata();
    m.showdata();

    return 0;
}