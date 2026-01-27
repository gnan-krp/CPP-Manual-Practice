#include<iostream>
using namespace std;

int main()
{
    int a,b;
    float ans;
    float q,r;

    cin >> a >> b;
    ans = a/float(b);
    q=a/b;
    r=a%b;

    cout << "Division : " << ans << endl;
    cout << "Quotient : " << q << endl;
    cout << "Remainder : " << r << endl;

    return 0;
}
