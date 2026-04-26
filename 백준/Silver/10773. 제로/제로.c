#include <stdio.h>
#include <stdlib.h>

int* stack;
int stackSize;

void Push(int n);
void Pop();
void Sum();

int main(void)
{
    int i;
    int c;
    int n;
    
    scanf("%d", &c);
    
    stack = (int*)malloc(sizeof(int) * c);
    
    for (i = 0; i < c; i++)
    {
        scanf("%d", &n);
        
        if (n == 0)
        {
            Pop();
            
            continue;
        }
        
        Push(n);
    }
    
    Sum();
    
    free(stack);
    
    return 0;
}

void Push(int n)
{
    stack[stackSize++] = n;
}

void Pop()
{
    stack[--stackSize] = 0;
}

void Sum()
{
    int i;
    int result = 0;
    
    for (i = 0; i < stackSize; i++)
    {
       result += stack[i];
    }
    
    printf("%d\n", result);
}