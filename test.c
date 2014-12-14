#include <stdio.h>

int main(int argc, char const *argv[])
{
        int k = 0x18; 
        int *ptr = (int *)yamalloc(sizeof(int));
        *ptr = k;
        //int *new_ptr = (int *)yarealloc(ptr,10);
        
        printf("%p\n", ptr);
        //printf("%p\n", new_ptr);
        int *cp = (int *)yacalloc(10, 4);
        yafree((void *)cp);
       	yafree((void *)ptr);
       
        return 0;
}