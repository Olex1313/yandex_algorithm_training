#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

void erase_characters(string& str, const string& characters) {
    for(char c : characters) {
        str.erase(remove(str.begin(), str.end(), c), str.end());
    }
}

void prepare_string(string& str) {
    erase_characters(str, "()+-");
    if (str.length() == 7) {
        str = "495" + str;
        return;
    }
    if (str[0] == '8') {
        str = str.substr(1, str.length() - 1);
        return;
    }
    if (str[0] == '7') {
        str = str.substr(1, str.length() - 1);
    }
}

void solution() {
    vector<string> adress_book;
    string new_number;
    cin >> new_number;
    prepare_string(new_number);
    for (int i = 0; i < 3; ++i) {
        string str;
        cin >> str;
        prepare_string(str);
        if (str == new_number)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}

int main() {
    solution();
    return 0;
}