#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int N = 5;
    int arr[N];

    srand(time(NULL));

    cout << "random number: ";
    for (int i = 0; i < N; i++) {
        arr[i] = rand() % 100;
        cout << arr[i] << " ";
    }

    cout << endl;

    for (int i = 0; i < N - 1; i++) {
        for (int j = 0; j < N - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    cout << "排序後: ";
    for (int i = 0; i < N; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;

    return 0;
}
