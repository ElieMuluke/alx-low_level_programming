#include <stdlib.h>

/**
 * count_words - Counts the number of words in a string
 * @str: The string to count the words of
 *
 * Return: The number of words in the string
 */
int count_words(char *str)
{
        int i, in_word, count;

        in_word = 0;
        count = 0;

        for (i = 0; str[i] != '\0'; i++) {
                if (str[i] != ' ') {
                        if (!in_word) {
                                in_word = 1;
                                count++;
                        }
                } else {
                        in_word = 0;
                }
        }

        return count;
}

/**
 * strtow - Splits a string into words
 * @str: The string to split
 *
 * Return: A pointer to an array of strings (words)
 */
char **strtow(char *str)
{
        char **words;
        int i, j, k, n_words, word_len, in_word;

        if (str == NULL || str[0] == '\0') {
                return NULL;
        }

        n_words = count_words(str);

        if (n_words == 0) {
                return NULL;
        }

        words = malloc((n_words + 1) * sizeof(char *));
        if (words == NULL) {
                return NULL;
        }

        in_word = 0;
        word_len = 0;
        j = 0;

        for (i = 0; str[i] != '\0'; i++) {
                if (str[i] != ' ') {
                        if (!in_word) {
                                in_word = 1;
                                word_len = 0;
                                k = i;
                        }
                        word_len++;
                } else {
                        if (in_word) {
                                in_word = 0;
                                words[j] = malloc((word_len + 1) * sizeof(char));
                                if (words[j] == NULL) {
                                        return NULL;
                                }
                                for (k = k; k < i; k++) {
                                        words[j][k - k] = str[k];
                                }
                                words[j][k - k] = '\0';
                                j++;
                        }
                }
        }

        if (in_word) {
                words[j] = malloc((word_len + 1) * sizeof(char));
                if (words[j] == NULL) {
                        return NULL;
                }
                for (k = k; k < i; k++) {
                        words[j][k - k] = str[k];
                }
                words[j][k - k] = '\0';
                j++;
        }

        words[j] = NULL;

        return words;
}

