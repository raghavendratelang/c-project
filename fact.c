#include <stdio.h>

void fact() {
    int num, factorial = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Factorial is not defined for negative numbers.");
    }
    else {
        for (int i = 1; i <= num; i++) {
            factorial *= i;
        }

        printf("The factorial of %d is %d", num, factorial);
    }

  //  return 0;
}
