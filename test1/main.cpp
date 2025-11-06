#include <iostream>  // 引入輸入輸出標頭檔
using namespace std; // 使用標準命名空間

int main() {
    int stack[5];   // 宣告一個可容納 5 個整數的堆疊
    int top = -1;   // top 表示堆疊頂端位置，初始為 -1（代表空堆疊）

    // ======== 推入（Push）三個元素 ========
    top++;          // top = 0
    stack[top] = 10;

    top++;          // top = 1
    stack[top] = 20;

    top++;          // top = 2
    stack[top] = 30;

    // ======== 顯示目前堆疊內容 ========
    cout << "目前堆疊內容: " << endl;
    for (int i = 0; i <= top; i++) {
        cout << stack[i] << " ";  // 依序輸出每個元素
    }
    cout << endl;

    // ======== 彈出（Pop）一個元素 ========
    if (top >= 0) {  // 檢查堆疊是否非空
        cout << "彈出元素: " << stack[top] << endl;
        top--;        // 將頂端往下移動一格
    } else {
        cout << "堆疊是空的，不能彈出!" << endl;
    }

    // ======== 顯示彈出後的堆疊內容 ========
    cout << "彈出後堆疊內容: " << endl;
    for (int i = 0; i <= top; i++) {
        cout << stack[i] << " ";
    }
    cout << endl;

    return 0;
}
