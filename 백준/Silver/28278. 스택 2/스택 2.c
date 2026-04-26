#include <stdio.h>
#include <stdlib.h>

int* stack;
int stackSize;

void Push();
void Pop();
void Size();
void Empty();
void Get();

int main(void)
{
    int i;
    int c;
    int x;
    
    scanf("%d", &c);
    
    stack = (int*)malloc(sizeof(int) * c);
    
    for (i = 0; i < c; i++)
    {
        scanf("%d", &x);
        
        switch (x)
        {
        case 1:
            Push();
                
            break;
        case 2:
            Pop();    
                
            break;
        case 3:
            Size();
                
            break;
        case 4:
            Empty();  
                
            break;
        case 5:
            Get();    
                
            break;
        }
    }
    
    free(stack);
    
    return 0;
}

void Push()
{
   int x;
   
   scanf("%d", &x);
    
   stack[stackSize++] = x;
}

void Pop()
{
    if (stackSize == 0)
    {
       printf("-1\n");
        
       return;
    }
    
    printf("%d\n", stack[--stackSize]);
    
    stack[stackSize] = 0;
}

void Size()
{
   printf("%d\n", stackSize);
}

void Empty()
{
   printf("%d\n", stackSize == 0);
}

void Get() 
{
    if (stackSize == 0)
    {
       printf("-1\n");      

       return;
    }    

    printf("%d\n", stack[stackSize - 1]);
}