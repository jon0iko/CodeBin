#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;

    vector<vector<int>> vectors(N, vector<int>(K));

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < K; ++j) {
            cin >> vectors[i][j];
        }
    }

    sort(vectors.begin(), vectors.end());

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < K; ++j) {
            cout << setw(12) << vectors[i][j];
        }
        cout << endl;
    }

    return 0;
}
