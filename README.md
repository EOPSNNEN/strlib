### Straightforward string functions

- **`strLen(const char *str)`**  
  Returns the length of the input string.
  
- **`strCmp(const char *str, const char *str2)`**  
  Compares two strings and returns `0` if they are equal, `1` if they are not.
  
- **`strChr_s(const char *str, char chr)`**  
  Returns a pointer to the first occurrence of the character `chr` in the string `str`. If not found, returns a pointer to the null terminator `'\0'`.
  
- **`strChr(const char *str, char chr)`**  
  Searches for the first occurrence of the character `chr` in the string `str`. Returns a pointer to the character, or `nullptr` if not found.
  
- **`strStr(const char *str, const char *str2)`**  
  Searches for the substring `str2` in the string `str`. Returns a pointer to the first occurrence of `str2` or `nullptr` if not found.
  
- **`strCat(const char *str, const char *str2)`**  
  Concatenates two strings and returns a new string containing the result.
  
- **`strCpy(char *buffer, const char *srcStr)`**  
  Copies the string `srcStr` into the provided `buffer` and returns the `buffer`.
