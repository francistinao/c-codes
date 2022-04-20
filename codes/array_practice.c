// Write a program in C to store elements in an array and print it. Go to the editor
// Test Data :
// Input 10 elements in the array :
// element - 0 : 1
// element - 1 : 1
// element - 2 : 2
// .......
// Expected Output :
// Elements in array are: 1 1 2 3 4 5 6 7 8 9

 #include <stdio.h>
 int main(){
     int numbers[10];

     for(int i = 0; i<=10; i++){
         printf("element - %d : ", i);    //Prints the index of the array
         scanf("%d", &numbers[i]);     //Stores the input in the array
     }
    
     for (int i = 0; i<=10; i++){
         printf("%d ", numbers[i]);     //Prints the array
     }

     return 0;
 }

// Write a program in C to read n number of values in an array and display it in reverse order. Go to the editor
// Test Data :
// Input the number of elements to store in the array :3
// Input 3 number of elements in the array :
// element - 0 : 2
// element - 1 : 5
// element - 2 : 7
// Expected Output :
// The values store into the array are :
// 2 5 7
// The values store into the array in reverse are :
// 7 5 2

 #include <stdio.h>

 int main(){
     int numbers[4],i,complete_arr[4];

     for(i = 1; i <=3; i++){
         printf("Enter number for index %d : ",numbers[i]);
         scanf("%d", &numbers[i]);
     }
  
     for (i = 1; i <=3; i++){
         complete_arr[i] = numbers[i];
     }
     printf("The numbers stored in the array are: %d %d %d \n", complete_arr[1], complete_arr[2], complete_arr[3]);
     printf("The reversed numbers stored in the array are: %d %d %d", complete_arr[3], complete_arr[2], complete_arr[1]);

     return 0;
 }

// Write a program in C to find the sum of all elements of the array. Go to the editor
// Test Data :
// Input the number of elements to be stored in the array :3
// Input 3 elements in the array :
// element - 0 : 2
// element - 1 : 5
// element - 2 : 8
// Expected Output :
// Sum of all elements stored in the array is : 

 #include <stdio.h>

 int main(){
     int numbers[3],i,sum = 0;

     for (i = 1; i <=3; i++){
         printf("Enter number for index %d: ",i);
         scanf("%d", &numbers[i]);
         sum+=numbers[i];
    }

    printf("The sum of numbers are: %d", sum);


     return 0; 
 }

