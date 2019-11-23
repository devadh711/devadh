#include <stdio.h>
int top=-1;
int stack[5];
int push(int  a);
int pop();
int display();

int main()
{
    int a,b;
    
    while(1)
    {
        printf("1.push 2.pop 3.display\n");
        scanf("%d",&a);
        switch(a)
        {
            case 1:
            printf("enter a value to push\n");
            scanf("%d",&b);
            push(b);
            break;

            case 2:
            pop();
            break;

            case 3:
            display();
            break;

            default:
            printf("hakuna matata");
            

        }
    }
}