


#include<stdio.h>      //M H V N PAVAN KUMAR 
#include<stdlib.h>      
#include<string.h>
#include<math.h>
#define max 100     //global declaration of the array size.
int stack[max];
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
void push( int x) //push function is to insert an element in stack
{


    if(isFull())
    {   printf("stack overflow or stack is full");
        return ;
    }
    top++;
    stack[top]=x;


}
//To delete the element of the stack
int pop()
{
    if(isEmpty())
        printf("stack underflow or stack is empty");
    else
    {   int x;

        x=stack[top];
        top--;
        return x;

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
  int evaluate() //it evaluate the postfix expression
{
	int i,a,b;
		for(i=0;i<strlen(postfix);i++)
		{
				if (postfix[i]>='0'&& postfix[i]<='9')
					push(postfix[i]-'0');
				else
			{
				a=pop();
				b=pop();
				switch(postfix[i])
				{
					case '+':
					push(b+a);
					break;
					case '-':
					push(b-a);
					break;
					case '*':
					push(b*a);
					break;
					case '/':
					push(b/a);
					break;
					case '^':
					push(pow(b,a));
					break;
				}		
	
			}

		}
		return pop();

}
int main()
{ 	int ans;
    	printf("ENTER THE INFIX EXPRESSION  TO CONVERT TO POST FIX: ");
 
    	scanf("%s",infix);
 
    	infixtopost();
 
    	show();
 
   	ans=evaluate();
 
   	 printf("THE VALUE OF AFTER EVALUTION OF THE EXPRESSION=%d\n",ans);
	 

   	 
   	 while(1)
   	 {
   	     printf("1)TO ENTER INFIX EXPRESSION\n");
   	     printf("2)TO CONVERT IT INTO POSTFIX EXPRESSION\n");
   	     printf("3)TO EVALUATE THE EXPRESSION\n");
   	     printf("4)TO QUIT\n");
   	     int c;
		 scanf("%d",&c);
   	     switch(c)
   	     {
   	         
   	         	 case 1:
			 printf("ENTER THE INFIX EXPRESSION");
			 scanf("%s",infix);
			 break;
			 case 2:
			 infixtopost();
			 show();
			 break;
			 case 3:
			 ans=evaluate();
			 printf("THE VALUE OF EXPRESSION AFTER EVALUATION=%d\n",ans);
			 break;
			 case 4:
			 exit(1);
   	         
   	         
   	         
   	         
   	     }
   	     
   	     
   	     
   	     
   	 }
 
    	return 0;
    
}
