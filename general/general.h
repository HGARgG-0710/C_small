#ifndef GENERAL
#define GENERAL

// This macros shall be used very carefully. If arr is not an array but a pointer to it, then problems may occur.
#define arr_len(arr) (sizeof(arr) / sizeof(arr[0]))

void fillWith(char *, char);
int getline(char *line, int maxlen);
void reverse_str(char *string);
void split_str(char *string, char *delim, int n, int m, char tokens[n][m]);
void lowercase(char *string);
void uppercase(char *string);
int how_often_appears(char *search_str, int source_strs, int symbs, char source[source_strs][symbs]);
int are_equal(char *str1, char *str2);
void get_primes(int *primes, int *numbers, int length);
void generate(unsigned int *arr, const unsigned int length, const unsigned int start, const unsigned int limit, const int step);
int is_prime(int number);
int how_many_primes(int *numbers, int length);
void copy_arr(int *arr, int *copy, int length);

#endif