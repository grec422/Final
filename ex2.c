#include <stdio.h>
#include <string.h>
int main() {
    char a[55];
    gets(a);
    int n = strlen(a);
    for(int i = n-1; i >= 0; i --) {
        printf("%c",a[i]);
    }
    printf("\n");
    return 0;
}