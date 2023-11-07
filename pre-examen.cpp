//
// Created by usuario on 7/11/2023.
//
#include <iostream>
#include <string>

using namespace std;

int main() {
    int limit;
    cout << "Enter the limit: ";
    cin >> limit;

    for (int i = 1; i <= limit; i++) {
        for (int j = i; j <= limit; j++) {
            for (int k = j; k <= limit; k++) {
                if (i * i + j * j == k * k) {
                    cout << i << ", " << j << ", " << k << std::endl;
                }
            }
        }
    }

    return 0;
}