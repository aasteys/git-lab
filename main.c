#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    int diff = a - b;
    printf("you entered: %d and %d\n", a, b);
    printf("The difference is: %d\n", diff);

    return 0;
}
