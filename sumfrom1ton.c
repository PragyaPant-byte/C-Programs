#include<stdio.h>

int res(int x) {
    if (x == 0)
        return 0;           // base case
    else
        return x + res(x - 1);  // recursive case
}

int main() {
    int n;
    scanf("%d", &n);

    int a = res(n);
    printf("sum = %d", a);

    return 0;
}
