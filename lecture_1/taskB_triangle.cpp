#include <iostream>

using namespace std;

int triangle(const int& first, const int& second, const int& third) {
    if (first + second <= third)
        return 0;

    if (second + third <= first)
        return 0;

    if (first + third <= second)
        return 0;

    return 1;
}

int main() {
    int a;
    int b;
    int c;
    cin >> a;
    cin >> b;
    cin >> c;
    if (triangle(a, b, c) == 0)
        cout << "NO" << endl;
    else
        cout << "YES" << endl;
}