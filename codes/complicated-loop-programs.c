// Calculate the sum of the test scores of a class of 35 students. ( Hint: 
// Initialize sum to zero before entering loop.) 

#include <stdio.h>

int main() {
    int sum = 0;
    int i;
    for (i = 0; i < 35; i++) {
        int score;
        printf("Enter Score: ");
        scanf("%d", &score);
        sum += score;
    }
    printf("%d\n", sum);
    return 0;
}

/* Print weekly paychecks for a list of employees. The following data are to 
be entered interactively for each employee: ID, hours worked, and hourly 
pay rate. An ID of zero marks the end of the data. */

// Online C compiler to run C program online

#include <stdio.h>

int main() {
    int emp_id[4],days = 1,hours_work,pay_rate,net_income;
    
    printf("Enter your ID: ");
    gets(emp_id);
    
    printf("Enter how many working hours per day: ");
    scanf("%d",&hours_work);
    
    printf("Enter your income per hour in a day: ");
    scanf("%d",&pay_rate);
    
    while (days!=7) //1 week is equivalent to 7 days { 
        net_income = pay_rate * hours_work; // My pay_rate must be multiplied to the number of hours I work within a day
        // For example: I work 9 hours a day and within 1 hour, I earn 30 pesos so it will be 30 * 9 = 270 == 1 day;
        days++;
    }
    net_income*=days; // The current value of days == 7, thus net_income will be computed by the total of net_income multiplied by days
    
    printf("Employee ID: %s\n",emp_id);
    printf("My net income within 1 week is %d",net_income);
    
    return 0;
} 

/* Process a data file of Celsius temperatures. Count how many are above 
100°C. */

#include <stdio.h>

int main() {
    int celcius = 1, count = 0;
    
    while (celcius!=5) {
          printf("Enter celcius: ");
          scanf("%d",&celcius);
            if(celcius > 100) {
                count++;
            }
        celcius++;
    }
    
    printf("%d",count);
    
    return 0;
}

/* Write a program which prints this: 
 0 1 
 1 2 
 2 4 
 3 8 
 4 16 
 5 32 
 6 64 */

#include <stdio.h>

int main() {
    int i,j;

    for(i = 0; i<7;i++) {
        printf("\n");
        for(j = 1; j < 65; j = j*2) {
            printf("%d %d",i,j);
        }
    }
    return 0;
}
