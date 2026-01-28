#include <iostream>
using namespace std;

void swapbyvalue(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
    cout << "Swapping by call by value in the function: a= "
         << a << " b= " << b << endl;
}

void swapbyreference(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int x = 10, y = 20;
    cout << "Before swapping: x= " << x << " y= " << y << endl;

    swapbyvalue(x, y);
    cout << "After swapping by value: x= " << x << " y= " << y << endl;

    swapbyreference(x, y);
    cout << "After swapping by reference: x= " << x << " y= " << y << endl;

    return 0;
}
