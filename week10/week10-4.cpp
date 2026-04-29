// week10-4.cpp A035
#include <stdio.h>
int main()
{
    int a[100]; // 皚丁
    for (int i=0; i<100; i++) {
        scanf("%d", &a[i] ); // 弄100计
    }

    for (int i=0; i<100; i++) { // オも i
        for (int j=i+1; j<100; j++) { // も j
            if (a[i] > a[j]) { // 狦オ娩ゑ娩碞ユ传
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    for (int i=0; i<100; i++) {
        printf(" %d", a[i]);
        // –10计传︽Ω程计(ま99)ぃ传︽
        if (i % 10 == 9 && i != 99) printf("\n");
    }
}
