#ifndef SYMBOL_TABLE_H
#define SYMBOL_TABLE_H


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int sym_mod=1001;

typedef struct symbol 
{
    char name[100];
    char type[100];
    int length;
    int line_def;
    char scope[100];
    struct symbol* next;
}symbol;

symbol** symboltable()
{
 symbol** sym_hash_table;
 sym_hash_table=(symbol**) malloc(sizeof(symbol*)*sym_mod);
 for(int i=0;i<sym_mod;i++)
 {
        sym_hash_table[i]=NULL;
 }
 return sym_hash_table;
}

int sym_hash(char* s)
{
 int e=0;
 for(int i=0;i<strlen(s);i++)
 {
   e+=s[i];
 }
 return e%sym_mod;
}

int sym_check_if_present(symbol* d,char t[])
{
 while(d!=NULL)
 {
  if(strcmp(d->name,t)==0)
   return 1;
  else
   d=d->next;
 }
 return 0;
}
void sym_add(symbol** sym_hash_table,char a[],int lineno,char type[])
{
   int y=sym_hash(a);
   if(sym_check_if_present(sym_hash_table[y],a)==0)
   {
     symbol* newvar;
     newvar=(symbol*)malloc(sizeof(symbol));
     newvar->line_def=lineno;
     strcpy(newvar->name,a);
     strcpy(newvar->type,type);
     strcpy(newvar->scope,"NULL");
     newvar->length=strlen(a);
     if(sym_hash_table[y]!=NULL)
     {
      newvar->next=sym_hash_table[y];
     }
     else
     {
       newvar->next=NULL;  
     }
     sym_hash_table[y]=newvar;
    }
}
void function_sym_add(symbol** sym_hash_table,char a[],int lineno)
{
  sym_add(sym_hash_table,a,lineno,"function");
}
void variable_sym_add(symbol** sym_hash_table,char a[],int lineno)
{
   sym_add(sym_hash_table,a,lineno,"identifier");
}
void print_table(symbol** sym_hash_table)
{
 printf("\nName\t\tType\tLength\tLineDef\tScope\n");
 for(int i=0;i<sym_mod;i++)
 {
    symbol* cur=sym_hash_table[i];
    while(cur!=NULL)
    {
     printf("%s\t\t%s\t%d\t%d\t%s\n",cur->name,cur->type,cur->length,cur->line_def,cur->scope);  
     cur=cur->next;
    }
 }
 printf("\n");
}

#endif 