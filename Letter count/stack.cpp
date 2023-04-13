#include <stdio.h>

int main(void) {
    int upper = 0, lower = 0;
    char ch[80];
    int i;

    printf("\nEnter The String : ");

    fgets(ch, sizeof(ch), stdin);
    i = 0;
    while (ch[i] != '\0') {
        if (ch[i] >= 'A' && ch[i] <= 'Z')
            upper++;
        if (ch[i] >= 'a' && ch[i] <= 'z')
            lower++;
        i++;
    }

    printf("%d %d\n", upper, lower);

    return 0;
}
