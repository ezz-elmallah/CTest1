#include <stdio.h>
#include <string.h>
int whidth_hight()
{
    int h;
    int w;
    printf(":)hello to the hight and width application(:\n\n");
    printf(" enter hight:\n");
    scanf("%d", &h);
    printf(" enter width:\n");
    scanf("%d", &w);
    if (w > 99 || h > 99)
    {
        do
        {
            printf("please repeat the procces and dont forget to put a 2 digit number \n\n\n");
            printf(" enter hight:\n");
            scanf("%2d", &h);
            printf(" enter width:\n");
            scanf("%2d", &w);
        } while (w > 99 || h > 99);
    }
    if (h == 0 || w == 0)
    {
        printf("i cant print it please put the digit above 0:");
    }
    else
    {
        for (int j = 0; j < h; j++)
        {

            for (int i = 0; i < w; i++)
            {
                printf("# ");
            }
            printf("\n");
        }
    }
    printf("\e[47m");
    printf("\n\nthank you for using the application 😊 \n\n");
}

int add(int n1, int n2) { return n1 + n2; }

int sub(int n1, int n2) { return n1 - n2; }

int dev(int n1, int n2) { return n1 / n2; }

int times(int n1, int n2) { return n1 * n2; }
void calculate()
{

    int result;

    int num1;

    int num2;

    char *op[1];

    printf("\n\n:)hello to the calculator application(:\n\n\n");

    printf("please enter num1:\n");

    scanf("%d", &num1);

    printf("please enter num2:\n");

    scanf("%d", &num2);

    printf("enter your operator[+, -, /, *]\n");

    scanf("%s", op);

    int ops;

    if (strcmp(op, "+") == 0)
        ops = 1;
    else if (strcmp(op, "-") == 0)
        ops = 2;
    else if (strcmp(op, "/") == 0)
        ops = 3;
    else if (strcmp(op, "*") == 0)
        ops = 4;

    switch (ops)
    {

    case 1:
        result = add(num1, num2);
        printf("\e[4;33m");
        printf("result = %d", result);
        break;
    case 2:

        result = sub(num1, num2);
        printf("\e[4;33m");
        printf("result = %d", result);

        break;

    case 3:
        result = dev(num1, num2);
        printf("\e[4;33m");
        printf("result = %d", result);

        break;

    case 4:
        result = times(num1, num2);
        printf("\e[4;33m");
        printf("result = %d", result);
        break;

    default:
        printf("\e[0;91m");
        printf(
            "please repeat your process check that you put the given keys:\n\n ");
        break;
    }
    printf("\e[47m");
    printf("\n\nthank you for using the application 😊 \n\n");
}
int salory()
{
    printf(":)hello to the salory application(:\n\n");
    int s;
    printf("please enter your salory from 1-3:\n");
    scanf("%d", &s);
    do
    {
        printf("please enter your salory from 1-3:\n");
        scanf("%d", &s);
        switch (s)
        {
        case 1:
            printf("salory is to low\n");
            break;
        case 2:
            printf("normal salory\n");
            break;
        case 3:
            printf("highest in market\n");
            break;
        default:
            printf("please enter from 1-3");
            break;
        }
        printf("\e[47m");
        printf("\n\nthank you for using the application 😊 \n\n");
    } while (3 < s);
}

int main(void)
{

    int password = 123;
    int pass;
    int choose;
    char username[20];
    int pass_retry_count=0;

    printf("please enter your username:\n");
    scanf("%s", &username);
    if (strcmp("ezz", username))
    {

        do
        {
            printf("\e[1;31m");
            printf("incorrect username\n");
            printf("please enter the correct username:\n");
            printf("\e[0;37m");
            scanf("%s", &username);
        } while (strcmp("ezz", username));
    }
    printf("\nplease enter your password:\n");
    printf("\e[0;107m");
    scanf("%d", &pass);
    printf("\e[0;37m");
    if (pass != password)
    {
        do
        {
            pass_retry_count++;
           printf("your atempt %d/3\n",pass_retry_count);
            if (pass_retry_count == 3)
           
            {

                printf("\nget out of here you are a robot\n");
                return 1;
            }
            printf("\e[1;31m");
            printf("incorrect\n");
            printf("please enter the correct password:\n");
            printf("\e[0;107m");
            scanf("%d", &pass);
            printf("\e[0;37m");
        } while (pass != password);
    }
    printf("\e[0;93m");
    printf("\nwelcome \"%s\" 😎\n\n", username);
    do
    {
        printf("\e[4;34m");
        printf("please choose a number:\n\n");
        printf("\e[1;92m");
        printf("1.hight and width \n");
        printf("\e[1;94m");
        printf("2.calculator \n");
        printf("\e[1;96m");
        printf("3.salory\n");
        printf("\e[0;37m");
        scanf("%d", &choose);

        switch (choose)
        {
        case 1:
            printf("\e[0;32m");
            whidth_hight();
            break;
        case 2:
            printf("\e[0;36m");
            calculate();
            break;
        case 3:
            printf("\e[0;34m");
            salory();
            break;
        default:
            printf("\e[4;31m	");
            printf("please repeat the proccess and dont forget to put the given numbers 1,2,3:\n\n");
            break;
        }
    } while (choose > 3);
    return 0;
}
