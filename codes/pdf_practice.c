// Write a multiple-alternative if statement to display a message indicating 
// the educational level of a student based on the student’s number of years of 
// schooling (0, none; 1–5, elementary school; 6–8, middle school; 9–12, high 
// school; more than 12, college). Print a message to indicate bad data as well. 

#include <stdio.h>

int main() {
     int student_year;

     printf("Enter your school year-level: ");
     scanf("%d",&student_year);

     if (student_year == 0){
         printf("None");
     } else if(student_year >=1 && student_year <=5){
         printf("You're in Elementary School");
     } else if(student_year >=6 && student_year <= 8){
         printf("You're in Middle School"); 
     } else if(student_year >=9 && student_year <= 12) {
         printf("You're in Highschool");
     } else if(student_year > 12) {
         printf("You're in college");
     } else {
         printf("Bad data");
     }

     return 0;
}

/*Write a switch statement to select an operation based on the value of inventory . Increment total_paper by paper_order if inventory is 'B' or 'C' ; 
 increment total_ribbon by ribbon_order if inventory is 'E' , 'F' , or 'D' ; 
 increment total_label by label_order if inventory is 'A' or 'X' . Do nothing if inventory is 'M' . Display an error message if the value of inventory is 
 not one of these eight letters.*/ 

#include <stdio.h>

  int main() {
     char inventory;
     int total_paper = 1,paper_order = 3,total_ribbon = 4, ribbon_order = 5,total_label = 2,label_order = 8;


     printf("Enter an inventory: ");
     scanf("%c",&inventory);

     switch(inventory){
         case 'A':
         case 'X':
             total_label+=label_order;
             printf("%d",total_label);
             break;

         case 'B':
         case 'C':
             total_paper+=paper_order;
             printf("%d",total_paper);
             break;

         case 'E':
         case 'F':
         case 'D':
             total_ribbon+=ribbon_order;
             printf("%d",total_ribbon);
             break;

         case 'M':
             break;

         case 'inventory > G && inventory < M && inventory > X':
             printf("None of these options");
    } 

     return 0;
}

 /*Write an if statement that displays an acceptance message for an astronaut 
 candidate if the person’s weight is between the values of opt_min and opt_max*/

#include <stdio.h>

int main() {
     int weight,opt_min = 50, opt_max = 120;

     printf("Enter your weight in kilograms: ");
     scanf("%d",&weight);

     if(weight >= 50 && weight <= 120){
         printf("You are qualified to be an astronaut candidate!");
     } else {
         printf("You need to work on your weight");
     }

     return 0;
}

// Implement the flow diagram in Fig. 4.14 using a nested if structure. 

 #include <stdio.h>

 int main() {

     int age;

     printf("Enter your age: ");
     scanf("%d",&age);

     if(age > 59) {
         char work;

         printf("Enter 'W' if you're a working senior, if not, you're a retired senior");
         scanf("%c",&work);

         if(work == 'W'){
             printf("\nWorking Senior");
         } else {
             printf("\nRetired Senior");
         }
     } else if (age > 20){
         printf("Adult");
     } else if (age > 12) {
         printf("Teen");
     } else {
         printf("Child");
     }

     return 0;
}

 /*Keith’s Sheet Music needs a program to implement its music teacher’s discount policy. The program is to prompt the user to enter the purchase total 
 and to indicate whether the purchaser is a teacher. The store plans to give 
 each customer a printed receipt, so your program is to create a nicely formatted file called receipt.txt. Music teachers receive a 10% discount on their 
 sheet music purchases unless the purchase total is $100 or higher. In that 
 case, the discount is 12%. The discount calculation occurs before addition of 
 the 5% sales tax. Here are two sample output files—one for a teacher and one 
 for a nonteacher.*/

#include <stdio.h>

int main() {
     int amount,response_two;
     float purchase,discount,total_discount,sales_tax,total_amount;
     char response;

     printf("Welcome to Keith's Sheet Music! How may I help you?\n\n");
     printf("Press 1 = I would like to buy any music item\n");
     printf("Press 2 = No worries, I'm just window shopping\n\n\n");
     printf("Your response: ");
     scanf("%d",&response_two);

     if (response_two == 1){
         printf("Are you a music teacher?\n");
         printf("Y = Yes\n");
         printf("N = No\n\n");
         printf("Your response: ");
         scanf("%c",&response);

         switch(response){
             case 'Y':
                 printf("How much is your purchase?: ");
                 scanf("%f",&purchase);

                     if(purchase >= 100){
                         discount = purchase * 0.12;
                         total_discount = purchase - discount;
                         amount = purchase - total_discount;
                         sales_tax = total_discount * .05;
                         total_amount = total_discount + sales_tax;
                             printf("\nTotal purchases:        $%d", purchase);
                             printf("\nTeacher's discount 12%%  : %.2f",discount);
                             printf("\nDiscounted Total:   %.2f",total_discount);
                             printf("\nSales Tax (5%%) : %.2f",sales_tax);
                             printf("\nYour total is $%.2f",total_amount);
                             break;
                     } else {
                         discount = purchase * 0.10;
                         total_discount = purchase - discount;
                         amount = purchase - total_discount;
                         sales_tax = total_discount * .05;
                         total_amount = total_discount + sales_tax;
                             printf("\nTotal purchases:        $%.2f", purchase);
                             printf("\nTeacher's discount 10%%  : %.2f",discount);
                             printf("\nDiscounted Total:   %.2f",total_discount);
                             printf("\nSales Tax: (5%%) : %.2f",sales_tax);
                             printf("\nYour total is $%.2f",total_amount);
                             break;
                         }

                 case 'N':
                     printf("How much is your purchase Brother/Sister?: ");
                     scanf("%f",&purchase);

                     sales_tax = purchase * .05;
                     total_amount = purchase + sales_tax;

                     printf("Total purchases:  $%.2f\n",purchase);
                     printf("Sales tax (5%%) : %.2f\n",sales_tax);
                     printf("Total:          $%.2f",total_amount);
                     break;
             }

     } else {
         printf("Enjoy window shopping!");
     }  
     return 0;
}

 /*Write a program that calculates the user’s body mass index (BMI) and categrizes it as underweight, normal, overweight, or obese, based on the following 
 table from the United States Centers for Disease Control:

 To calculate BMI based on weight in pounds ( wt_lb ) and height in inches 
 ( ht_in ), use this formula (rounded to tenths): */


 #include <stdio.h>
 #include <math.h>

 int main(){
     float height,weight,bmi,wt_lb,ht_in; //weight in pounds && height in inches

     printf("Enter weight in kilograms: ");
     scanf("%f",&weight);

     printf("Enter height in feet: ");
     scanf("%f",&height);

     wt_lb = weight * 2.205; // 2.205 is constant in pounds
     ht_in = height * 12; //12 inches is contanst from foot to inches
     bmi = wt_lb / (ht_in*=ht_in);

     printf("Your bmi is %.2f\n",bmi);

     if(bmi < 18.5) {
         printf("Underweight");
     } else if (bmi >= 18.5 && bmi <= 24.9){
         printf("Normal");
     } else if (bmi >= 25.0 && bmi <= 24.9) {
         printf("Overweight");
     } else {
         printf("Obese");
     }

     return 0;
}
