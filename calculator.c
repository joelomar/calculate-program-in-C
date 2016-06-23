#include <stdio.h>
#include <conio.h>

int main() {

  int firtsNum;
  int secNum;
  int results;
  char operator;


  printf("Insert your first number \n");
  scanf(" %d", &firtsNum);

  printf("Insert your math operator \n");
  scanf(" %c", &operator);

  printf("Insert your second number \n");
  scanf(" %d", &secNum);


  switch(operator) {

     case '-':
     results = firtsNum-secNum;
     printf("Your results is: %d \n", results);
     break;

     case '+':
     results = firtsNum+secNum;
     printf("Your results is:  %d \n", results);
     break;

     case '/':
     results = firtsNum/secNum;
     printf("Your results is:  %d \n", results);
     break;

     case '*':
     results = firtsNum*secNum;
     printf("Your results is:  %d \n", results);
     break;

     default:
     printf("error calculating");

     }

    printf("Press any key to kill the program  \n");
    getch();

    return 0;

}