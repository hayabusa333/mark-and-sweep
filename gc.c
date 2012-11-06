#include <stdio.h>

typedef struct OBJECT
{
    char mark;
    struct Object *next;
    void *p;
    int size;
}Object;

typedef struct ROOT
{
    Object *p;
    struct Root *next;
}Root;

typedef struct HEAPS
{
    char area[128];
    char used_flag[128];
}Heps;

void main()
{
    Object *test;
    Root root;

    printf("%d\n", sizeof(test));

    printf("OK\n");
}


