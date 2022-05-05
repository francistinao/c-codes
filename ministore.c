#include <stdio.h>
int num_of_prod(int choice,int quantity){
    printf("\nEnter quantity: ");
    scanf("%d",&quantity);
    return quantity;
}
int main(){
    int choice,quantity,price = 0;
    int sum = 0;
    char *products[30] = {"Surf","Shampoo","Safeguard","Tide","Ariel","Toothpaste","Exit"};
    int total_price[10];
    
    printf("-----Option-----\n");

    for(int i = 0; i <= 6; i++){ 
        printf("%d. %s\n",i,products[i]);
    }

    printf("\n\nYou have to buy each available products for you to purchase");
    for(int i = 0; i < 1; i++){
        for(int j=1; j <= 4; j++){
            printf("\n\nChoose %d product> ",j);
            scanf("%d",&choice);
                if(choice==0){
                    printf("You've chosen %s",products[0]);
                    total_price[j] = num_of_prod(choice,quantity) * 50;
                } else if(choice==1){
                    printf("You've chosen %s",products[1]);
                    total_price[j] = num_of_prod(choice,quantity) * 20;
                } else if (choice==2){
                    printf("You've chosen %s",products[2]);
                    total_price[j] = num_of_prod(choice,quantity) * 200;
                } else if(choice==3){
                    printf("You've chosen %s",products[3]);
                    total_price[j] = num_of_prod(choice,quantity) * 60;
                } else if(choice==4) {
                     printf("You've chosen %s",products[4]);
                    total_price[j] = num_of_prod(choice,quantity) * 15;
                } else if(choice==5) {
                    printf("You've chosen %s",products[5]);
                    total_price[j] = num_of_prod(choice,quantity) * 45;
                } else {
                    return 0;
                }
                printf("Total: %d",total_price[j]);
       }
    }
       printf("\n\n\n");
       printf("-----RECEIPT-----\n");
       for(int i = 1; i <=4; i++){
            printf("Price of purchased items: %d\n",total_price[i]);
            sum+=total_price[i];
        }
        printf("-----TOTAL-----");
        printf("\nTotal: %d",sum);
}
