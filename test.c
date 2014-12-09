#include <stdio.h>

int main(int argc, char const *argv[])
{
        int k = 0x1234; 
        int *ptr = malloc(sizeof(int));
        ptr = &k;
        printf("%d\n", *ptr);
        free(ptr);
        return 0;
}