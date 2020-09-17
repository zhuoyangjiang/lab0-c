// Author: zhuoyangjiang zfj5038@psu.edu

#include "stdio.h"
#include "stdlib.h"
#include <readline/readline.h>
#include <readline/history.h>


int main()
{
    char *str;
    str = readline("Enter your name: ");
    printf("Hello, %s!\n", str);
    free(str);
    return 0;
}
