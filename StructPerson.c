#include <stdio.h>
#include <string.h>

struct Person {
  char name[50];
  int citNo;
  float salary;
} person1;

int main() {

  // assign value to name of person1
  strcpy(person1.name, "Akshata Nilure");

  // assign values to other person1 variables
  person1.citNo = 2005;
  person1. salary = 250000;

  // print struct variables
  printf("Name: %s\n", person1.name);
  printf("Citizenship No.: %d\n", person1.citNo);
  printf("Salary: %.2f", person1.salary);

  return 0;
}
