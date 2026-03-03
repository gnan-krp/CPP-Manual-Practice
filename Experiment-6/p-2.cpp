#include<iostream>
using namespace std;

class Drummer
{
    protected:
        string name;
        int experience;

    public:
        void getdata()
        {
            cout << "Enter The Name Of The Drummer : " << endl;
            cin >> name;
            cout << "Enter Experienced Years : " << endl;
            cin >> experience;
        }
        void showdata()
        {
            cout << "Name Of The Drummer Is = " << name << endl;
            cout << "Years Of Experience : " << experience << endl;
        }
};

class Guitarist
{
    protected:
        string name;
        int experience;

    public:
        void getdata()
        {
            cout << "Enter The Name Of The Guitarist : " << endl;
            cin >> name;
            cout << "Enter Experienced Years : " << endl;
            cin >> experience;
        }
        void showdata()
        {
            cout << "Name Of The Guitarist Is = " << name << endl;
            cout << "Years Of Experience : " << experience << endl;
        }
};

class Singer
{
    protected:
        string name;
        int experience;

    public:
        void getdata()
        {
            cout << "Enter The Name Of The Singer : " << endl;
            cin >> name;
            cout << "Enter Experienced Years : " << endl;
            cin >> experience;
        }
        void showdata()
        {
            cout << "Name Of The Singer Is = " << name << endl;
            cout << "Years Of Experience : " << experience << endl;
        }
};

class pianoPlayer
{
    protected:
        string name;
        int experience;

    public:
        void getdata()
        {
            cout << "Enter The Name Of The pianoPlayer : " << endl;
            cin >> name;
            cout << "Enter Experienced Years : " << endl;
            cin >> experience;
        }
        void showdata()
        {
            cout << "Name Of The pianoPlayer Is = " << name << endl;
            cout << "Years Of Experience : " << experience << endl;
        }
};

class Orchestra : public Drummer, public Guitarist, public Singer, public pianoPlayer
{
    public:
        void getdata()
        {
            cout << "Enter The Details Of The Orchestra : " << endl;
            Drummer::getdata();
            Guitarist::getdata();
            Singer::getdata();
            pianoPlayer::getdata();
        }
        void showdata()
        {
            cout << "Details Of The Orchestra Is : " << endl;
            Drummer::showdata();
            Guitarist::showdata();
            Singer::showdata();
            pianoPlayer::showdata();
        }
};

int main()
{
    Orchestra o;

    o.getdata();
    o.showdata();

    return 0;
}