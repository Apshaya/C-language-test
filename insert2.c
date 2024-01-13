#include <stdio.h>

void main()
{
    int i, j, n;

    /* Input number of rows from user */
    printf("Enter value of n: ");
    scanf("%d", &n);

    if(n>12){
    printf("plese enter the value less than 12");
    }

else if(n<5){
      for(i=1; n<5; i++)
    {
        /* Iterate over columns */
        for(j=1; j<=n; j++)
        {
            /* Print star for each column */
            printf("%d",n);
        }

        /* Move to the next line/row */
        printf("\n");
    }

}
else (n<5){
    for(i=1; n<12; i++)
    {

        for(j=1; j<=i; j++)
        {
            printf("%d",n);
        }

        printf("\n");
    }


}
}
