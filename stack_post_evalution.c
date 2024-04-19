#include<stdio.h>      //M H V N PAVAN KUMAR 
#include<stdlib.h>      
#include<string.h>
#define max 100     //global declaration of the array size.

char stack[max];
int top=-1;
char infix[max],postfix[max];
int isFull()    
{
    if(top==max-1)
        return 1;
    else
        return 0;
}
int isEmpty()
{
    if(top==-1)
        return 1;
    else
        return 0;
}
void push( char c) //push function is to insert an element in stack
{


    if(isFull())
    {   printf("stack overflow or stack is full");
        return ;
    }
    top++;
    stack[top]=c;


}
//To delete the element of the stack
char pop()
{
    if(isEmpty())
        printf("stack underflow or stack is empty");
    else
    {   char c;

        c=stack[top];
        top--;
        return c;

    }


}
void show() {       // TO SHOW THE ELEMENTS IN THE POSTFIX ARRAY
    int i=0;
    printf("THE POST FIX EXPRESSION IS: ");
    while(postfix[i])
    {

        printf("%c",postfix[i++]);

    }
    printf("\n");
}
int precedence(char c)// to check tthe precedence of the given expression.
{
        switch(c)
        {

        case '^':
        return 3;
        case '/':
        case '*':
        return 2;
        case '+':
        case '-':
        return 1;
        default:
        return 0;

        }
}
/*int precedence(char c) {
    if (c == '+' || c == '-') {
        return 1;
    } else if (c == '*' || c == '/') {
        return 2;
    }
    else if(c == '^')
        return 3;
    else {
        return 0;
    }
}*/
void infixtopost()   //conerts infix to postfix expression
{
    int i,j=0;
    char temp,c;
    for(i=0; i<strlen(infix); i++)
    {
        c=infix[i];
        switch(c)

        {
        case '(':
            push(c);
            break;
        case ')':
            while((temp=pop()) != '(')
                postfix[j++]=temp;
            break;
        case '+':
        case '-':
        case '*':
        case '/':
        case '^':
            while(!isEmpty() && precedence(stack[top])>=precedence(c))

                postfix[j++]=pop();

            push(c);
            break;
        default :
            postfix[j++]=c;


        }

    }
    while(!isEmpty())
        postfix[j++]=pop();
    postfix[j]='\0';
}
void evaluate(){
int i,a,b;
for(i=0;i<strlen(postfix);i++)
{









}






}
int main()
{
    printf("ENTER THE INFIX EXPRESSION  TO CONVERT TO POST FIX: ");
    scanf("%s",infix);
  //  gets(infix);
    infixtopost();
    show();
    return 0;
    
}
