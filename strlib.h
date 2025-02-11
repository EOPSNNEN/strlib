#include <cstring>
#define ushort unsigned short

inline ushort strLen(const char *str) {
    ushort length = 0;

    while (*str) {
        length++;
        str++;
    }

    return length;
}


inline bool strCmp(const char *str, const char *str2) {
    for (ushort i = 0; str[i] != '\0' || str2[i] != '\0'; ++i) {
        if (str[i] != str2[i]) {
            return 1;
        }
    }

    return 0;
}


inline const char* strChr_s(const char *str, char chr) {
    ushort i = 0;
    for (; str[i] != '\0'; ++i) {
        if (*(str + i) == chr) {
            return &str[i];
        }
    }

    return &str[i]; // ret '\0'
}


inline const char* strChr(const char *str, char chr) {
    if (chr == '\0') return str + strLen(str);

    for (ushort i = 0; str[i] != '\0'; ++i) {
        if (*(str + i) == chr) {
            return &str[i];
        }
    }

    return nullptr;
}


inline const char* strStr(const char *str, const char *str2) {
    if (*str2 == '\0') return str;

    for (ushort i = 0; str[i] != '\0'; ++i) {
        if (*(str + i) == *str2) {
            return &str[i];
        }
    }

    return nullptr;
}


inline const char* strCat(const char *str, const char *str2) {
    ushort length = strLen(str);
    ushort length2 = strLen(str2);
    ushort newSz = length + length2;
    char* newArr = new char[newSz + 1];

    for (ushort i = 0; str[i] != '\0'; ++i) {
        newArr[i] = str[i];
    }

    for (ushort j = 0; str2[j] != '\0'; ++j) {
        newArr[j + length] = str2[j];
    }

    newArr[newSz] = '\0';

    return newArr;
}


inline const char* strCpy(char *buffer, const char *srcStr) {
    ushort i = 0; 
    for (; srcStr[i] != '\0'; ++i) {
        *(buffer + i) = *(srcStr + i);
    }

    buffer[i] = '\0';

    return buffer;
}