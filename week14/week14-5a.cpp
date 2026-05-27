// week14-5a.cpp SOIT108_Advance_009B
#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);

    if (N < 0) N = -N; // 狦琌璽计锣Θタ计荡癸

    int ans = 0;
    while (N > 0) {
        ans = N % 10;  // –Ω常ъ讽玡计
        N = N / 10;    // 奔程计
    }

    printf("%d\n", ans);
}
