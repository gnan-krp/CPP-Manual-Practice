#include<iostream>
using namespace std;

int perimeter(int a, int b , int c)
{
    return a+b+c;
}

int perimeter(int d)
{
    return 4*d;
}
int perimeter(int e, int f)
{
    return 2 * (e+f);
}

int main()
{
    int a, b, c, d, e, f;

    cout << "Enter Sides Of The Triangle = " << endl;
    cin >> a >> b >> c;
    cout << "Perimeter Of Triangle Is = " << perimeter( a,  b , c) << endl;

    cout << "Enter Sides Of The Square = " << endl;
    cin >> d;
    cout << "Perimeter Of Square Is = " << perimeter(d) << endl;

    cout << "Enter Sides Of The Rectangle = " << endl;
    cin >> e >> f;
    cout << "Perimeter Of Rectangle Is = " << perimeter( e, f) << endl;

    return 0;
}
