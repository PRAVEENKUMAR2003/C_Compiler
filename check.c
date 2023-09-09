#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "symbol_table.h"
int main()
{
    symbol** hash_table=symboltable();
    int t=5;
    while(t--)
    {
     char a[100];
     scanf("%s",a);
     function_add(hash_table,a,5);
    }
    print_table(hash_table);
}