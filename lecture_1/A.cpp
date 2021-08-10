#include <iostream>
#include <string>

using namespace std;

int find_temperature(const int& t_room, const int& t_cond, const string& mode) {
    if (mode == "fan")
        return t_room;

    if (mode == "auto")
        return t_cond;

    if (mode == "heat") {
        if (t_room >= t_cond)
            return t_room;

        return t_cond;
    }

    if (mode == "freeze") {
        if (t_room <= t_cond)
            return t_room;

        return t_cond;
    }
}
int main() {
    int t_room;
    int t_cond;
    string mode;
    cin >> t_room >> t_cond;
    cin >> mode;
    cout << find_temperature(t_room, t_cond, mode) << endl;
    return 0;
}