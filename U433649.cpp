#include <iostream>
using namespace std;
int main() {
    int num;
    int sum = 0;
    cout << "请输入一个整数：" ;
    while (true) {
        cin >> num;
        if (num == 0) {
            break; // 输入为0时，跳出循环
        }
        // 输出用户输入的数字
        cout << "你输入了：" << num << endl;
        // 累加求和
        sum += num;
    }
    // 输出所有输入的数字及它们的和
    cout << "已输入的数字为：" << endl;
    cout << "它们的和为：" << sum << endl;
    return 0;
}
