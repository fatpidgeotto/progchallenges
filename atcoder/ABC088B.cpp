#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int
main()
{
    int n;
    cin >> n;
    vector<int> v(128, 0);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }
    sort(v.begin(), v.begin() + n, greater<int>());
    int total = 0;
    for (int i = 0; i < n; ++i) {
        if (i % 2 == 0) {
            total += v[i];
        } else {
            total -= v[i];
        }
    }
    cout << total << endl;
    return 0;
}
