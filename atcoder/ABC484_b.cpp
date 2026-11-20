#include <iostream>
#include <vector>
using namespace std;

int
main()
{
    vector<int> v(10, 0);
    int k;
    cin >> k;
    for (int i = 0; i < k; ++i) {
        int a;
        cin >> a;
        v[a] = 1;
    }
    if (v[9] == 0) {
        cout << "-1\n";
    } else {
        for (int i = 1; i < 10; ++i) {
            if (v[i] == 1) {
                cout << i << endl;
                break;
            }
        }
    }
    return 0;
}
