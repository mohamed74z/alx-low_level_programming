int _isupper(int c) {
  // Check if the character is in the uppercase range of ASCII codes
  if (c >= 'A' && c <= 'Z') {
    return 1;
  } else {
    return 0;
  }
}
