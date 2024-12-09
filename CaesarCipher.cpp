#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    cin.ignore(); // ignore the enter

    string msg;
    getline(cin, msg);

    for (int c : msg)
    {
        char sec;
        // lowercase
        if (c >= 'a' && c <= 'z')
        {
            sec = 'a' + (c - 'a' - n + 26) % 26;
        }
        // uppercase
        else if (c >= 'A' && c <= 'Z')
        {
            sec = 'A' + (c - 'A' - n + 26) % 26;
        }
        // space
        else
        {
            sec = c;
        }

        cout << sec;
    }

    return 0;
}
