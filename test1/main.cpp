#include <iostream>
using namespace std;

int main() {
    // 第一部分：印出直角三角形的星星圖案
    for (int i = 1; i <= 6; ++i) {
        for (int j = 1; j <= i; ++j) {
            cout << "*";
        }
        cout << endl;
    }

    cout << endl;  // 分隔一下

    // 第二部分：印出九九乘法表
    int i = 1;
    int j;
    while (i <= 9) {
        j = 1;
        while (j <= 9) {
            cout << i << " * " << j << " = " << i * j << "\t";
            j += 1;
        }
        cout << endl;
        i += 1;
    }

    return 0;
}
