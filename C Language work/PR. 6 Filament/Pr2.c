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

// output //

Enter any string: development
Frequency of each letter:
d => 1
e => 3
v => 1
e => 2
l => 1
o => 1
p => 1
m => 1
e => 1
n => 1
t => 1

--------------------------------
Process exited after 35.39 seconds with return value 0
Press any key to continue . . .

