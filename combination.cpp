#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<vector<char>> v = {{},
                              {},
                              {'A', 'B', 'C'},
                              {'D', 'E', 'F'},
                              {'g', 'H', 'I'},
                              {'J', 'K', 'L'},
                              {'M', 'N', 'O'},
                              {'P', 'Q', 'R', 'S'},
                              {'T', 'U', 'V'},
                              {'W', 'X', 'Y', 'Z'}};
    int comb = 1;
    string str = to_string(n);
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == '0' || str[i] == '1')
        {
            cout << "Wrong input" << endl;
            break;
        }
        comb *= v[(str[i] - 48)].size();
    }
    cout << comb << endl;
    return 0;
}