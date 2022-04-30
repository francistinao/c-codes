#include <stdio.h>
//C online compiler
float aver_of_scores(int sum,int i,int count){
    float ave;
        ave = sum / count;

        return ave;
}

int main() {
    int id[20],i,scores[5],count = 3;
    char stud_name[20];
    int sum = 0,result = 0;
    float ave;

    printf("Enter ID: ");
    gets(id);

    printf("\nEnter Name: ");
    gets(stud_name);
    
    for(i = 0; i < count; i++) {
        printf("\nEnter scores: ");
        scanf("%d",&scores[i]);
        
        sum+=scores[i];
    }
    result = sum;
    
    printf("------RESULT-----");
    printf("\nID:");
    puts(id);
    printf("Name: ");
    puts(stud_name);
    
    for(i = 0; i < 1; i++){
        printf("Physics: %d",scores[0]);
        printf("\nComputer: %d",scores[1]);
        printf("\nChemistry: %d",scores[2]);
    }
    
    printf("\nSum: %d",result);
    ave = aver_of_scores(sum,i,count);
    printf("\nAverage: %.2f%%",ave);
    
}
