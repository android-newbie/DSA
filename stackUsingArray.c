#include <stdio.h>
#define MAX 4

int stack_arr[MAX]; // global declararation of stack array
int top = -1;       // indicates that stack is empty

void push(int data)
{
    if (top == MAX - 1)
    {
        printf("stack is overflow");
        return;
    }
    top = top + 1;
    stack_arr[top] = data;
}

int pop()
{
    int value;
    if (top == -1)
    {
        printf("stack is underflow");
        exit(1); // abnormal termination of the program or failure
    }

    value = stack_arr[top];
    top = top - 1;
    return value;
}

void print()
{
    int i;
    if (top == -1)
    {
        printf("Stack is underflow");
        return;
    }

    for (i = top; i >= 0; i--)
        printf("%d\n", stack_arr[i]);
}

int isFull()
{
    if (top == MAX - 1)
        return 1;
    else
        return 0;
}

int isEmpty()
{
    if (top == -1)
        return 1;
    else
        return 0;
}

int peek()
{
    if (isEmpty)
    {
        printf("underflow");
        exit(1);
    }

    return stack_arr[top];
}

int main()
{
    // int data;
    // push(1);
    // push(2);
    // push(3);
    // push(4);
    // push(5);
    // data=pop();
    // printf("\n%d\n",data);
    // print();

    int choice, data;
    while (1)
    {
        printf("\n");
        printf("1. push\n");
        printf("2. pop\n");
        printf("3. print the top element\n");
        printf("4. print all the elements of stack\n");
        printf("5. QUIT\n");
        printf("Please enter your choice :");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter the element you want to push:");
            scanf("%d", &data);
            push(data);
            break;
        case 2:
            data = pop();
            printf("Deleted element is:%d", data);
            break;

        case 3:
            printf("The topmost  element  of the stack is:%d\n",peek());
            break;

        case 4:print();
                break;

        // case 5:
        //     exit(1);
        //     break;
            

        default:printf("wrong choice");
            break;
        }
    }


    VOID CHECK(){
        printf("HELLO")
    }

    return 0;
}
