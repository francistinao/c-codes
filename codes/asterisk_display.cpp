/*C++ program that will display asterisk in the following format

*
**
***
****
*****
*/

#include <stdio.h>

using namespace std;
int main() {
   char asterisk = '*';

    //Since we are using nested for loop there are 2 loops
    //First the for loop i
    //Second the for loop j
   for (int i = 1; i <= 5; i++) {        //Initialize i = 1; starting point = 1 up to 5 since i<=5 then i increment
       for (int j = 0; j < i; j++) {     //In this loop, the printing of pyramid asterisk will happen;
           printf("%c",asterisk);        //The printing process of asterisk will end if j is not less than i which is 5 
       }
       printf("\n");                      //After each increment, the printing of new line will follow
   }
   return 0;

}