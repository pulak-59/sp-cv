
#include<stdio.h>
int main()
{
 int num ,n;
    printf("Enter a number :");
    scanf("%d",&n);

 for (int i=0; i<=n; i++)
    {
      scanf("%d",&num);

      if(num%2==0)
      {
        printf("The number is Even ");
      }
      else
        printf("The number is Odd " );
    }
 return 0;
}
