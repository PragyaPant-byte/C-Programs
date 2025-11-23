
#include <stdio.h>

int main() {
    int a, b;
    printf("Enter starting point: ");
    scanf("%d", &a);
    printf("Enter ending point: ");
    scanf("%d", &b);

    printf("Prime numbers between %d and %d are:\n", a, b);

    for (int i = a + 1; i < b; i++) {
        int count = 0;
        for (int j = 1; j <= i; j++) {
            if (i % j == 0) {
                count++;
            }
        }
        if (count == 2) {
            printf("%d ", i);
        }
    }

    return 0;
}
