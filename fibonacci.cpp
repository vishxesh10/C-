#include <iostream>
using namespace std;

void printFibonacci(int n) {
    int t1 = 0, t2 = 1, nextTerm;
    for (int i = 1; i <= n; ++i) {
        cout << t1 << " ";
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
    cout << endl;
}

int main() {
    int num;
    cout << "Enter the number of terms: ";
    cin >> num;
    cout << "Fibonacci Series: ";
    printFibonacci(num);
    return 0;
}
