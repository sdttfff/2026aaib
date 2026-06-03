//week06-4b.cpp SOIT107_BASE_008
# include <stdio.h>
int main()
{
     printf("Enter the number of values to be processed: ");
     int a;
     scanf("%d",&a);
     int ans=1;
     for(int i=0;i<a;i++){
        printf("Enter a value: ");
        int now;
        scanf("%d",&now);
        ans=ans*now;
        }
        printf("Product of the %d values is %d",a,ans);
 }
