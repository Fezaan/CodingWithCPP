#include <iostream>
using namespace std;
long long lcm(int x, int y) 
{ 
    return (x / gcd(x,y))*y; 
} 
int gcd(int x, int y)
{
    if (y == 0)
        return x;
    return gcd(y,x%y); 
} 
int main()
{
    int x,y;
    cout<<"Enter number 1: ";
    cin>>x;
    cout<<endl;
    cout<<"Enter number 2: ";
    cin>>y;
    cout<<endl;
    cout<<"LCM of "<<x<<" and "<<y<<" is "<<lcm(x,y);
    return 0;
}