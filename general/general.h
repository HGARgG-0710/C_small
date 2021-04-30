#ifndef GENERAL
#define GENERAL

void fillWith(char *, char);
int getline(char line[], int maxlen);
void reverse_str(char *string);
void split_str(char string[], char delim[], int n, int m, char tokens[n][m]);
void lowercase(char *string);
int how_often_appears(char *search_str, int source_strs, int symbs, char source[source_strs][symbs]);
int are_equal(char *str1, char *str2);

#endif