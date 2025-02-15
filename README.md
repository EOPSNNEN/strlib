<details>
<summary>EN</summary>

### Straightforward string library

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
  Concatenates two strings and returns a new string containing the result. (Warning! this function generates dynamic array, make sure to delete it after use)

- **`strCpy(char *buffer, const char *srcStr)`**  
  Copies the string `srcStr` into the provided `buffer` and returns the `buffer`. (Warning! in case of dynamic buffer, please don't forget to free this buffer)

</details>

<details>
<summary>KR</summary>

### 간단한 문자열 라이브러리

- **`strLen(const char *str)`**  
  입력된 문자열의 길이를 반환합니다.

- **`strCmp(const char *str, const char *str2)`**
  두 문자열을 비교하고 같으면 `0`을, 다르면 `1`을 반환합니다.

- **`strChr_s(const char *str, char chr)`** 
  문자열 `str`에서 문자 `chr`가 처음 나오는 위치를 반환합니다. 찾지 못하면 널 문자 `'\0'`의 포인터를 반환합니다.

- **`strChr(const char *str, char chr)`**
  문자열 `str`에서 문자 `chr`가 처음 나오는 위치를 찾고, 찾으면 해당 문자의 포인터를 반환합니다. 그렇지 않을 경우엔 `nullptr`를 반환합니다.

- **`strStr(const char *str, const char *str2)`** 
  문자열 `str`에서 부분 문자열 `str2`를 찾습니다. 찾으면 `str2`의 첫 번째 위치를 반환하고, 그렇지 않을 경우엔 `nullptr`을 반환합니다.

- **`strCat(const char *str, const char *str2)`**
  두 문자열을 연결한 후에 결과를 반환합니다. (주의사항! 이 함수는 동적 `buffer`를 자동으로 만들어서, 사용한 후에 삭제되면 좋겠습니다)


- **`strCpy(char *buffer, const char *srcStr)`** 
  `srcStr`을 `buffer`에 복사하고 `buffer`를 반환합니다. (주의사항! 동적 `buffer`를 사용하면 이를 삭제되면 좋겠습니다)

</details>

<details>
<summary>RU</summary>

### Простая библиотека строк

- **`strLen(const char *str)`**  
  Возвращает длину строки.

- **`strCmp(const char *str, const char *str2)`** 
  Сравнивает две строки и возвращает `0`, если они равны, и `1`, если они разные.

- **`strChr_s(const char *str, char chr)`**  
  Возвращает указатель на первое вхождение символа `chr` в строку `str`. Если не найдено, возвращает указатель на нулевой символ `'\0'`.

- **`strChr(const char *str, char chr)`** 
  Ищет первое вхождение символа `chr` в строке `str`. Возвращает указатель на символ или `nullptr`, если не найдено.

- **`strStr(const char *str, const char *str2)`**  
  Ищет подстроку `str2` в строке `str`. Возвращает указатель на первое вхождение `str2`, или `nullptr`, если не найдено.

- **`strCat(const char *str, const char *str2)`**  
  Конкатенирует две строки и возвращает новую строку, содержащую результат. (Внимание! эта функция генерирует динамический массив, поэтому не забудьте удалить после использования)

- **`strCpy(char *buffer, const char *srcStr)`** 
  Копирует строку `srcStr` в предоставленный `buffer` и возвращает `buffer`. (Внимание! в случае использования динамического `buffer` желательно освободить память)

</details>
