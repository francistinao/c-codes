/* A remake of banking system
by Francis Tin-ao

Work in Progress*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

FILE* client_files;

struct Client {
    char first_name[15],
    last_name[15],
    gender,
    contact_num[11];
    int age,
    bank_pin;
    double balance,loan;
}client;

const int MIN_AMOUNT_DEPOSITE = 500,MIN_AMOUNT_WITHDRAW = 100;

//Functions
int client_deposit(struct Client);
void login_successful(struct Client);
void bank_account_login(struct Client);
void create_account(struct Client);

int main() {
    char choices[][50] = {"Login Existing Account", "Create Account", "Exit"};
    int choice,count = 1,
    ROWS = sizeof(choices)/sizeof(choices[0]);

    system("cls");
    printf("\n\nGaruda National Bank\nWELCOME!\n");

    for(int i = 0; i < ROWS; i++) {
        printf("[%d]\t%s\n",count,choices[i]);
        count++;
    }
    printf("Choose Option: ");
    scanf("%d",&choice);

    switch(choice) {
        case 1:
            bank_account_login(client);
            break;

        case 2:
            create_account(client);
            break;

        case 3:
            printf("Thank you for coming to Garuda National Bank.\n");
            return 0;  
            break;
    }
}

int client_deposit(struct Client) {
    float amount;
    printf("---DEPOSIT---\n");
    printf("The amount you deposite must be 500 in MINIMUM\n\n");
    printf("Enter amount: ");
    scanf("%f",&amount);

    if(amount>=MIN_AMOUNT_DEPOSITE) {
        client.balance+=amount;
        printf("The deposit is successful\n");
    } else {
        printf("Amount inputted did not meet the MINIMUM DEPOSIT AMOUNT");
    }
    login_successful(client);
}

void login_successful(struct Client) {
    client_files = fopen("client_info.txt","r");
    char menu[][100] = {"Balance","Deposite","Withdraw","Loan","Pay Loan","Cash Transfer","Change Password","Logout"},answer;
    int ROW = sizeof(menu)/sizeof(menu[0]),menu_choice,count = 1;

    printf("GARUDA NATIONAL BANK\n\n");
    printf("WELCOME! %s %s\n",client.first_name,client.last_name);
    printf("Balance: %.2f\n",client.balance);
    printf("Loan: %.2f",client.loan);

    printf("\n\n---OPTIONS--- \n");
    for(int i = 0; i < ROW; i++) {
        printf("[%d] %s\n",count,menu[i]);
        count++;
    }

    printf("\n\nChoose setting: ");
    scanf("%d",&menu_choice);
    switch(menu_choice) {
        case 1:
            printf("Balance is: PHP%.2lf\n\n",client.balance);
            system("cls");
            break;

        case 2:
            client_deposit(client);
            system("cls");
            break;

        default:
            printf("Invalid choice");
            break;
        } 
        
        printf("Do you want another transaction? [Y/N]: ");
        scanf(" %c",&answer);

        if(answer == 'Y' || answer == 'y') {
            system("cls");
            login_successful(client);
        } else {
            printf("Thank you for coming to Garuda National Bank.\n");
        }
}

void bank_account_login(struct Client) {
    int input_pin;
    char login_again;

    client_files = fopen("client_info.txt","r");

    if(client_files == NULL) {
        printf("Error opening file\n");
        return;
    } 

    printf("\n\nEnter Bank Pin: ");
    scanf("%d",&input_pin);

    while(fread(&client,sizeof(struct Client),1,client_files)) {
        if(input_pin == client.bank_pin) {
            printf("====Account login sucessful====\n");
            login_successful(client);
            break;
        } else {
            printf("\n\nInvalid pin!\n");
            printf("Would you like to login again? [Y/N]:  ");
            scanf(" %c",&login_again);

            switch(login_again) {
                case 'Y':
                case 'y':
                    int tries = 3;
                    while(tries >= 1) {
                        tries--;
                        input_pin = 0;
                        printf("\nTries: %d",tries);
                        printf("\nRe-enter PIN: ");
                        scanf("%d",&input_pin);

                        if(input_pin == client.bank_pin) {
                            printf("====Account login sucessful====\n");
                            login_successful(client);
                            break;
                            break;
                        } 
                    }
                    printf("\nYou have exceeded the limit of re-entering PIN\n\n\n");
                    main();
                    break;

                case 'N':
                case 'n':
                    main();
                    break;
            }
        }
    }
    fclose(client_files);
}

void create_account(struct Client) {

    char file_name[50],choice;
    int size_of_cnum = 11, size_of_pin = 4;
    
    do {
        printf("====CREATE AN ACCOUNT====\n\n");
        client_files = fopen("client_info.txt","a");

        printf("Enter first name: ");
        scanf("%s",&client.first_name);

        printf("Enter last name: ");
        scanf("%s",&client.last_name);

        printf("Enter age: ");
        scanf("%d",&client.age);

        printf("Enter gender [M/F] : ");
        scanf(" %c",&client.gender);

        printf("Enter 11-numbered contact number: ");
        scanf("%s",&client.contact_num);
            if(strlen(client.contact_num) > size_of_cnum || strlen(client.contact_num) < size_of_cnum){
                printf("The number inputted did not match the required length.\n");
                while(true) {
                    printf("Enter number again: ");
                    scanf("%s",&client.contact_num);
                    if(strlen(client.contact_num) == size_of_cnum) {
                        break;
                    }
                }
            }

        printf("Enter 4-Num PIN: ");
        scanf("%d",&client.bank_pin);

            if(client.bank_pin < 1000 && client.bank_pin > 9999) {
                printf("The PIN inputted did not match the required length.\n");
                while(true) {
                    client.bank_pin = 0;
                    printf("Enter PIN again: ");
                    scanf("%d",&client.bank_pin);
                    //If the password is now a 4-digit password
                    if(client.bank_pin >= 1000 && client.bank_pin <= 9999) {
                        main();
                        break;
                    }
                }
            }

        if(client_files == NULL) {
            fprintf(stderr,"Error opening file\n");
        } else {
            printf("Account successfully created!");
        }

        fwrite(&client,sizeof(struct Client),1,client_files);
        fclose(client_files);

        printf("\nDo you want to create another account? [Y/N] "); 
        scanf(" %c",&choice);
    } while(choice == 'Y');
    if(choice == 'N') main();
}