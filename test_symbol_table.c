#include<stdio.h>
#include "symbol_table.h"

int main()
{
    current_scope_table=create_scope_table();
    char name[]="a";
   
    char type[]="identifier";
    int line_def=2;
    int no_dimensions=2;
    int dimensions_list[2]={3, 3};
    int no_parameters=0;
    char parameters_list[2][100];

    sym_add(name, type, line_def, no_dimensions, dimensions_list, no_parameters, parameters_list);
    sym_add(name, type, line_def+100, no_dimensions, dimensions_list, no_parameters, parameters_list);
    strcpy(name, "f");
    line_def=10;
    strcpy(type, "function");
    no_dimensions=0;
    no_parameters=2;
    for(int i=0;i<no_parameters;i++)
    {
        strcpy(parameters_list[i], "int");
    }
   
    sym_add(name, type, line_def, no_dimensions, dimensions_list, no_parameters, parameters_list);
    printf("adding a once again\n");
    current_scope_table=create_scope_table();
    symbol* isPresent=sym_find("a");
    if(isPresent!=NULL) {
        printf("found a in the table\n");
    }
    else {
        printf("didn't found a in the table\n");
    }
    return 0;
}