#ifndef SYMBOL_TABLE_H
#define SYMBOL_TABLE_H


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_SIZE 100

int sym_mod=(MAX_SIZE);
 struct node
{
    int data;
    struct node *next;
};

typedef struct node node;

node* create(struct node *headref,int);
void reverse(struct node **headref);
void insert(struct node **, int); //insert a node after an input node
void print_nodes(struct node *);

typedef struct symbol 
{
    char name[MAX_SIZE];
    char type[MAX_SIZE];
    int length;
    int line_def;
    node *line_of_ref;

    int no_dimensions;
    int dimensions_list[MAX_SIZE];
    int no_parameters;
    char scope[MAX_SIZE];
    char parameters_list[MAX_SIZE][MAX_SIZE];
    struct symbol* next;
 
}symbol;

symbol* symbol_table_find(symbol** table, char name[]);
void print_table(symbol* symbol_table[]);
typedef struct scope_table
{
    symbol *table[MAX_SIZE];
    struct scope_table *parent;
    struct scope_table *child;
    int symbol_cnt;
}scope_table;

scope_table* current_scope_table;
symbol* sym_find(char name[]);
int sym_hash(char* s)
{
 int e=0;
 for(int i=0;i<strlen(s);i++)
 {
   e+=s[i];
 }
 return e%sym_mod;
}

//symbol table

scope_table* create_scope_table()
{
  scope_table* new_scope_table= (scope_table*)malloc(sizeof(scope_table));
  if(current_scope_table==NULL) {
    current_scope_table=new_scope_table;
    current_scope_table->parent=NULL;
    current_scope_table->child=NULL;
    return current_scope_table;
  }
  new_scope_table->parent=current_scope_table;
  current_scope_table->child=new_scope_table;
  current_scope_table=new_scope_table;
  return current_scope_table;
}

void sym_add(char name[], char type[], int line_def, int no_dimensions, int dimensions_list[], int no_parameters, char parameters_list[][MAX_SIZE])
{
    int i = sym_hash(name);
    symbol **pointer_curr = &current_scope_table->table[i];
    symbol* isPresent=sym_find(name);
    if(isPresent!=NULL) {
      insert(&isPresent->line_of_ref, line_def);
      return;
    }
    
    symbol* newvar;
    newvar=(symbol*)malloc(sizeof(symbol));
    insert(&newvar->line_of_ref, line_def);
    strcpy(newvar->name,name);
    strcpy(newvar->type,type);
    strcpy(newvar->scope,"NULL");
    newvar->length=strlen(name);
    newvar->line_def=line_def;
    newvar->no_dimensions=no_dimensions;
    for(int i=0;i<no_dimensions;i++) {
      newvar->dimensions_list[i]=dimensions_list[i];
    }
    if(strcmp("function" ,type)==0) {
    newvar->no_parameters=no_parameters;
    for(int i=0;i<no_parameters;i++) {
      strcpy(newvar->parameters_list[i], parameters_list[i]);
    }
    }

    if (pointer_curr == NULL)
    {
        (*pointer_curr)=newvar;
    }
    else
    {
        newvar->next = (*pointer_curr);
        (*pointer_curr)=newvar;
    }

    current_scope_table->symbol_cnt++;
}
// void function_sym_add(symbol** sym_hash_table,char a[],int lineno)
// {
//   sym_add(sym_hash_table,a,lineno,"function");
// }
// void variable_sym_add(symbol** sym_hash_table,char a[],int lineno)
// {
//    sym_add(sym_hash_table,a,lineno,"identifier");
// }

symbol* symbol_table_find(symbol** table, char name[])
{
    symbol* ans=NULL;
    int hash=sym_hash(name);
    symbol* list=table[hash];
    while(list!=NULL)
    {
      if(strcmp(list->name, name)==0) {
        return list;
      }
      else {
        list=list->next;
      }
    }
    printf("returning null\n");
    return NULL;

}

symbol* sym_find(char name[])
{
    scope_table* curr=current_scope_table;
    while(curr!=NULL) {
      print_table(curr->table);
      symbol* isPresent=symbol_table_find(curr->table, name);
      if(isPresent!=NULL) {
        return isPresent;
      }
      else {
        curr=curr->parent;
      }
    }
    return NULL;
}

scope_table* delete_scope() 
{

  symbol** symbol_table=current_scope_table->table;
  for(int i=0;i<current_scope_table->symbol_cnt;i++) {
    symbol* curr=symbol_table[i];
    while(curr!=NULL) {
      symbol* temp=curr;
      curr=curr->next;
      free(temp);
    }
    symbol_table[i]=NULL;
  }
  scope_table* parent=current_scope_table->parent;
  free(current_scope_table);
  parent->child=NULL;
  return parent;

}

void print_table(symbol* symbol_table[])
{
 printf("\nName\t\tType\t\tLength\t\tLineDef\t\t\tno_dimensions\t\t\tdimensions\t\tno. of parameters\t\t parameters\t\t lines of reference\n");
 for(int i=0;i<sym_mod;i++)
 {
    symbol* cur=symbol_table[i];
    while(cur!=NULL)
    {
     printf("%s\t\t%s\t\t%d\t\t%d\t\t%d\t\t",cur->name,cur->type,cur->length,cur->line_def, cur->no_dimensions);
     for(int i=0;i<cur->no_dimensions;i++) {
      printf("%d ", cur->dimensions_list[i]);
     }
     printf("\t\t");
     printf("%d\t\t", cur->no_parameters);
     for(int i=0;i<cur->no_parameters;i++) {
      printf("%s ", cur->parameters_list[i]);
     }
     printf("\t\t");
     print_nodes(cur->line_of_ref);
   
     printf("\n");
     cur=cur->next;
    }

 }
 printf("\n");
}


void print_nodes(node* head)
{
    while(head)
    {
      printf("%d ", head->data);
      head=head->next;
    }
  
}

node* create(struct node *headref,int d)
{
    struct node *newnode=(struct node *)malloc(sizeof(struct node));
    newnode->next=headref;
    newnode->data=d;
    return newnode;
}

void insert(struct node **head, int d)
{
    
    struct node *t;
    t=*head;
    while(t!=NULL)
    {
        if(t->data==d)
        {
            return;
        }
        else if(t->next==NULL)
        {
          break;
        }
        t=t->next;
    }
    struct node *input=(struct node*)malloc(sizeof(struct node));
    input->data=d;
    if(*head==NULL) {
      *head=input;
      return;
    }
    t->next=input;
    input->next=NULL;
  
}

#endif