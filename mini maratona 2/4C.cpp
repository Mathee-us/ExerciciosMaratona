#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    unordered_map<string, int> database;

    while(n--) {
        string username;
        cin >> username;

        if(database[username] == 0) {
            cout << "OK" << "\n";
            database[username] = 1;
        } else {
            string newUsername = username + to_string(database[username]);
            cout << newUsername << "\n";
            database[username]++;
            database[newUsername] = 1;
        }
    }

    return 0;
}
