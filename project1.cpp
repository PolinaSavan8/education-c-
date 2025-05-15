#include <iostream>
using namespace std;

int countUniqueChars(const char* str) {
    bool seen[256] = { false }; // ASCII-таблица (всего 256 символов)
    int count = 0;

    while (*str) {
        char c = *str;
        if (!seen[(unsigned char)c]) {
            seen[(unsigned char)c] = true;
            count++;
        }
        str++;
    }

    return count;
}

int main() {
    const char* text = "Hello world";
    int uniqueCount = countUniqueChars(text);

    cout << "”никальных символов: " << uniqueCount << endl;
    return 0;
}