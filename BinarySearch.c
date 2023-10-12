#include <stdio.h>


int binarySearch(int arr[], int left, int right, int target) {
    while (left <= right) {
        int mid = left + (right - left) / 2;

        // 中央の要素と目標を比較
        if (arr[mid] == target) {
            return mid; // 目標が見つかった場合、中央のインデックスを返す
        }

        // 目標が中央の要素よりも小さい場合、左半分を探索
        if (arr[mid] > target) {
            right = mid - 1;
        }
        // 目標が中央の要素よりも大きい場合、右半分を探索
        else {
            left = mid + 1;
        }
    }

    return -1; // 目標が見つからなかった場合、-1を返す
}

int main() {
    int arr[] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 12;

    int result = binarySearch(arr, 0, n - 1, target);

    if (result != -1) {
        printf("要素 %d はインデックス %d に見つかりました。\n", target, result);
    } else {
        printf("要素 %d は見つかりませんでした。\n", target);
    }

    return 0;
}
