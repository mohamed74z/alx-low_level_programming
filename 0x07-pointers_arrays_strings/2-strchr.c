char *_strchr(char *s, char c) {
    while (*s != '\0') {
        if (*s == c) {
            return s; // return pointer to the first occurrence of c
        }
        s++; // increment the pointer to the next character in s
    }
    if (*s == c) {
        return s; // handle case where c is at the end of s
    }
    return NULL; // handle case where c is not found in s
}
