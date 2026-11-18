#include <iostream>

using namespace std;

int
main()
{
    int N;
    cin >> N;
    int currx = 0, curry = 0, currt = 0;
    bool flag = true;
    while (N--) {
        int t, x, y;
        cin >> t >> x >> y;
        int deltat = t - currt;
        int deltax = x - currx;
        int deltay = y - curry;
        int d =
          (deltax >= 0 ? deltax : -deltax) + (deltay >= 0 ? deltay : -deltay);
        currx = x;
        curry = y;
        currt = t;
        if (d > deltat || (deltat - d) % 2 != 0) {
            flag = false;
        }
    }

    if (flag) {
        cout << "Yes\n";
    } else {
        cout << "No\n";
    }
    return 0;
}
