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

#include <stdio.h> //Include standard input output header file

/*Declarations*/
void user_input(float[]);
void response(float);

int main(){
  float inputArray[10];
  int i;
  float num = 0;

  user_input(inputArray); //Get 10 numbers and put them into inputArray
  //printf("%f", inputArray[0]); //Comment or uncomment for array debug
  for (i = 0; i < 10; i++)
    num += inputArray[i];
  num = num / 10;
  response(num);

  return 0;
}

void user_input(float inputNums[]){
  int i = 0;
  printf("Please enter your grades in the format nnn.nn: \n");
  for (i = 0; i < 10; i++){
    scanf("%f", &inputNums[i]);
  }
}

void response(float num){
  printf("The average of the 10 numbers you put in, is: %f \n", num);
}
