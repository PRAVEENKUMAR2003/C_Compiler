//ERROR FREE. This test includes functions with parameters and function return type of structure and pointer datatype

struct node {
    int a;
};
void func(struct node* b, int a)
{
    
    printf("%d", a);
}

void* func(int a, int b)
{
    printf("%d %d", a, b);
}
