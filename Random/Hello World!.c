#include <stdio.h>
int main ()
{
    char arr[5000];
    gets(arr);
    printf("Hello, World!\n");
    printf("%s\n", arr);

    return 0;
}
