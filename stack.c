#include <stdio.h>
void push();
void pop();
void display();
int stack[50],top=-1,ele,n;
void main()
{
    int choice;
    printf("maximum size: ");
    scanf("%d",&n);
    while(choice!=4)
    {
        printf("\nChoose required operation:");
        printf("\t1.PUSH \t2.POP \t3.DISPLAY \t4.EXIT - ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                printf("\nExited successfully");
                break;
            default:
                printf("\nInvalid Input!");
        }
    }
}

void push()
{
    
    if(top==(n-1))
        printf("\nStack Overflow");
    else
    {
        printf("\nEnter element to be pushed: ");
        scanf("%d",&ele);
        top++;
        stack[top]=ele;
        printf("\n%d successfully pushed at position %d",ele,top+1);
    }
}

void pop()
{
    if(top==-1)
        printf("\nStack Underflow");
    else
    {
        int ele=stack[top];
        top--;
        printf("\nPopped item is %d",ele);
    }
}

void display()
{
    if(top==-1)
        printf("Stack Underflow");
    else
    {
        int i;
        printf("\nGiven stack is");
        for(i=top;i>=0;i--)
        {
            printf("\n%d",stack[i]);
        }
    }
    }
