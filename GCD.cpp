#include<iostream>
using namespace std;
int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
int main()
{   int a;
    int b;
    cout<<"Enter a :- ";
    cin >> a;
    cout<<"Enter b :- ";
    cin >> b;
    cout << "GCD of (" << a << " and " << b << ") is = " << gcd(a, b);
    return 0;
}