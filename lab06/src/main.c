#include <stdio.h>

int main() {

    int n = 0;

    printf("Введіть кількість символів: ");
    scanf("%d", &n);

    char arr[n];

    printf("Введіть %d символів:\n", n);
    for (int i = 0; i < n; i++) {
        scanf(" %c", &arr[i]);
    }

    for (int i = 0; i < n; i++) {
        switch (arr[i]) {
            case 'a': case 'A': arr[i] = '@'; break;
            case 'o': case 'O': arr[i] = '0'; break;
            case 'i': case 'I': arr[i] = '1'; break;
            case 's': case 'S': arr[i] = '$'; break;
        }
    }

    printf("Результат: ");
    for (int i = 0; i < n; i++) {
        printf("%c ", arr[i]);
    }
    printf("\n");

    return 0;
}
