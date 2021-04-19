#ifndef GENERAL
#define GENERAL

void fillWith(char *, char);
int getline(char line[], int maxlen);
void reverse_str(char *string);
void split_str(char string[], char delim[], char **tokens);
void lowercase(char *string);
int how_often_appears(char **source, char *search_str, int source_strs);
int are_equal(char *str1, char *str2);

#endif