#include <stdio.h>
#include <string.h>
#include <limits.h>
#include <float.h>
#define PRAISE "You are an extraordinary being"

void show_define() {
  printf("Biggest int: %d\n", INT_MAX);
  printf("Smallest long long %lld\n", LLONG_MIN);
  printf("One byte = %d bits on this system.\n", CHAR_BIT);
  printf("Largest double: %e\n", DBL_MAX);
  printf("Smallest normal float is : %f\n", FLT_MIN);
  printf("float precision = %d digits\n", FLT_DIG);
  printf("float epsilon = %e \n", FLT_EPSILON);
}

int main(void) {
  char name[40];
  printf("What's your name?\n");
  scanf("%s", name);
  printf("Hello, %s. %s.\n", name, PRAISE);
  printf("Your name of %zd letters occupies %zd memory cells\n", strlen(name), sizeof name);
  printf("The phrase of praice has %zd letters, ", strlen(PRAISE));
  printf("and occupies %zd memory cells.\n", sizeof PRAISE);

  show_define();
  return 0;
}

