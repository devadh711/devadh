#include "lib.h"
#include<stdio.h>
int display()
{
    for(int i=0;i<top;i++)
    {
        printf("%d\t",stack[i]);
    }
}