#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    // #ifndef ONLINE_JUDGE
    //     // for getting input from input.txt
    //     freopen("Input.txt", "r", stdin);
    //     // for writing output to output.txt
    //     freopen("Output.txt", "w", stdout);
    // #endif

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    int tx = 0, ty = 0, tz = 0;
    for (int i = 0; i < n; i++)
    {
        int x, y, z;
        cin >> x >> y >> z;
        tx += x;
        ty += y;
        tz += z;
    }
    if (tx == 0 && ty == 0 && tz == 0)
        cout << "YES"
             << "\n";
    else
        cout << "NO"
             << "\n";

    return 0;
}