#include <stdio.h>
#include <stdlib.h>

int main()
{
    int marks;

    printf("Enter your marks for paper :");
    scanf("%d",&marks);

    if(marks>=35)
    {
      printf("PASS\n");
    }
    else
    {
        printf("Fail\n");
    }
    printf("Keep it up");

    return 0;
}
