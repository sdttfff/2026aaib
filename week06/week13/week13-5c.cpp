//week13-5c.cpp SOIT106_ADVANCE_009
# include <stdio.h>
int f(int n)
{
     int ans =0;
     while (n>0){
         ans = ans *10+n%10;
         n=n/10;
     }
     return ans;
}
int main()
{
     int n;
     scanf("%d",&n);
     printf("%d\n",f(n));
}
