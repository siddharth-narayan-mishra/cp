#include<bits/stdc++.h>
using namespace std;

int countValidCombinations(int N, int K, int M, vector<int>& C, vector<vector<int>>& A, vector<char>& R) {
    int validCombinations = 0;
    int totalCombinations = pow(2, N);

    for (int combination = 0; combination < totalCombinations; combination++) {
        bool isValid = true;

        for (int i = 0; i < M; i++) {
            int realKeysInTest = 0;

            for (int j = 0; j < C[i]; j++) {
                int key = A[i][j] - 1;
                if ((combination & (1 << key)) != 0) {
                    realKeysInTest++;
                }
            }

            if (R[i] == 'o' && realKeysInTest < K) {
                isValid = false;
                break;
            } else if (R[i] == 'x' && realKeysInTest >= K) {
                isValid = false;
                break;
            }
        }

        if (isValid) {
            validCombinations++;
        }
    }

    return validCombinations;
}

int main() {
    int N, K, M;
    cin >> N >> K >> M;

    vector<int> C(M);
    vector<vector<int>> A(M);
    vector<char> R(M);

    for (int i = 0; i < M; i++) {
        cin>>C[i];

        A[i] = vector<int>(C[i]);
        for (int j = 0; j < C[i]; j++) {
            cin >> A[i][j];
        }

        cin >> R[i];
    }

    int validCombinations = countValidCombinations(N, K, M, C, A, R);
    cout <<validCombinations;

    return 0;
}