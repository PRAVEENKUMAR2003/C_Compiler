#ifndef CONSTANT_TABLE_H
#define CONSTANT_TABLE_H


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int mod=1001;

typedef struct constant
{
    char name[100];
    char type[100];
    struct constant* next;
}constant;

constant** constanttable()
{
 constant** hash_table;
 hash_table=(constant**) malloc(sizeof(constant*)*mod);
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


int check_if_present(constant* d,char t[])
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


void add(constant** hash_table,char a[],char type[])
{
   int y=hash(a);
   if(check_if_present(hash_table[y],a)==0)
   {
     constant* newvar;
     newvar=(constant*)malloc(sizeof(constant));
     strcpy(newvar->name,a);
     strcpy(newvar->type,type);
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


void string_add(constant** hash_table,char a[])
{
  add(hash_table,a,"string constant");
}


void integer_add(constant** hash_table,char a[])
{
   add(hash_table,a,"integer constant");
}

void float_add(constant** hash_table,char a[])
{
   add(hash_table,a,"float constant");
}


void binary_add(constant** hash_table,char a[])
{
  add(hash_table,a,"binary constant");
}


void octal_add(constant** hash_table,char a[])
{
  add(hash_table,a,"octal constant");
}


void hexadecimal_add(constant** hash_table,char a[])
{
 add(hash_table,a,"hexadecimal constant");
}


void print_const_table(constant** hash_table)
{
 printf("\nName\tType\tLength\tLineDef\tScope\n");
 for(int i=0;i<mod;i++)
 {
    constant* cur=hash_table[i];
    while(cur!=NULL)
    {
     printf("%s\t%s \n",cur->name,cur->type);  
     cur=cur->next;
    }
 }
 printf("\n");
}

#endif 