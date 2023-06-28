#include <bits/stdc++.h>
using namespace std;

int findSum(int a, int b, int n)
{
    int x = a / n, y = b / n;
    return n * (y * (y + 1) / 2) - n * (x * (x + 1) / 2);
}

int main()
{
    int a, b, n;
    cout << "Enter range start: ";
    cin >> a;
    cout << "Enter range end: ";
    cin >> b;
    cout << "Enter the number: ";
    cin >> n;
    cout << "The sum of multiples of " << n << " are: " << findSum(a, b, n);
    return 0;
}