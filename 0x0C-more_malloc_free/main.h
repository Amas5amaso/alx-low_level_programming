#ifndef _MAIN_H_
#define _MAIN_H_
void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
int _putchar(char c);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
void _puts(char *str);
int _atoi(const char *s);
void print_int(unsigned long int n);
int main(int argc, char const *argv[]);
int is_digit(char *s);
void error();
int _strlen(char *s);

#endif
