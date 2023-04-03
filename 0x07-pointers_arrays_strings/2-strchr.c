char *_strchr(char *s, char c) {
	while (*s != '\0') { // iterate through the string
		if (*s == c) { // check if the current character matches c
			return s; // return the pointer to the matching character
		}
		s++; // move the pointer to the next character in the string
	}
	if (*s == c) { // check if the null terminator matches c
		return s; // return the pointer to the null terminator
	}
	return NULL; // c not found in s
}
