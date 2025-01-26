#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



FILE *file;          
char id_user[300];     
char pass_user[30];

void Register();
int Login();

void addition();
void subtraction();
void multiplication();
void division();
void average();
void logarithm();
void Square_root();

int main(){
    
    
    int menu;
    int menu_login;
    int login;
    do{
        /* The code snippet is displaying a menu to the user and prompting them to enter a choice. */

        system("cls");
        printf("===============\n");
        printf("[1]Register\n");
        printf("[2]Login\n");
        printf("[0]Exit\n");
        printf("===============\n");
        printf("Enter Menu : ");
        scanf("%d",&menu);
    
       /* The code snippet is implementing a menu-driven program that allows users to register, login,
       and perform various mathematical operations. */

        if (menu == 1){
            system("cls");
            Register();
            getch();
            system("cls"); 
            main();

        } else if (menu == 2){
            
            system("cls");
            login = Login();
            
            if (login == 1){
                
                printf("----------------\n");   
                printf("LOGIN SUCCEED!!\n");
                printf("----------------\n");  


                getch();

                do{ 
                    system("cls");
                    printf("====================\n");
                    printf("[1]Addition\n");
                    printf("[2]Subtraction\n");
                    printf("[3]Multiplication\n");
                    printf("[4]Division\n");
                    printf("[5]Average\n");
                    printf("[6]Logarithm\n");
                    printf("[7]Square Root\n");
                    printf("[0]Exit\n");
                    printf("====================\n");

                    printf("Enter Menu : ");
                    scanf("%d",&menu_login);

                    if (menu_login == 1){
                        system("cls");
                        addition();
                        getch();
                    } else if (menu_login == 2){
                        system("cls");
                        subtraction();
                        getch();
                    } else if (menu_login == 3){
                        system("cls");
                        multiplication();
                        getch();
                    } else if (menu_login == 4){
                        system("cls");
                        division();
                        getch();
                    } else if (menu_login == 5){
                        system("cls");
                        average();
                        getch();
                    } else if (menu_login == 6){
                        system("cls");
                        logarithm();
                        getch();
                    } else if (menu_login == 7){
                        system("cls");
                        Square_root();
                        getch();
                    } else if (menu_login == 0){
                        getch();
                        return 0;
                    }
                } while (menu_login != 0);

            } else if (login == 0){

                printf("------------------------------\n");   
                printf("Username or Password invalid!!\n");
                printf("------------------------------\n");
                getch();
            }

        } else if (menu == 0){
            getch();
            return 0;
        }
    } while (menu != 0);
    return 0;
    
}


/**
 * The function "Register" allows a user to register by entering a username and password, which are
 * then stored in a file.
 */

void Register(){
    
    file = fopen("User.txt","a+");
    printf("----------------\n");
    printf("REGISTER SYSTEM\n");
    printf("----------------\n");
    printf("Enter your Username : ");
    scanf("%s",&id_user);
    printf("Enter your Password : ");
    scanf("%s",&pass_user);
    fprintf(file,"%s\n%s\n",id_user,pass_user);
    printf("------------------\n");
    printf("REGISTER SUCCEED!!\n");
    printf("------------------\n");
    fclose(file);
    
}


/**
 * The function Login() reads a file containing usernames and passwords, prompts the user to enter
 * their username and password, and returns 1 if the entered credentials match any of the usernames and
 * passwords in the file, otherwise it returns 0.
 * 
 * return an integer value. If the login is successful, it returns 1. If the login is unsuccessful, it
 * returns 0.
 */

int Login(){

    char login_user[30];
    char login_pass[30];

    file = fopen("User.txt","r");
    printf("------------\n");
    printf("LOGIN SYSTEM\n");
    printf("------------\n");
    printf("Enter your Username : ");
    scanf("%s",&id_user);
    printf("Enter your Password : ");
    scanf("%s",&pass_user);

    while (fscanf(file,"%s %s",login_user,login_pass) != EOF){
        if (strcmp(id_user,login_user) == 0 && strcmp(pass_user,login_pass) == 0){
            fclose(file);
            return 1;
        }
        
    }
    fclose(file); 
    return 0;
}


/**
 * The function "addition" takes user input for the number of operands and their values, and calculates
 * the sum of all the operands.
 */

void addition(){

    int op;
    printf("Enter your Operand : ");
    scanf("%d",&op);
    system("cls");

    float Elements[op];
    float sum = 0;

    for (int i = 0; i < op;i++){
        printf("Enter your Elements[%d]: ",i+1);
        scanf("%f",&Elements[i]);
        sum += Elements[i];
    }
    printf("----------------------\n");
    printf("Total is : %.2f\n",sum);
    printf("----------------------\n");
}


/**
 * The function "subtraction" takes user input for the number of operands and their values, and then
 * subtracts them to calculate the total.
 */

void subtraction(){

    int op;
    printf("Enter your Operand : ");
    scanf("%d",&op);
    system("cls");

    float Elements[op];
    float sum = 0;
    
    printf("Enter your Elements[1]: ");
    scanf("%f",&Elements[0]);
    sum = Elements[0];

    for (int i = 1; i < op;i++){
        printf("Enter your Elements[%d]: ",i+1);
        scanf("%f",&Elements[i]);
        sum -= Elements[i];

    }
    printf("----------------------\n");
    printf("Total is : %.2f\n",sum);
    printf("----------------------\n");
}   


/**
 * The multiplication function takes user input for the number of operands and their values, and then
 * calculates the product of all the operands.
 */

void multiplication(){

    int op;
    printf("Enter your Operand : ");
    scanf("%d",&op);
    system("cls");

    float Elements[op];
    float sum = 1;

    for (int i = 0; i < op;i++){
        printf("Enter your Elements[%d]: ",i+1);
        scanf("%f",&Elements[i]);
        sum *= Elements[i];
    }
    printf("----------------------\n");
    printf("Total is : %.2f\n",sum);
    printf("----------------------\n");
}


/**
 * The division function takes user input for an operand and a series of elements, divides the operand
 * by each element, and returns the total.
 */

void division(){

    int op;
    printf("Enter your Operand : ");
    scanf("%d",&op);
    system("cls");

    float Elements[op];
    float sum;

    printf("Enter your Elements[1]: ");
    scanf("%f",&Elements[0]);
    sum = Elements[0];

    for (int i = 1; i < op;i++){
        printf("Enter your Elements[%d]: ",i+1);
        scanf("%f",&Elements[i]);
        sum /= Elements[i];
    }
    printf("----------------------\n");
    printf("Total is : %.2f\n",sum);
    printf("----------------------\n");
}


/**
 * The function "average" calculates the average of a given set of numbers.
 */

void average(){

    int op;
    printf("Enter your Operand : ");
    scanf("%d",&op);
    system("cls");

    float Elements[op];
    float sum = 0;

    for (int i = 0; i < op;i++){
        printf("Enter your Elements[%d]: ",i+1);
        scanf("%f",&Elements[i]);
        sum += Elements[i];
    }
    printf("----------------------\n");
    printf("Average is : %.2f\n",sum/op);
    printf("----------------------\n");
}


/**
 * The function calculates the result of raising a base to an exponent and prints it.
 */

void logarithm(){
    
    float a,b;
    printf("Enter your base     : ");
    scanf("%f",&a);
    printf("Enter your exponent : ");
    scanf("%f",&b);
    printf("----------------------\n");
    printf("Total is : %.2f\n",pow(a,b));
    printf("----------------------\n");
}


/**
 * The function calculates the square root of a given number.
 */

void Square_root(){
    
    float a;
    printf("Enter your Square Root : ");
    scanf("%f",&a);
    printf("----------------------\n");
    printf("Total is : %.2f\n",sqrt(a));
    printf("----------------------\n");

}