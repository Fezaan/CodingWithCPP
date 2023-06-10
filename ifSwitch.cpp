#include <bits/stdc++.h>
using namespace std;

// int main(){
////using if else steatement
//     int a;
//     cin>>a;
//     if(a>60)    cout<<"A";
//     else if(a>40)   cout<<"B";
//     else cout<<"Fail";
//     cout<<endl;
//     return 0;
// }

int main()
{
    // using switch
    int a;
    cin >> a;
    switch (a/10)
    {
    case 6:
        cout << "A";
        break;
    case 4:
        cout << "B";
        break;
    default:
        cout << "Pass";
        break;
    }
    cout << endl;
    return 0;
}