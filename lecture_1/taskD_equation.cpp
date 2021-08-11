#include <iostream>

using namespace std;

void solve_equitation() {
    int a, b, c;
    cin >> a;
    cin >> b;
    cin >> c;
    if (c < 0) {
        cout << "NO SOLUTION" << endl;
            return;
    }
    int d = c * c - b;
    if (a == 0){
        if (d == 0) {
            cout << "MANY SOLUTIONS" << endl;
        }
        else {
            cout << "NO SOLUTION" << endl;
        }
    }
    else {
        if (d % a == 0) {
            cout << d / a << endl;
        }
        else {
            cout << "NO SOLUTION" << endl;
        }
    }

}

int main() {
    solve_equitation();
    return 0;
}