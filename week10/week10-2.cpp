/// week10-2.cpp 另外一種排序法
/// 上週教 Bubble Sort 泡泡排序法, 慢!
/// 今天教 Selection Sort 選擇排序法, 快一點!
#include <stdio.h>
int main()
{
    int a[10] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};

    // 第一次印出：排序前的原始資料
    for (int k=0; k<10; k++) printf("%d ", a[k]); /// 空格
    printf("\n"); /// 這兩行, 負責印出陣列裡的數字

    // Selection Sort 核心演算法
    for (int i=0; i<10; i++) { /// 左邊 i
        for (int j=i+1; j<10; j++) { /// 右邊 j (就是從 i+1 開始)
            if (a[i] > a[j]) { /// 太小不對, 就交換
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }

        // 第二次印出（在 i 迴圈內）：可以看到每一輪排序的進度
        for (int k=0; k<10; k++) printf("%d ", a[k]); /// 空格
        printf("\n"); /// 這兩行, 負責印出陣列裡的數字
    }

    // 第三次印出（最下方）：排序完成後的最終結果
    for (int k=0; k<10; k++) printf("%d ", a[k]); /// 空格
    printf("\n"); /// 這兩行, 負責印出陣列裡的數字
}
