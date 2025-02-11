<details>
<summary>EN</summary>

### Straightforward string functions

- **`strLen(const char *str)`**  
  Returns the length of the input string.

- **`strCmp(const char *str, const char *str2)`**  
  Compares two strings and returns 0 if they are equal, 1 if they are not.

- **`strChr_s(const char *str, char chr)`**  
  Returns a pointer to the first occurrence of the character chr in the string str. If not found, returns a pointer to the null terminator '\0'.

- **strChr(const char *str, char chr)**  
  Searches for the first occurrence of the character chr in the string str. Returns a pointer to the character, or nullptr if not found.

- **strStr(const char *str, const char *str2)**  
  Searches for the substring str2 in the string str. Returns a pointer to the first occurrence of str2 or nullptr if not found.

- **strCat(const char *str, const char *str2)**  
  Concatenates two strings and returns a new string containing the result.

- **strCpy(char *buffer, const char *srcStr)**  
  Copies the string srcStr into the provided buffer and returns the buffer. (Warning! after dynamic buffer usage, please don't forget to free this buffer)

</details>

<details>
<summary>KR</summary>

### 문자열 함수

- **strLen(const char *str)**  
  입력된 문자열의 길이를 반환합니다.

- **strCmp(const char *str, const char *str2)**  
  두 문자열을 비교하고 같으면 0을, 다르면 1을 반환합니다.

- **strChr_s(const char *str, char chr)**  
  문자열 str에서 문자 chr가 처음 나오는 위치를 반환합니다. 찾지 못하면 널 문자 '\0'의 포인터를 반환합니다.

- **strChr(const char *str, char chr)**  
  문자열 str에서 문자 chr가 처음 나오는 위치를 찾고, 찾으면 해당 문자의 포인터를 반환합니다. 그렇지 않을 경우엔 nullptr를 반환합니다.

- **strStr(const char *str, const char *str2)**  
  문자열 str에서 부분 문자열 str2를 찾습니다. 찾으면 str2의 첫 번째 위치를 반환하고, 그렇지 않을 경우엔 nullptr을 반환합니다.

- **strCat(const char *str, const char *str2)**  
  두 문자열을 연결한 후에 결과를 반환합니다.

- **strCpy(char *buffer, const char *srcStr)**  
  srcStr을 buffer에 복사하고 buffer를 반환합니다. (주의사항! 동적 buffer를 사용한 후에 buffer를 삭제되면 좋겠습니다)

</details>

<details>
<summary>RU</summary>

### Простые строковые функции

- **strLen(const char *str)**  
  Возвращает длину строки.

- **strCmp(const char *str, const char *str2)**  
  Сравнивает две строки и возвращает 0, если они равны, и 1, если они разные.

- **strChr_s(const char *str, char chr)**  
  Возвращает указатель на первое вхождение символа chr в строку str. Если не найдено, возвращает указатель на нулевой символ '\0'.

- **strChr(const char *str, char chr)**  
  Ищет первое вхождение символа chr в строке str. Возвращает указатель на символ или nullptr, если не найдено.

- **strStr(const char *str, const char *str2)**  
  Ищет подстроку str2 в строке str. Возвращает указатель на первое вхождение str2, или nullptr, если не найдено.

- **strCat(const char *str, const char *str2)**  
  Конкатенирует две строки и возвращает новую строку, содержащую результат.

- **strCpy(char *buffer, const char *srcStr)**  
  Копирует строку srcStr в предоставленный buffer и возвращает buffer. (Внимание! после использования динамического buffer желательно освободить память)

</details>
