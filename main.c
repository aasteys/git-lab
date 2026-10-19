#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    int sum = a + b;
    printf("you entered: %d and %d\n", a, b);
    printf("The sum is: %d\n", sum);

    return 0;
}
