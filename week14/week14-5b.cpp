// week14-5b.cpp SOIT108_Advance_009B
#include <stdio.h>

int main()
{
    char s[20];
    scanf("%s", s);

    // 如果第一個字元是負號 '-'，代表最高位數在第二個位置 s[1]
    if (s[0] == '-') printf("%c\n", s[1]);
    // 如果不是負號，那第一個字元 s[0] 就是最高位數
    else printf("%c\n", s[0]);
}
