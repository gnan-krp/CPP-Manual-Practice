#include <iostream>
using namespace std;

class Machine {
    protected:
        int power;

    public:
        void setPower(int p) 
        {
            power = p;
        }

        void showPower() 
        {
        cout << "Power Level: " << power << endl;
        }
};

class ArtificialIntelligence {
    protected:
        string version;

    public:
        void setVersion(string v) 
        {
            version = v;
        }

        void showVersion() 
        {
            cout << "AI Version: " << version << endl;
        }
};

class Robot : public Machine, public ArtificialIntelligence {
    public:
        void introduce() 
        {
            cout << "I am a Robot." << endl;
            showPower();
            showVersion();
        }
};

int main() 
{
    Robot r1;

    r1.setPower(90);
    r1.setVersion("3.5");

    r1.introduce();

    return 0;
}