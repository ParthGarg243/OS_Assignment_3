#include"../../mems.h"
#include<stdio.h>
#include<stdlib.h>

/*
checking basic functions
*/
int main(int argc, char const *argv[])
{
    printf("-------- STARTING TEST ---------\n");
    mems_init();
    char* ptr = (char*)mems_malloc(PAGE_SIZE - 1);
    mems_free(ptr);
    mems_print_stats();
    mems_finish();
    printf("--------- ENDING TEST ----------\n");
    return 0;
}
