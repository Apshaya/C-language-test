#include <stdio.h>
int main() {
	int j, numbers[5],total=0;
	printf("\nInput the first number: ");
    scanf("%d", &numbers[0]);
    printf("\nInput the second number: ");
    scanf("%d", &numbers[1]);
    printf("\nInput the third number: ");
    scanf("%d", &numbers[1]);
	printf("\nInput the fourth number: ");
    scanf("%d", &numbers[1]);
    printf("\nInput the fifth number: ");
    scanf("%d", &numbers[1]);
	for(j = 0; j < 5; j++) {
		if((numbers[j]%2) != 0)
		{
			printf("\nSum of all odd values: %d", total);
		}
    }
   	printf("values: %d", total);
	printf("\n");
	return 0;
}
