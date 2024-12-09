#include <bits/stdc++.h>
using namespace std;

int main()
{
    string msg;
    getline(cin, msg);

    string res = "";
    for (int c : msg)
    { // remove space
        if (c == ' ')
        {
            continue;
        }
        res += c;
    }
    cout << res;

    return 0;
}