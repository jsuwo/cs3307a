#include <stdio.h>
#include <string.h>

main()
{
  char first_name[80];
  char last_name[80];
  char full_name[159];

  printf("First Name : ");
  fgets(first_name, 80, stdin);

  printf("Last Name : ");
  fgets(last_name, 80, stdin);

  strncpy(full_name, first_name, strlen(first_name) - 1);
  strcat(full_name, " ");
  strncat(full_name, last_name, strlen(last_name) - 1);

  printf("Your full name is %s\n", full_name);
}
