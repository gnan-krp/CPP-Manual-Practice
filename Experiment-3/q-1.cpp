#include<iostream>
using namespace std;

class student
{
    int rollNo;
    char name[20];
    float cpi;

    public:
        void getdata()
        {
            cout << "Enter Roll number Of The Student = " << endl;
            cin >> rollNo;

            cout << "Enter Name Of The Student = " << endl;
            cin >> name;

            cout << "Enter CPI Of The Student = " << endl;
            cin >> cpi;
        }

        void display()
        {
            cout << "Roll Number Of The Student Is  = " << rollNo << endl;
            cout << "Name Of The Student Is  = " << name << endl;
            cout << "CPI Of The Student Is  = " << cpi << endl;
        }

        void modify()
        {
            cout << "Enter New Name Of The Student = " << endl;
            cin >> name;

            cout << "Enter The New CPI Of The Student = " << endl;
            cin >> cpi;
        }

        int getrollno()
        {
            return rollNo;
        }

};

int main()
{
    int n, i, searchRoll;

    cout << "Enter Number Of Students = " << endl;
    cin >> n;
    
    student *s = new student[n];

    cout << "Enter Student Details : " << endl;
    for(i=0; i<n ; i++)
    {
        s[i].getdata();
    }

    cout << "Enter The Student's Roll No You Want To Modify The Details Of : " << endl;
    cin >> searchRoll;

    for(i=0 ; i<n ; i++)
    {
        if(s[i].getrollno() == searchRoll)
        {
            s[i].modify();
            cout << "Details Modified Succesfully! " << endl;
            break;
        }
    }

    cout << "Updated Student Details Are : " << endl;
    for(i=0; i<n ; i++)
    {
        s[i].display();
    }

    delete[] s;

    return 0;
}