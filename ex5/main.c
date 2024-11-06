#include <stdio.h>
int main() {
    printf("Letter  ASCII  Capital Letter  ASCII\n");
    printf("----------------------------------------\n");

    for (char lowercase = 'a', uppercase = 'A'; lowercase <= 'z'; lowercase++, uppercase++) {
        printf("%c      %d        %c     %d\n", lowercase, (int)lowercase,uppercase, (int)uppercase);
    }
    return 0;
}

