
#include <stdio.h>
#include <readline/readline.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
  char *Grade = readline("Enter your CMPSC 131 grade: ");
  double grade;
  grade = atof(Grade);
  if (grade >= 93.0) {
  printf("Your letter grade for CMPSC 131 is A.\n");
  }
  if (93.0 > grade >= 90.0) {
  printf("Your letter grade for CMPSC 131 is A-.\n");
  }
  if (90.0 > grade >= 87.0) {
  printf("Your letter grade for CMPSC 131 is B.\n");
  }
  if (87.0 > grade >= 83.0) {
  printf("Your letter grade for CMPSC 131 is B+.\n");
  }
  if (80.0 > grade >= 80.0) {
  printf("Your letter grade for CMPSC 131 is B-.\n");
  }
  if (80.0 > grade >= 77.0) {
  printf("Your letter grade for CMPSC 131 is C+.\n");
  }
  if (77.0 > grade >= 70.0) {
  printf("Your letter grade for CMPSC 131 is C.\n");
  }
  if (70.0 > grade >= 60.0) {
  printf("Your letter grade for CMPSC 131 is D.\n");
  }
  if (grade < 60.0) {
  printf("Your letter grade for CMPSC 131 is F.\n");
  }
  return 0;
}