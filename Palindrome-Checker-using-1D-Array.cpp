#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    bool isPalindrome = true;
    for (int i = 0; i < n / 2; i++) {
        if (arr[i] != arr[n - 1 - i]) {
            isPalindrome = false;
            break;
        }
    }

    if (isPalindrome) {
        cout << "The array is a palindrome." << endl;
    } else {
        cout << "The array is not a palindrome." << endl;
    }

    return 0;
}
