#include <iostream>
using namespace std;

int main()
{
    int a, b;

    cout << "Enter The First Number = ";
    cin >> a;

    cout << "Enter The Second Number = ";
    cin >> b;

    a = a + b;
    b = a - b;
    a = a - b;


    cout << "After swapping:\n";
    cout << "First number = " << a << endl;
    cout << "Second number = " << b << endl;

    return 0;
}
