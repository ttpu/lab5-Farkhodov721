#include <stdio.h>

int main() {
    int n, i;
    
    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a positive integer for n.\n");
        return 1;
    }

    int arr[n];

    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    int isAscending = 1, isDescending = 1;

    for (i = 1; i < n; i++) {
        if (arr[i] <= arr[i - 1]) {
            isAscending = 0; 
        }
        if (arr[i] >= arr[i - 1]) {
            isDescending = 0;
        }
    }


    if (isAscending) {
        printf("ascending sequence\n");
    } else if (isDescending) {
        printf("descending sequence\n");
    } else {
        printf("neither ascending nor descending sequence\n");
    }

    return 0;
}
