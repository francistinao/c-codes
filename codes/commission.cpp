#include <iostream>
#include <ctype.h>
#include <iomanip>

using namespace std;

void user_prompt(float dc_voltage, float res1, float res2, int connector) {

  int total_res;
  float total_current, volt_res1, volt_res2,i_res1,i_res2;

  // Prompts the user to input value for dc voltage
  cout << "DC Voltage source: ";
  cin >> dc_voltage;

  // Prompts the user to input value for the first resistor
  cout << "R1: ";
  cin >> res1;

  // Prompts the user to input value for the second resistor
  cout << "R2: ";
  cin >> res2;

  // Prompts the user to choose whether he/she wants to calculate the resistors
  // in series of parallel
  cout << "Connection (1 = series or 2 = parallel): ";
  cin >> connector;
 
  //TEST CASES
    //First case if user inputs character in parameter list using isdigit function
     if (!isdigit(dc_voltage)) { 
        cout << "\n\nInvalid input!\n";
    } else if (!isdigit(res1)) {
        cout << "\n\nInvalid input!\n";
    } else if (!isdigit(res2)) {
        cout << "\n\nInvalid input!\n";
    }
  //Second case if the user inputs a negative resistance
  if(res1 < 0 || res2 < 0) {
        cout << "Invalid input";
  } else if (dc_voltage > 0 && res1 > 0 && res2 > 0 && connector == 1) { // Third case if the user inputs a valid input and chooses the calculation of all variables via series circuit
        total_res = res1 + res2; //total resistance is equivalent to the sum of the value of the first and second resistance
        total_current = dc_voltage / total_res; //total current will be given the value right after the voltage inputted divided by the total resistance
        volt_res1 = dc_voltage * res1 / (res1 + res2); //voltage for resistance 1 will be the inputted voltage multiplied by the first resistance divided by the sum of first and second resistance
        volt_res2 = dc_voltage * res2 / (res1 + res2); //same as voltage of the first resistance but swapped
        i_res1 = total_current; // basically i_res1 and i_res2 will have the same value and its value is the value of total_current;
        i_res2 = i_res1;
        cout << "\n\nTotal resistance: " << total_res << " ohms\n";
        cout << "Total current: " << setprecision(3) << total_current << " amperes\n";
        cout << "V_R1: " << volt_res1 << " volts\n";
        cout << "V_R2: " << volt_res2 << " volts\n";
        cout << "I_R1: " << i_res1 << " amperes\n";
        cout << "I_R2: " << i_res2 << " amperes";
  } else if (res1 == 0 || res2 == 0) { // Fourth case if the user inputs 0 resistance for series circuit
      if(res1 > res2) {
          total_res = res1;
          total_current = dc_voltage / res1;
          volt_res1 = dc_voltage;
          i_res1 = total_current;
          cout << "Total resistance: " << total_res;
          cout << "\nTotal current : " << setprecision(1) << total_current;
          cout << "\nV_R1: " << total_res;
          cout << "\nI_R1: " << i_res1;
      } else if (res2 > res1) {
          total_res = res2;
          total_current = dc_voltage / res2;
          volt_res2 = dc_voltage;
          i_res2 = total_current;
          cout << "Total resistance: " << total_res;
          cout << "\nTotal current : " << setprecision(1) << total_current;
          cout << "\nV_R2: " << total_res;
          cout << "\nI_R2: " << i_res2;
        }
    //Fifth case if user inputs a 0 resistance in a parallel circuit
    } else if (res1 <= 0 || res2 <=0) {
      if (connector == 2) {
          cout << "Invalid resistor value!";
      }
} 
}

int main() {
  float dc_voltage, res1, res2;
  int connector; // declared variables for user in d:c voltage which supplies in
                 // volts, two resistor values == res1 && res2, and to evualute
                 // which connectors the user choose

  user_prompt(dc_voltage, res1, res2, connector);
}
