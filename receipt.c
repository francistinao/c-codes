#include <stdio.h>
#include <time.h>

/* Since the problem is all about a receipt from buying products in a mall
I have though of something that the buyer can still pick the products they want
to choose, so I made a category list function where the buyer can choose what to
buy*/

struct Costumer {        //I use struct data declaration for readability of data so that when the data updates consecutively, I can track the value of the struct variables easily
    int quantity;
    float total_payment;
}costumer;

//User-defined functions
char products(); //List of categories
char receipt(float change, float amount, struct Costumer); //Function that prints the receipt
int payment(float *priceP, struct Costumer); //Function that the program commands the buyer to pay the products he/she bought
void rebuy(int prod_choice, float *priceP, struct Costumer); //Function where if the buyer wants to buy again
int appliances(); //Products about appliances
int entertainment(); //Products about entertainment
int clothing(); //Products about clothing
int food(); //Products about food
int hygiene(); //Products about hygiene

//Main function
int main()  {
    printf("---GAISANO MALL BUTUAN----\n"); 
    products(); //First step, is to prompt the user all the list of the categories available in the GAISANO store

    return 0;
}

char receipt(float change,float amount,struct Costumer) {
    float tax = 0.12,
    VAT_amount = costumer.total_payment * tax,
    total = costumer.total_payment + VAT_amount;
    int choice;

    struct tm* ptr;
    time_t t;
    t = time(NULL);
    ptr = gmtime(&t);
    
    printf("\nTOTAL WITH VAT: PHP %.2f\n\n",total);
    
    recheck:
    if(amount >= total) {
        change = amount - total;
    } else if (amount < total) {
        printf("Your entered amount is less than the total price on your product");
        printf("\nEnter amount again: ");
        scanf("%f",&amount);
        goto recheck;
        // printf("Do you want to subtract the quantity of your products? [1]Yes | [2]No");
        // scanf("%d",&choice);

        // switch(choice) {
        //     case 1:
        //         printf("How many quantity ");
        // }
    }
    
    printf("\n\n========GASAINO MALL BUTUAN=======");
    printf("\nJC Aquino Ave. Capitol Road");
    printf("\nInterpace Corporation");
    printf("\nTIN NO: 000-273-941-012 VAT");
    printf("\nA/N: 101-000273941-000432");
    printf("\nS/N WCAM9U136899 P/N 0810-103-76840-012");
    printf("\nM/N 100142043");
    printf("\n\n * PRODUCTS *   PIECE: %.2f",total);
    printf("\n                  TOTAL: %.2f",total);
    printf("\nSKU: %d           CASH: %.2f",costumer.quantity,amount);
    printf("\nQTY: %d           CHANGE: %.2f",costumer.quantity,change);
    printf("\n\nJOIN GAISANO SUKI CLUB NOW");
    printf("\n\nVAT Sales:               %.2f",costumer.total_payment);
    printf("\nVAT Amount:              %.2f",VAT_amount);
    printf("\nVAT Excempt Sales:       0.00");
    printf("\n          Total:         %.2f",total);
    printf("\n\nCounter: 011    TIME END: 11:59");
    printf("\nCASHIER: Francis   %s",asctime(ptr));
    printf("\n06/19/2022    OR# 011-06430-00018");
    printf("\nCostumer: ------------------------");
    printf("\nAddress: -------------------------");
    printf("\n     TIN #: ----------------------");
    printf("\n\nTHIS SERVES AS CASH SALES INVOICE &");
    printf("\nVALID 5 YEARS FROM DATE OF PERMIT TO USE");
    printf("\n\nINTERPACE GAISANO SUPERSTORE");
    printf("\nBUTUAN CITY, PHILIPPINES");
    printf("\nTIN #: 000-273-941-000");
    printf("\nAccreditation# 101-00273941-000432-309777");
    printf("\nDATE: 06/19/2022    VALID UNTIL: 06/24/2002");
}

int payment(float *priceP, struct Costumer) {
    float amount,change = 0;
    
    printf("\nTOTAl: PHP %.2f",costumer.total_payment);
    
    printf("\n\nEnter your cash amount: ");
    scanf("%f",&amount);

    receipt(change,amount,costumer);
}

void rebuy(int prod_choice, float *priceP, struct Costumer) {
    int op;
    int quantity;

    printf("Price: PHP %.2f\n",*priceP);

    printf("\nQuantity: ");
    scanf("%d",&quantity);

    costumer.quantity += quantity; //costumer.quantity = costumer.quantity + quantity

    if(quantity > 1) { //There is this tendency that if the buyer wants to buy a specific product and its quantity will be more than 1, automatically the price will be updated. For example, Toothpaste that cost 6 pesos then I will buy 3 toothpastes therefore 3 * 6 = 18 PESOS
        *priceP *= quantity;
    }
    
    costumer.total_payment += *priceP; 

    printf("\nDo you want to buy again? [1]Yes | [2]No: ");
    scanf("%d",&op);

    switch(op) {
        case 1:
            products();
            break;

        case 2:
            payment(priceP,costumer);
            break;
    }
}

int appliances() {
    float price,*priceP;
    int rows = 4,prod_choice, count = 1;
    char products[4][20] = {"Iron","Microwave","Oven","Toaster"};
    char prices[4][20] = {"PHP 651.79","PHP 2000.00", "PHP 5400.00","PHP 1200.00"};
    char *productP;

    printf("\nChoose product:\n");
    for(int i = 0; i < rows; i++) {
        printf("[%d] %s          %s\n",count, products[i],prices[i]);
        count+=1;
    }
    printf("\nChoice: ");   
    scanf("%d",&prod_choice);
    
    priceP = &price; //Whatever product is selected, its price will be copied using Call by reference ---copying the value and its address to another functions

    if(prod_choice == 1) {
        price = 651.79;
        rebuy(prod_choice,priceP,costumer);
    } else if(prod_choice == 2) {
        price = 2000.00;
        rebuy(prod_choice,priceP,costumer);
    } else if(prod_choice == 3) {
        price = 5400.00;
        rebuy(prod_choice,priceP,costumer);
    } else {
        price = 1200.00;
        rebuy(prod_choice,priceP,costumer);
    }
}

int entertainment() {
    float price,*priceP;
    int rows = 4,prod_choice, count = 1;
    char products[4][20] = {"Television","Tablet","Stuff Toy","Guitar"};
    char prices[4][20] = {"PHP 1450.00","PHP 1100.00", "PHP 350.00","PHP 780.00"};

    printf("\nChoose product:\n");
    for(int i = 0; i < rows; i++) {
        printf("[%d] %s          %s\n",count, products[i],prices[i]);
        count+=1;
    }
    printf("\nChoice: ");   
    scanf("%d",&prod_choice);

    priceP = &price; //Whatever product is selected, its price will be copied using Call by reference ---copying the value and its address to another functions
    if(prod_choice == 1) {
        price = 1450.00;
        rebuy(prod_choice,priceP,costumer);
    } else if(prod_choice == 2) {
        price = 1100.00;
        rebuy(prod_choice,priceP,costumer);
    } else if(prod_choice == 3) {
        price = 350.00;
        rebuy(prod_choice,priceP,costumer);
    } else {
        price = 780.00;
        rebuy(prod_choice,priceP,costumer);
    }
}


int clothing() {
    float price,*priceP;
    int rows = 4,prod_choice, count = 1;
    char products[4][20] = {"Shirt","Shorts","Pants","Sweater"};
    char prices[4][20] = {"PHP 200.00","PHP 450.00", "PHP 600.00","PHP 999.00"};

    printf("\nChoose product:\n");
    for(int i = 0; i < rows; i++) {
        printf("[%d] %s          %s\n",count, products[i],prices[i]);
        count+=1;
    }
    printf("\nChoice: ");   
    scanf("%d",&prod_choice);

    priceP = &price; //Whatever product is selected, its price will be copied using Call by reference ---copying the value and its address to another functions

    if(prod_choice == 1) {
        price = 200.00;
        rebuy(prod_choice,priceP,costumer);
    } else if(prod_choice == 2) {
        price = 450.00;
        rebuy(prod_choice,priceP,costumer);
    } else if(prod_choice == 3) {
        price = 600.00;
        rebuy(prod_choice,priceP,costumer);
    } else {
        price = 999.00;
        rebuy(prod_choice,priceP,costumer);
    }
}

int food() {
    float price,*priceP;
    int rows = 5,prod_choice,count = 1;
    char products[5][20] = {"Hamburger","Hotdog","Pizza","Icecream","Chicken"};
    char prices[5][20] = {"PHP 30.00","PHP 20.00", "PHP 28.00","PHP 23.00","PHP 45.00"};

    printf("\nChoose product:\n");
    for(int i = 0; i < rows; i++) {
        printf("[%d] %s          %s\n",count, products[i],prices[i]);
        count+=1;
    }
    printf("\nChoice: ");   
    scanf("%d",&prod_choice);

    priceP = &price; //Whatever product is selected, its price will be copied using Call by reference ---copying the value and its address to another functions

    if(prod_choice == 1) {
        price = 30.00;
        rebuy(prod_choice,priceP,costumer);
    } else if(prod_choice == 2) {
        price = 20.00;
        rebuy(prod_choice,priceP,costumer);
    } else if(prod_choice == 3) {
        price = 28.00;
        rebuy(prod_choice,priceP,costumer);
    } else if(prod_choice == 4) {
        price = 23.00;
        rebuy(prod_choice,priceP,costumer);
    } else {
        price = 45.00;
        rebuy(prod_choice,priceP,costumer);
    }
}

int hygiene() {
    float price,*priceP;
    int rows = 5,prod_choice,count = 1;
    char products[5][20] = {"Toothpaste","Soap","Shampoo","Cream","Lotion"};
    char prices[5][20] = {"PHP 12.00","PHP 9.00", "PHP 7.00","PHP 14.50","PHP 25.53"};

    printf("\nChoose product:\n");
    for(int i = 0; i < rows; i++) {
        printf("[%d] %s          %s\n",count, products[i],prices[i]);
        count+=1;
    }
    printf("\nChoice: ");   
    scanf("%d",&prod_choice);

    priceP = &price; //Whatever product is selected, its price will be copied using Call by reference ---copying the value and its address to another functions

    if(prod_choice == 1) {
        price = 12.00; //Price of toothpaste
        rebuy(prod_choice,priceP,costumer);
    } else if(prod_choice == 2) {
        price = 9.00; //Price of soap
        rebuy(prod_choice,priceP,costumer);
    } else if(prod_choice == 3) {
        price = 7.00; //Price of shampoo
        rebuy(prod_choice,priceP,costumer);
    } else if(prod_choice == 4) {
        price = 14.50; //Price of Cream
        rebuy(prod_choice,priceP,costumer);
    } else {
        price = 25.53; //Price of Lotion
        rebuy(prod_choice,priceP,costumer);
    }

}

char products() {
     char category[6][100] = {"Hygiene","Food","Clothing","Entertainment","Appliances","Exit"};
     int choice,count = 1; 
    //In printing multiple printf's, instead of printing it one by one, I use 2D array and iterate the entire value of the array so that the time complexity is efficient 
     printf("\nChoose category: \n");
     for(int i = 0; i < 6; i++) {
        printf("[%d] %s\n",count, category[i]);
        count+=1; //count = count + 1;
     }
     printf("\nChoice: ");
     scanf("%d", &choice);

     switch(choice) {
        case 1:
            hygiene(); //Products about hygiene
            break;
            
        case 2:
            food();  //Products about food
            break;

        case 3:
            clothing(); //Products about clothing
            break;

         case 4:
            entertainment(); //Products about entertainment
            break;
        
         case 5:
            appliances(); //Products about appliances
            break;

         case 6:
            return 0;
     }
}