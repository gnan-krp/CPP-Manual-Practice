#include <iostream>
using namespace std;

class Sport
{
    protected:
        string sportName;

    public:
        void setSport(string name)
        {
            sportName = name;
        }

        void displaySport()
        {
            cout << "Sport Name: " << sportName << endl;
        }
};

class OutdoorSport : public Sport
{
    protected:
        string location;

    public:
        void setLocation(string loc)
        {
            location = loc;
        }

        void displayLocation()
        {
            cout << "Location: " << location << endl;
        }
};

class Tennis : public OutdoorSport
{
    protected:
        string playerName;
        int ranking;

    public:
        void setPlayer(string name, int rank)
        {   
            playerName = name;
            ranking = rank;
        }

    void displayTennisDetails()
    {
        displaySport();
        displayLocation();
        cout << "Player Name: " << playerName << endl;
        cout << "World Ranking: " << ranking << endl;
    }
};

int main()
{
    Tennis t;

    t.setSport("Tennis");
    t.setLocation("Wimbledon");
    t.setPlayer("Novak Djokovic", 3);

    cout << "----- Tennis Details -----" << endl;
    t.displayTennisDetails();

    return 0;
}