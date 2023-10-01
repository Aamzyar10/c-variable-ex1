#include <stdio.h>


int main(){
    int n1,n2;
    char op;
    printf("enter the first num : \n");
    scanf("%d", &n1);
    printf("enter the second number :\n");
    scanf("%d", &n2);

    printf("enter the operation :\n");
    getchar();
    scanf("%c",&op);

        switch (op)
        {
        case '+':
            printf("%d + %d = %d \n", n1, n2, n1+n2);
            break;

        case '-':
            printf("%d - %d = %d \n", n1, n2, n1-n2);
            break; 

        case '*':
            
            printf("%d x %d = %d \n", n1, n2, n1*n2);
            break;

        case '/':
            if(n2 != 0)
            {
                printf("%d / %d = %d \n", n1, n2, n1/n2);
            }
            else
            {
                printf("can not divid on zero \n");
            }
            
            break;

        case '%':
            printf("%d %% %d = %d \n", n1, n2, n1%n2);
            break;  

        default:
            printf("un defined operatore!! \n");
            break;
        }


    
}