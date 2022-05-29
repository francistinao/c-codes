/* This is a C Program that 
contains the functionalities of how
a banking system works. It consist
of all basics of fundamentals of programming 


Program made by Francis Tin-ao
*/

#include <stdio.h>
#include <string.h>
#include <math.h>

 struct Client {
     char name[10];
     int bankPin[4];
     double balance,loan;
}client;

// int client_loan(struct Client) {
//     const float interest = 1.6;
//     float amount_to_pay,loan;
//     int months = 12;

//     printf("Enter amount to loan: ");
//     scanf("%f",&loan);

//     printf("You have loan: PHP%.2f\n\n",loan);
    
//     for(int i = 1; i <= months; i++){
//         loan*=interest;
//     }
//     amount_to_pay = loan;
//     printf("You must pay PHP%.2f by the end of the year",amount_to_pay);
// }

int client_withdraw(struct Client) {
    const float MIN_WITH_AMOUNT = 1000;
    float amount;

    printf("The  MINIMUM withdrawal amount is %.2f\n\n",MIN_WITH_AMOUNT);

    printf("Enter amount: ");
    scanf("%f",&amount);

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
   char options[6][20] = {"[1]Balance","[2]Deposite","[3]Withdraw","[4]Loan","[5]Pay Loan","[6]Logout"};

    printf("\n\n---OPTIONS--- \n");
    for(int i = 0; i < 7; i++){
        for(int j = 0; j < 20; j++) {
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
            // client_loan(client);
            break;

        case 5:
            main();
            break;
    
        default:
            printf("Invalid choice");
            bank_options(client);
            break;
    }
}

int bank_login_successful(int choice, struct Client) {
    printf("\nName: ");
    printf("%s \n",client.name);

    printf("Balance: ");
    printf("PHP%.2lf\n",client.balance);

    printf("Amount that must be paid: ");
    printf("%.2lf",client.loan);

    bank_options(client);
}


 int bank_account_signup(int choice, struct Client) {
     printf("Name: ");
     scanf("%s",&client.name);

     printf("Create PIN:  ");
     scanf("%d",client.bankPin);
     printf("Account successfully created!\n");
     
     main();
}

int bank_account_login(int choice,struct Client) {
    char name[10];
    int inputPin[4],client_choice;
    int tries = 3;

    printf("Enter PIN: ");
    scanf("%d",&inputPin);
    
    for(int i = 0; i < sizeof(inputPin); i++){
        if(inputPin[i] == client.bankPin[i]) {
            if(1) {
               bank_login_successful(choice,client);
               break;
            }
        } else {
            printf("Invalid user\n\n");
            printf("Would you like to login again? \n[1]Yes\n[2]No\n\nChoice: ");
            scanf("%d",&client_choice);

            if(client_choice == 1) {
                while(tries > 1) {
                    tries--;
                    printf("\nTries: %d",tries);

                    printf("\nRe-enter PIN: ");
                    scanf("%d",&inputPin);

                    if(inputPin[i]==client.bankPin[i]) {
                       bank_login_successful(choice,client);
                       break;
                    } 
                    printf("Invalid user");
                }
                printf("\nYou have exceeded the limit of re-entering PIN\n\n\n");
                main();
                break;
            } else {
                return 0;
            }
       }
    }
}


int main(void) {
  int choice; 
 
  printf("\nWelcome to Furashizu National Bank\n\nHow may I help you? \n[1] Login\n[2] Create an account");
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
  }
    
  return 0;
}