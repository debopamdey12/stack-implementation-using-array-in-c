// stack implementation using array
#include<stdio.h>
#include<stdlib.h>
#define MAXSIZE 100
int stack[MAXSIZE],top=-1;
void Push(){
    if(top==MAXSIZE-1){
        printf("Stack is Full, You can't push element!\n");
    }
    else{
        top++;
        int n;
        printf("Enter element to push:");
        scanf("%d", &n);
        stack[top] = n;
    }
}
void Pop(){
        char sure;
    if(top==-1){
        printf("Stack is Empty, You can't pop element!\n");
    }
    else{
        printf("Do you want to sure to pop element?(y/n):");
        scanf("%c", &sure);
        scanf("%c", &sure);  // i not found the newline character thats why i use 2 scanf here sorry for this!
        if(sure=='n'){
            printf("\n");
            return;
        }    
        else if(sure=='y' ){
            printf("---------> Item poped successfully! ----------- \n");
            top--;
        }
        else{
            printf("You not entered a valid character ,Sorry");
            exit(0);
        }
    }
}
void Display(){
    if(top==-1){
        printf("Stack is Empty, Please push element first!\n");
    }
    else{
        printf("---------- Stack elements are: ------------\n");
        for (int i = top; i >= 0;i--){
            printf("%20d\n", stack[i]);
        }
    }
}
void isempty(){
    if(top==-1){
        printf("Stack is Empty!\n");
    }
    else{
        printf("Stack is not Empty!\n");
    }
}
int main()
{
    int choice;
    do{
        printf("-----------------Stack Menu----------------\n");
        printf("---------------> 1.Push -------------------\n");
        printf("---------------> 2.Pop --------------------\n");
        printf("---------------> 3.Display ----------------\n");
        printf("---------------> 4.Is Empty ----------------\n");
        printf("---------------> 5.Exit  ------------------\n");
        printf("Enter Your Choice:");
        scanf("%d", &choice);
        switch(choice){
            case 1:
                Push();break;
            case 2:
                Pop();break;
            case 3:
                Display();break;
            case 4:
                isempty();break;
            case 5:
                exit(0);
            default:
                printf("Please Enter a valid choice?\n");
        }
    } while (choice != 5);

    return 0;
}