#include <stdio.h>
#include <conio.h>

int main() {

  int firtsNum;
  int secNum;
  int results;
  char opt;


  printf("Insert your first number \a \n");
  scanf(" %d", &firtsNum);

  printf("Insert your math operator \a \n");
  scanf(" %c", &opt);

  printf("Insert your second number \a \n");
  scanf(" %d", &secNum);


if (opt == '-') {

      results = firtsNum-secNum;
      printf("Your results is: %d \a \n", results);
}
if (opt == '+') {

      results = firtsNum+secNum;
      printf("Your results is: %d \a \n", results);
}
if (opt == '/') {

      results = firtsNum/secNum;
      printf("Your results is: %d \a \n", results);
}
if (opt == '*') {

      results = firtsNum*secNum;
      printf("Your results is: %d \a \n", results);
}

    printf("Press any key to kill the program  \n");
    getch();

    return 0;

}
