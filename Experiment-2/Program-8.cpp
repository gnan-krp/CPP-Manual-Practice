#include<iostream>
using namespace std;

inline int fact(int n)
{
    if(n==0)
        return 1;
    
    else
        return n*fact(n-1);
}

int main()
{
    int f;

    cout << "Enter A Number = " << endl;
    cin >> f;

    cout << " Factorial Of " << f << " is " << fact(f) << endl;

    return 0;
}
