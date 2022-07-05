/* This is a C Program that
contains the functionalities of how
a banking system works. It consist
of all the basics of fundamentals of programming
The program couldn't create multiple client
accounts since the program only consist 1 sub variable
for the structure
Program made by Francis Tin-ao
*/

#include <stdio.h>
#include <string.h>
#include <math.h>

struct Client {
     char name[10];
     char bankPin[4];
     double balance,loan;
}client;

FILE *userfiles; //File Handling

//Function to create a new account 
//needs to work

int cash_transfer(struct Client) {
    printf("");
}

char enter_password(struct Client,char ch) {
    printf("Enter new password: ");
    for(int i = 0; i < 4; i++) {
        ch = getch();
        client.bankPin[i] = ch;
        ch = '*';
        printf("%c",ch); 
     }
}

char change_password(struct Client) {
    char current_password[4];
    char ch;

    printf("Enter current password: ");
    for(int i = 0; i < 4; i++) {
        ch = getch();
        current_password[i] = ch;
        ch = '*';
        scanf("%c", &ch);
    }

    for(int i = 0; i < 4; i++) {
        if(current_password[i] == client.bankPin[i]) {
            printf("Password matched\n");
            enter_password(client,ch);
            break;
        }
        else {
            printf("Password incorrect\n");
            i--;
            continue;
        }
    }
}

int client_pay_loan(struct Client) {
    if(client.balance != 0) {
        if(client.balance > client.loan) {
            client.balance-=client.loan;
            printf("You have successfully paid your loan.\n");
            printf("PHP %.2f is deducted on your balance",client.loan);
            client.loan = 0;
        } else {
            printf("Your balance is not enough to pay the loan.\n");
        }
        bank_login_successful(client);
    } else {
        printf("You have no balance to pay the loan");
        bank_login_successful(client);
    }
}

int client_loan(struct Client) {
    const float interest = 0.05; //5% interest rate
    float amount_to_pay,loan,sum = 0,init_loan_val; //initial loan value where the interest loan value is not yet added
    int months = 12, i = 1;

    printf("Enter amount to loan: ");
    scanf("%f",&loan);

    printf("Interest: %5\n");
    printf("You have loaned: PHP%.2f\n\n",loan);
    init_loan_val = loan; //init_loan_val is now holdign the value of loan where the user inputted the amount borrowed
    
    loan*=interest;

    /*let us say for example, i have loaned 50000 Fifty thousand since we have 5% interest rate
    Now we have 25000 interest rate then we will multiply it by 12 since the interest rate must be
    applied monthly thats good for 1 year, then in the standard interest rate, the updated
    amount will be added to the original loan amount which is 50000 + 30000 = 80000, therefor the 
    client must pay 80000 by the end of the year */

    while(i <= months) {
        loan*=1; //For us to be able to grab only the value of the loan, we just have to multiply it by 1
        sum+=loan; //THis will compute the sum of the loan times the months 
        i++;
    }
    client.loan = init_loan_val + sum; //In this step, we will now add the original value borrowed for the user and the updated amount where interest is applied
    printf("You must pay PHP %.2f by the end of the year",client.loan);

    bank_login_successful(client);

}

int client_withdraw(struct Client) {
    const float MIN_WITH_AMOUNT = 1000;-
    float amount;

    printf("The  MINIMUM withdrawal amount is %.2f\n\n",MIN_WITH_AMOUNT);

    printf("Enter amount: ");
    scanf("%f",&amount);

    if(client.balance != 0) {
        if(amount >= MIN_WITH_AMOUNT) {
            if(amount <= client.balance) {
                client.balance-=amount;
                printf("The withdraw is successful");
                bank_login_successful(client);
            } else {
                printf("The amount inputted is GREATER than the client's balance");
                bank_login_successful(client);
                }
        } else if (amount < MIN_WITH_AMOUNT) {
            printf("The amount inputted did not exceed the MINIMUM Withdrawal amount");
            bank_login_successful(client);
        }
    } else {
        printf("The client's balance is empty");
        bank_options(client);
    }
}

int client_deposit(struct Client) {
    const float MIN_AMOUNT = 500;
    float amount;
    printf("---DEPOSIT---\n");
    printf("The amount you deposite must be 500 in MINIMUM\n\n");
    printf("Enter amount: ");
    scanf("%f",&amount);

    if(amount>=MIN_AMOUNT) {
        client.balance+=amount;
        printf("The deposit is successful\n");
        bank_login_successful(client);
    } else {
        printf("Amount inputted did not meet the MINIMUM DEPOSIT AMOUNT");
        bank_login_successful(client);
    }
}

int bank_options(struct Client) {
   int client_bank_choice;
   char options[8][30] = {"[1]Balance","[2]Deposite","[3]Withdraw","[4]Loan","[5]Pay Loan","[6]Cash Transfer","[7]Change Password","[8]Logout"};

    printf("\n\n---OPTIONS--- \n");
    for(int i = 0; i < 8; i++){
        for(int j = 0; j < 30; j++) {
            printf("%c",options[i][j]);
        }
        printf("\n");
    }

    printf("\n\nChoose setting: ");
    scanf("%d",&client_bank_choice);

    switch(client_bank_choice){
        case 1:
            printf("Balance is: PHP%.2lf",client.balance);
            bank_options(client);
            break;

        case 2:
            client_deposit(client);
            break;

        case 3:
            client_withdraw(client);
            break;

        case 4:
            client_loan(client);
            break;

        case 5:
            client_pay_loan(client);
            break;

        case 6:
            // cash_transfer(client);
            break;

        case 7:
            // change_password(client);
            break;

        case 8:
            main();
            break;

        default:
            printf("Invalid choice");
            bank_options(client);
            break;
    }
}

int bank_login_successful(int choice, struct Client) {
    printf("\n\nWELCOME!");
    printf("\nName: ");
    printf("%s \n",client.name);

    printf("Balance: ");
    printf("PHP %.2lf\n",client.balance);

    printf("Client loan: ");
    printf("PHP %.2lf",client.loan);

    bank_options(client);
}


 int bank_account_signup(int choice, struct Client) {
     char ch;
     printf("Enter First Name: ");
     scanf("%s",client.name);

     printf("Create 4-Num PIN:  ");
     for(int i = 0; i < 4; i++) {
        ch = getch();
        client.bankPin[i] = ch;
        ch = '*';
        printf("%c",ch); 
     }

     printf("\n\nAccount successfully created!\n");

     main();
}

int bank_account_login(int choice,struct Client) {
    char inputPin[4],ch;
    int client_choice,cl_choice;
    int tries = 3;

    printf("Enter PIN: ");
    for(int i = 0; i < 4; i++) {
        ch = getch();
        inputPin[i] = ch;
        ch = '*';
        printf("%c",ch);
    }

    for(int i = 0; i < sizeof(inputPin); i++){
        if(inputPin[i] == client.bankPin[i]) {
            if(1) {
               bank_login_successful(choice,client);
               break;
            }
        } else {
            printf("\n\nInvalid! No existing client\n\n");
            printf("Would you like to login again? \n[1]Yes\n[2]No\n\nChoice: ");
            scanf("%d",&client_choice);

            if(client_choice == 1) {
                while(tries > 1) {
                    tries--;
                    printf("\nTries: %d",tries);

                    printf("\nRe-enter PIN: ");
                      for(int i = 0; i < 4; i++) {
                        ch = getch();
                        inputPin[i] = ch;
                        ch = '*';
                        printf("%c",ch);
                    }

                    if(inputPin[i]==client.bankPin[i]) {
                       bank_login_successful(choice,client);
                       break;
                    }
                    printf("\nInvalid user");
                }
                printf("\nYou have exceeded the limit of re-entering PIN\n\n\n");
                main();
                break;
            } else if(client_choice == 2){
                printf("Would you like create another account? \n[1]Yes\n[2]No\n\nChoice:   ");
                scanf("%d",&cl_choice);

                // switch(cl_choice) {
                //     case 1:
                //         // for(int i = 0; i; i++) {

                //         // }
                //         break;
                // }
            } else {
                printf("Thank you! Come again");
                return 0;
            }
       }
    }
}

int main(void) {
  int choice;

  printf("\nWelcome to Garuda National Bank\n\nHow may I help you? \n[1] Login\n[2] Create an account");
  printf("\n\nChoice : ");
  scanf("%d",&choice);

  switch(choice) {
      case 1:
        // If client's choice is Login, go to function bank_account_login
        bank_account_login(choice,client);
        break;

      case 2:
        bank_account_signup(choice,client);
        break;

      default: 
        printf("Invalid choice\n\n");
        main();
        break;
  }
  return 0;
}