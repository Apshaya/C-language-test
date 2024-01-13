#include <stdio.h>

void main()
{
    int i, j, N;

    /* Input number of rows from user */
    printf("Enter number of rows: ");
    scanf("%d", &N);

    if(N>12){
    printf("plese enter the valuew less than 12");
    }
    /* Iterate through N rows */

   else if ( N<5   ){

    for(i=1; i<=N; i++)
    {
        /* Print i number of stars */
        for(j=1; j<=i; j++)
        {
            printf("%d",N);
        }

        /* Move to next line */
        printf("\n");
    }

}
     else{
    for(i=1; i<=N; i++)
    {
        /* Iterate over columns */
        for(j=1; j<=N; j++)
        {
            /* Print star for each column */
            printf("%d",N);
        }

        /* Move to the next line/row */
        printf("\n");
    }


}





}




