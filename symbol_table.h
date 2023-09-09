#ifndef SYMBOL_TABLE_H
#define SYMBOL_TABLE_H


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int mod=1001;

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
 symbol** hash_table;
 hash_table=(symbol**) malloc(sizeof(symbol*)*mod);
 for(int i=0;i<mod;i++)
 {
        hash_table[i]=NULL;
 }
 return hash_table;
}

int hash(char* s)
{
 int e=0;
 for(int i=0;i<strlen(s);i++)
 {
   e+=s[i];
 }
 return e%mod;
}

int check_if_present(symbol* d,char t[])
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
void add(symbol** hash_table,char a[],int lineno,char type[])
{
   int y=hash(a);
   if(check_if_present(hash_table[y],a)==0)
   {
     symbol* newvar;
     newvar=(symbol*)malloc(sizeof(symbol));
     newvar->line_def=lineno;
     strcpy(newvar->name,a);
     strcpy(newvar->type,type);
     strcpy(newvar->scope,"NULL");
     newvar->length=strlen(a);
     if(hash_table[y]!=NULL)
     {
      newvar->next=hash_table[y];
     }
     else
     {
       newvar->next=NULL;  
     }
     hash_table[y]=newvar;
    }
}
void function_add(symbol** hash_table,char a[],int lineno)
{
  add(hash_table,a,lineno,"function");
}
void variable_add(symbol** hash_table,char a[],int lineno)
{
   add(hash_table,a,lineno,"identifier");
}
void print_table(symbol** hash_table)
{
 printf("\nName  Type  Length  LineDef  Scope\n");
 for(int i=0;i<mod;i++)
 {
    symbol* cur=hash_table[i];
    while(cur!=NULL)
    {
     printf("%s  %s  %d  %d  %s\n",cur->name,cur->type,cur->length,cur->line_def,cur->scope);  
     cur=cur->next;
    }
 }
 printf("\n");
}

#endif 