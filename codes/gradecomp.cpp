/*A C++ program that computes the grade of the student and tells if he/she passed the semester, otherwise false
by using if-else statements*/

#include <stdio.h>

using namespace std;

int main () {
    double firstScore, secondScore, thirdScore; //values for the 3 quizzes
    double totalQuiz, aveQuiz; 
    float proj, aveProj, finalExam, aveFinalExam, finalGrade;

    printf("Take note: 3 Quizzes = 20\n\nNumber of Items: \n Quiz: 1 = 20\nQuiz 2 = 30\n Quiz 3 = 50\n Total: 100 Items\n\n Project == 30%\n Perfect Score: 50 \n\n Major Exam=50%\nPerfect Score: 50"); //Criteria for the grading system

    //This is where the user inputs his scores of the 3 quizzes
    printf("\nEnter first score: ");
    scanf("%lf",&firstScore);

    printf("\nEnter second score: ");
    scanf("%lf",&secondScore);
    
    printf("\nEnter third score: ");
    scanf("%lf",&thirdScore);

    totalQuiz = firstScore + secondScore + thirdScore; //Formula for the sum of the 3 quizzes
    aveQuiz = totalQuiz * .20/100*100;

    printf("\nYour average grade from the 3 quizzes is: %lf",aveQuiz);

    //Inputs project score from the user
    printf("\nEnter your score in project: ");
    scanf("%f",&proj);

    aveProj = proj * .30/50*100;
    printf("\nYour average in project is: %f",aveProj);

    printf("\nEnter your score in Final Exam: ");
    scanf("%f",&finalExam);

    aveFinalExam = finalExam * .50/50*100;
    printf("\nYour average in Final Exam is: %f",aveFinalExam);

    finalGrade = aveQuiz+aveProj+aveFinalExam;
    printf("\nYour final grade is: %f",finalGrade);

        if(finalGrade>=75){
            printf("\nYou passed!");
        } else if (finalGrade==100){
            printf("\nHoly Cow! You got a perfect grade");
        } else {
            printf("\nBetter luck next time!");
        }

    return 0;
}