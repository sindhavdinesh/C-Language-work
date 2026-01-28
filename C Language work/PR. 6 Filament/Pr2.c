#include <stdio.h>

int main() {
    char str[100];
    int freq[100] = {0};
    int i, j;

    printf("Enter any string: ");
    gets(str);

    // Count frequency
    for (i = 0; str[i] != '\0'; i++) {
        freq[i] = 1;
        for (j = i + 1; str[j] != '\0'; j++) {
            if (str[i] == str[j]) {
                freq[i]++;
                freq[j] = 0; // mark duplicate
            }
        }
    }

    printf("Frequency of each letter:\n");
    for (i = 0; str[i] != '\0'; i++) {
        if (freq[i] != 0) {
            printf("%c => %d\n", str[i], freq[i]);
        }
    }

    return 0;
}
