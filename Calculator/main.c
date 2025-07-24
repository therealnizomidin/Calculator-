#include <stdio.h>
#include <stdlib.h>

int main(){
    int a,b;
    char op;
    char cont='y';
    while (cont=='y'|| cont=='Y'){
            printf("Enter two numbers:");
            scanf("%d %d",&a,&b);
            printf("Choose operation(+,-,*,/):");
            scanf(" %c",&op);
            switch (op){
                case '+':
                    printf("Result %d",a+b);
                    break;
                case '-':
                    printf("RESULT IS %d",a-b);
                    break;
                case '*':
                    printf("Result %d", a*b);
                    break;
                case '/':
                    if (b != 0)
                        printf("Result %d",a/b);
                    else
                        printf("Error: Division by zero!\n");
                        break;
                default:
                    printf("INVALID OPERATOR");
                    }
    printf("     Do you want to continue? (y/n): ");
    scanf(" %c", &cont);
    }
    return 0;
}
