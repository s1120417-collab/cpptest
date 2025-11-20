#include <iostream>
using namespace std;

int accumulate(int n);

int main() {
    int number = 100;
    cout << "從1加到" << number << "總合為: " << accumulate(number);
    return 0;
}

int accumulate(int n) {
    if (n == 1) {
        return 1;
    }
    return n + accumulate(n - 1);
}
