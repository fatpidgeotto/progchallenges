#include <iostream>
using namespace std;

int
main()
{
    int t;
    cin >> t;
    while (t--) {
        int l, c;
        cin >> l >> c;
        for (int i = 0; i < l; ++i) {
            for (int j = 0; j < c; ++j) {
                if ((i + j) % 2 == 0) {
                    cout << "*";
                } else {
                    cout << ".";
                }
            }
            cout << endl;
        }
        if (t > 1)
            cout << endl;
    }
    return 0;
}
