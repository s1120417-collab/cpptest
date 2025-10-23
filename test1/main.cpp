#include <iostream>
#include <string>
using namespace std;

int main() {
    // 宣告一個陣列來存放分數
    int score[10];  // 假設最多有10個學生的分數
    int gradeCount[5] = {0};  // 用來統計各等級人數，初始化為0

    // 輸入每位學生的分數
    cout << "請輸入10位學生的分數：" << endl;
    for (int i = 0; i < 10; ++i) {
        cout << "學生 " << i+1 << " 的分數: ";
        cin >> score[i];  // 使用者輸入每位學生的分數
    }

    // 根據分數分類
    for (int i = 0; i < 10; ++i) {
        if (score[i] >= 90) {
            gradeCount[0]++;  // A等
        } else if (score[i] >= 80) {
            gradeCount[1]++;  // B等
        } else if (score[i] >= 70) {
            gradeCount[2]++;  // C等
        } else if (score[i] >= 60) {
            gradeCount[3]++;  // D等
        } else {
            gradeCount[4]++;  // F等
        }
    }

    // 輸出結果
    cout << "A等人數: " << gradeCount[0] << endl;
    cout << "B等人數: " << gradeCount[1] << endl;
    cout << "C等人數: " << gradeCount[2] << endl;
    cout << "D等人數: " << gradeCount[3] << endl;
    cout << "F等人數: " << gradeCount[4] << endl;

    return 0;
}
