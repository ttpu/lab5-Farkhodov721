#include <stdio.h>

int main() {
    int n;
    double num, max1, max2;

    printf("Enter n: ");
    scanf("%d", &n);
    
    printf("Enter a number: ");
    scanf("%lf", &max1);
    printf("Enter a number: ");
    scanf("%lf", &max2);

    if (max2 > max1) {
        double temp = max1;
        max1 = max2;
        max2 = temp;
    }

    for (int i = 2; i < n; i++) {
        printf("Enter a number: ");
        scanf("%lf", &num);

        if (num > max1) {
            max2 = max1;
            max1 = num;
        } else if (num > max2) {
            max2 = num;
        }
    }

    printf("The two largest values are: %.2f and %.2f\n", max1, max2);

    return 0;
}

