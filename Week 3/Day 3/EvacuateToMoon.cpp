#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;

    while (T--) {
        int N, M, H;
        cin >> N >> M >> H;

        vector<int> A(N), B(M);
        for (int i = 0; i < N; ++i) {
            cin >> A[i];

        }
        for (int j = 0; j < M; ++j) {
            cin >> B[j];

        }

        sort(A.rbegin(), A.rend());
        sort(B.rbegin(), B.rend());

        long long int totalEnergy = 0;
        for (int i = 0; i < min(N, M); ++i) {
            long long int energy = 1LL * B[i] * H;
            totalEnergy += min(energy, (long long int)A[i]);
        }

        cout << totalEnergy << "\n";
    }

    return 0;
}
