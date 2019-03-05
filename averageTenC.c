/*
Prompt:
Write a program to get 10 numbers from the user, you should then average the
10 grades about output the average.

Specifications:

The user input must be done in a function called user_input().
The output should be done in a function called response().
The user should be able to continue run the program until the enter the letter
Q. All input and averaging of the numbers must be done using a loop.

-------------------------------------------------------------------------------

Written for my Programming in C class.

Written by: Austin Garrett (MetaRollover)
Date: 3/5/2019
*/

/*THIS IS NOT YET FINISHED*/

#include <stdio.h> //Include standard input output header file

/*Declarations*/
float * user_input();
int response(num);

int main(){
  float *inputArray;
  int i;
  float num;

  inputArray = user_input(); //Get 10 numbers and put them into inputArray
  for (i = 0; i < 10; i++)
    num += num + inputArray[i];
  num += num / 10;
  response(num);

  return 0;
}

float * user_input(){
  static int inputNums[10];
  printf("Please enter your grades in the format nnn.nn:");
  int i = 0;
  for (i = 0; i < 10; i++){
    scanf("%f", &inputNums[i]);
  }
}

int response(num){
  printf("The average of the 10 numbers you put in, is: %f", &num);
}
