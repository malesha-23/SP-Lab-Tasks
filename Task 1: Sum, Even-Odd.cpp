#include<stdio.h>
int main()
{
    //Problem:Even or Odd Sum
    int a, b;
    scanf("%d %d",&a,&b);
    int sum = a + b;
    printf("%d\n",sum);
    if(sum % 2 == 0)
    {
        printf("Even\n");
    }
    else
    {
        printf("Odd\n");
    }
    return 0;
}
