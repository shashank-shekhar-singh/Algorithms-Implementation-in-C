#include<stdio.h>
#include<conio.h>
#include<string.h>
#define SIZE 30

char stack[SIZE];
int top= -1;

void push(char item)
{
    if(top == (SIZE-1))
        printf("Overflow");
    else
    {
        stack[++top] = item;
    }
}

char pop()
{
    if(top==-1)
        printf("Underflow");
    else
        return stack[top--];
}

int main()
{
    char string[SIZE];
    printf("Enter the string: ");
    gets(string);
    int i;
    for(i=0 ; i < strlen(string) ; i++)
    {
        push(string[i]);
    }
    for(i=0; i< strlen(string); i++)
    {
        string[i] = pop();
    }
    printf("The Reversed String is: \n\n");
    puts(string);
    getch();
    return 0;
}








