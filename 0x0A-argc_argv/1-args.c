#include <stdio.h>

int main(int argc, char *argv[])
{
/* Suppress unused variable warning for argv */
(void)argv;

/* Print the number of arguments (excluding the program name) */
printf("%d\n", argc - 1);

return (0);
}
