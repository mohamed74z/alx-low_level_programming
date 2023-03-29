#include <stdio.h>

char* _strncat(char *dest, char *src, int n) {
    int dest_len = 0;
    while(dest[dest_len] != '\0') {
        dest_len++;
    }
    
    for(int i = 0; i < n && src[i] != '\0'; i++) {
        dest[dest_len + i] = src[i];
    }
    
    dest[dest_len + n] = '\0';
    
    return dest;
}

int main() {
    char str1[50] = "Hello ";
    char str2[] = "World!";
    
    printf("Before _strncat call: %s\n", str1);
    
    _strncat(str1, str2, 6);
    
    printf("After _strncat call: %s\n", str1);
    
    return 0;
}
