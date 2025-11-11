// C String Problems Solutions (Using for loop only)

#include <stdio.h>

void toLower(char str[], int n) {
    for (int i = 0; i < n; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + 32;
        }
    }
}

int main() {
    int n;
    scanf("%d", &n); // Character count

    char str[n + 1];
    scanf("%s", str); // Input string

    toLower(str, n); // Function call

    printf("%s\n", str); // Output
    return 0;
}







/*
1. Find length of a string without library function

*/
#include <stdio.h>
int main() {
    char str[1000];
    int length;
    fgets(str, sizeof(str), stdin);
    for(length = 0; str[length] != '\0' && str[length] != '\n'; length++);
    printf("%d\n", length);
    return 0;
}

/*
2. Concatenate two strings without library function
*/
#include <stdio.h>
int main() {
    char str1[1000], str2[1000];
    int i, j;
    fgets(str1, sizeof(str1), stdin);
    fgets(str2, sizeof(str2), stdin);
    for(i = 0; str1[i] != '\0'; i++) if(str1[i] == '\n') str1[i] = '\0';
    for(j = 0; str2[j] != '\0'; j++) if(str2[j] == '\n') str2[j] = '\0';
    for(i = 0; str1[i] != '\0'; i++);
    for(j = 0; str2[j] != '\0'; j++) str1[i++] = str2[j];
    str1[i] = '\0';
    printf("%s\n", str1);
    return 0;
}

/*
3. Count vowels in a string
*/
#include <stdio.h>
int main() {
    char str[1000];
    int count = 0;
    fgets(str, sizeof(str), stdin);
    for(int i = 0; str[i] != '\0'; i++) {
        char c = str[i];
        if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U') count++;
    }
    printf("%d\n", count);
    return 0;
}

/*
4. Count number of words in a string
*/
#include <stdio.h>
int main() {
    char str[1000];
    int count = 0, inWord = 0;
    fgets(str, sizeof(str), stdin);
    for(int i = 0; str[i] != '\0'; i++) {
        if(str[i] != ' ' && str[i] != '\n' && !inWord) {
            inWord = 1;
            count++;
        } else if(str[i] == ' ' || str[i] == '\n') {
            inWord = 0;
        }
    }
    printf("%d\n", count);
    return 0;
}

/*
5. Reverse a string
*/
#include <stdio.h>
int main() {
    char str[1000];
    int length;
    fgets(str, sizeof(str), stdin);
    for(length = 0; str[length] != '\0' && str[length] != '\n'; length++);
    for(int i = length - 1; i >= 0; i--) printf("%c", str[i]);
    printf("\n");
    return 0;
}

/*
6. Convert lowercase to uppercase
*/
#include <stdio.h>
int main() {
    char str[1000];
    fgets(str, sizeof(str), stdin);
    for(int i = 0; str[i] != '\0'; i++) {
        if(str[i] >= 'a' && str[i] <= 'z') str[i] -= 32;
    }
    printf("%s", str);
    return 0;
}

/*
7. Toggle case of each character
*/
#include <stdio.h>
int main() {
    char str[1000];
    fgets(str, sizeof(str), stdin);
    for(int i = 0; str[i] != '\0'; i++) {
        if(str[i] >= 'a' && str[i] <= 'z') str[i] -= 32;
        else if(str[i] >= 'A' && str[i] <= 'Z') str[i] += 32;
    }
    printf("%s", str);
    return 0;
}

/*
8. Sort string characters alphabetically
*/
#include <stdio.h>
int main() {
    char str[1000], temp;
    int length;
    fgets(str, sizeof(str), stdin);
    for(length = 0; str[length] != '\0' && str[length] != '\n'; length++);
    for(int i = 0; i < length - 1; i++) {
        for(int j = i + 1; j < length; j++) {
            if(str[i] > str[j]) {
                temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }
    for(int i = 0; i < length; i++) printf("%c", str[i]);
    printf("\n");
    return 0;
}

/*
9. Count occurrences of a character (case-insensitive)
*/
#include <stdio.h>
int main() {
    char str[1000], ch;
    int count = 0;
    fgets(str, sizeof(str), stdin);
    scanf(" %c", &ch);
    if(ch >= 'A' && ch <= 'Z') ch += 32;
    for(int i = 0; str[i] != '\0'; i++) {
        char c = str[i];
        if(c >= 'A' && c <= 'Z') c += 32;
        if(c == ch) count++;
    }
    printf("%d\n", count);
    return 0;
}

/*
10. Check palindrome string
*/
#include <stdio.h>
int main() {
    char str[1000];
    int length, flag = 1;
    fgets(str, sizeof(str), stdin);
    for(length = 0; str[length] != '\0' && str[length] != '\n'; length++);
    for(int i = 0; i < length / 2; i++) {
        if(str[i] != str[length - 1 - i]) {
            flag = 0;
            break;
        }
    }
    if(flag) printf("yes\n");
    else printf("no\n");
    return 0;
}

/*
11. Add digits in a string
*/
#include <stdio.h>
int main() {
    char str[1000];
    int sum = 0;
    fgets(str, sizeof(str), stdin);
    for(int i = 0; str[i] != '\0'; i++) {
        if(str[i] >= '0' && str[i] <= '9') sum += str[i] - '0';
    }
    printf("%d\n", sum);
    return 0;
}

/*
12. Count occurrences of a word in a string
*/
#include <stdio.h>
#include <string.h>
int main() {
    char str[1000], word[100];
    int count = 0;
    fgets(str, sizeof(str), stdin);
    fgets(word, sizeof(word), stdin);
    for(int i = 0; word[i] != '\0'; i++) if(word[i] == '\n') word[i] = '\0';
    for(int i = 0; str[i] != '\0'; i++) {
        int match = 1;
        for(int j = 0; word[j] != '\0'; j++) {
            if(str[i + j] != word[j]) {
                match = 0;
                break;
            }
        }
        if(match && (str[i + strlen(word)] == ' ' || str[i + strlen(word)] == '\0' || str[i + strlen(word)] == '\n')) count++;
    }
    printf("%d\n", count);
    return 0;
}

/*
13. Remove repeated characters
*/
#include <stdio.h>
int main() {
    char str[1000], result[1000];
    int k = 0;
    fgets(str, sizeof(str), stdin);
    for(int i = 0; str[i] != '\0'; i++) {
        int found = 0;
        for(int j = 0; j < k; j++) {
            if(str[i] == result[j]) {
                found = 1;
                break;
            }
        }
        if(!found && str[i] != '\n') result[k++] = str[i];
    }
    result[k] = '\0';
    printf("%s\n", result);
    return 0;
}

/*
14. Find maximum occurring character
*/
#include <stdio.h>
int main() {
    char str[1000];
    int freq[256] = {0}, max = 0;
    char maxChar;
    fgets(str, sizeof(str), stdin);
    for(int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];
        if(ch >= 'A' && ch <= 'Z') ch += 32;
        freq[ch]++;
        if(freq[ch] > max && ch != '\n') {
            max = freq[ch];
            maxChar = ch;
        }
    }
    printf("%c\n", maxChar);
    return 0;
}

/*
15. Reverse words in a string
*/
#include <stdio.h>
#include <string.h>
int main() {
    char str[1000], words[100][100];
    int i
