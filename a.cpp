#include <bits/stdc++.h>
using namespace std;

vector<string> rookMoves(string pos) {
    char col = pos[0];
    int row = pos[1] - '0';


    vector<string> sameColumn;
    for (int i = 1; i <= 8; ++i) {
        if (i != row) {
            string square = "";
            square += col;
            square += to_string(i);
            sameColumn.push_back(square);
        }
    }


    vector<string> sameRow;
    for (char c = 'a'; c <= 'h'; ++c) {
        if (c != col) {
            string square = "";
            square += c;
            square += to_string(row);
            sameRow.push_back(square);
        }
    }


    vector<string> result;
    result.insert(result.end(), sameColumn.begin(), sameColumn.end());
    result.insert(result.end(), sameRow.begin(), sameRow.end());

    return result;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        string position;
        cin >> position;

        vector<string> moves = rookMoves(position);


        for (const string& move : moves) {
            cout << move << endl;
        }
    }

    return 0;
}
