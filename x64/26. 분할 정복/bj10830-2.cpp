#include <iostream>
#include <vector>
using namespace std;



void matmul(int N, int** result, int** arr1, int** arr2) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            result[i][j] = 0;
            for (int k = 0; k < N; k++) {
                result[i][j] += (arr1[i][k] * arr2[k][j]);
                result[i][j] %= 1000;
            }
        }
    }
}

void power(int N, int** result, int** mat, long long exp) {
    if (exp == 1) {
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                result[i][j] = mat[i][j];
            }
        }
        return;
    }

    int** temp = new int* [N];
    for (int i = 0; i < N; i++) {
        temp[i] = new int[N];
    }
    power(N, temp, mat, exp / 2);

    int** temp_result = new int* [N];
    for (int i = 0; i < N; i++) {
        temp_result[i] = new int[N];
    }

    if (exp % 2 == 0) {
        matmul(N, temp_result, temp, temp);
    }
    else {
        matmul(N, temp_result, temp, temp);
        matmul(N, result, temp_result, mat);
    }

    for (int i = 0; i < N; i++) {
        delete[] temp[i];
        delete[] temp_result[i];
    }
    delete[] temp;
    delete[] temp_result;
}

int main(void) {
    int N;
    long long int B;
    cin >> N >> B;

    int** arr = new int* [N];
    for (int i = 0; i < N; i++) {
        arr[i] = new int[N];
        for (int j = 0; j < N; j++) {
            cin >> arr[i][j];
        }
    }

    int** result = new int* [N];
    for (int i = 0; i < N; i++) {
        result[i] = new int[N];
    }

    power(N, result, arr, B);

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << result[i][j] << ' ';
        }
        cout << '\n';
    }

    for (int i = 0; i < N; i++) {
        delete[] arr[i];
        delete[] result[i];
    }
    delete[] arr;
    delete[] result;

    return 0;
}