#include <iostream>
#include <string>

using namespace std;

int
main()
{
    string s;
    cin >> s;

    bool flag = true;
    int pos = s.size() - 1;
    while (pos >= 0 && flag) {
        flag = false;
        if (s[pos] == 'm') {
            if (s.substr(pos - 4, 5) != "dream") {
                flag = false;
                break;
            } else {
                flag = true;
                pos -= 5;
            }
        } else if (s[pos] == 'e') {
            if (s.substr(pos - 4, 5) != "erase") {
                flag = false;
                break;
            } else {
                flag = true;
                pos -= 5;
            }
        } else if (s[pos] == 'r') {
            string sub = s.substr(pos - 5, 6);
            if (sub == "eraser") {
                flag = true;
                pos -= 6;
            } else {
                if (pos - 6 >= 0) {
                    sub = s.substr(pos - 6, 7);
                    if (sub == "dreamer") {
                        flag = true;
                        pos -= 7;
                    }
                } else {
                    flag = false;
                    break;
                }
            }
        } else {
            flag = false;
            break;
        }
    }

    if (flag) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
    return 0;
}
