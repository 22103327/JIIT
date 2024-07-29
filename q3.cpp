#include <stdio.h>
#include <string.h>

int main() {
    char str[100]; 
    int len;
    char revStr[100];

    printf("Enter a string: ");
    scanf("%s", str);

    len = strlen(str);

    for(int i = len - 1; i >= 0; i--) {
        revStr[len - i] = str[i];
    }

    printf("Reversed string is: %s\n", revStr);

    return 0;
}
