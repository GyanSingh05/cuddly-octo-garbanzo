#include<iostream>
#include<cstdlib>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int longest = 0;

    for (int i = 0; i < n; i++) {
        int length = 0;
        for (int j = 0; j < n; j++) {
            if (arr[j] == arr[i] || arr[j] == arr[i] - 1) {
                length++;
            }
        }
        if (length > longest) {
            longest = length;
        }
    }
    cout << longest;

    return 0;
}
