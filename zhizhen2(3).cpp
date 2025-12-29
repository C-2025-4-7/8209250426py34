#include <iostream>
using namespace std;

void sortArray(int* arr, int n);
void printArray(int* arr, int n);

int main() {
    int n;
    int* arr = nullptr; 

    cout << "请输入数组元素个数: ";
    cin >> n;

    if (n <= 0) {
        cout << "错误：元素个数必须大于0！" << endl;
        return 1;
    }

    arr = new int[n];

    if (arr == nullptr) {
        cout << "错误：内存分配失败！" << endl;
        return 1;
    }

    cout << "\n成功分配了 " << n << " 个整数的内存空间" << endl;
    cout << "数组地址（指针值）: " << arr << endl;
    cout << "指针本身地址: " << &arr << endl;

    cout << "\n请输入 " << n << " 个整数：" << endl;
    for (int i = 0; i < n; i++) {
        cout << "元素[" << i << "]: ";
        cin >> arr[i];
    }

    cout << "\n原始数组" << endl;
    printArray(arr, n);

    cout << "\n动态调试信息" << endl;
    cout << "指针值: " << arr << endl;
    cout << "前3个元素的地址和内容:" << endl;
    for (int i = 0; i < 3 && i < n; i++) {
        cout << "arr+" << i << " = " << (arr + i)
            << ", *(arr+" << i << ") = " << *(arr + i) << endl;
    }

 
    sortArray(arr, n);

    
    cout << "\n排序后的数组" << endl;
    printArray(arr, n);

    cout << "\n排序后的调试信息" << endl;
    cout << "指针值: " << arr << endl;
    cout << "前3个元素的地址和内容:" << endl;
    for (int i = 0; i < 3 && i < n; i++) {
        cout << "arr+" << i << " = " << (arr + i)
            << ", *(arr+" << i << ") = " << *(arr + i) << endl;
    }

    cout << "\n释放动态数组内存..." << endl;
    delete[] arr;
    arr = nullptr;

    cout << "内存已释放，程序结束。" << endl;

    return 0;
}

void sortArray(int* arr, int n) {
    if (arr == nullptr || n <= 1) {
        return;
    }

    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;

        for (int j = i + 1; j < n; j++) {
            if (*(arr + j) < *(arr + minIndex)) {
                minIndex = j;
            }
        }


        if (minIndex != i) {
            int temp = *(arr + i);
            *(arr + i) = *(arr + minIndex);
            *(arr + minIndex) = temp;
        }
    }
}

void printArray(int* arr, int n) {
    if (arr == nullptr || n <= 0) {
        cout << "数组为空或无效！" << endl;
        return;
    }

    cout << "数组内容（使用指针访问）: ";
    for (int i = 0; i < n; i++) {
        cout << *(arr + i);
        if (i < n - 1) {
            cout << ", ";
        }
    }
    cout << endl;

    cout << "数组下标访问: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i];
        if (i < n - 1) {
            cout << ", ";
        }
    }
    cout << endl;
}