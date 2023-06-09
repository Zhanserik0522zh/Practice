﻿#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> matrixMult(vector<vector<int>> a, vector<vector<int>> b) {
    vector<vector<int>> res(2, vector<int>(2));
    res[0][0] = a[0][0] * b[0][0] + a[0][1] * b[1][0];
    res[0][1] = a[0][0] * b[0][1] + a[0][1] * b[1][1];
    res[1][0] = a[1][0] * b[0][0] + a[1][1] * b[1][0];
    res[1][1] = a[1][0] * b[0][1] + a[1][1] * b[1][1];
    return res;
}

int fib(int n) {
    if (n == 0)
        return 0;
    if (n == 1 || n == 2)
        return 1;
    vector<vector<int>> res = { {1,0},{0,1} };
    vector<vector<int>> matrix = { {1,1},{1,0} };
    while (n > 0) {
        if (n % 2 == 0) {
            matrix = matrixMult(matrix, matrix);
            n /= 2;
        }
        else {
            res = matrixMult(res, matrix);
            n--;
        }
    }
    return res[0][1];
}

int main() {
    int n;
    cin >> n;
    cout << fib(n);
    return 0;
}
