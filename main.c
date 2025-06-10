// Copyright 2025 <Stanbreaks>
#include <stdio.h>
#include <stdlib.h>
int main() {
  char input[100];
  if (scanf("%s", input) != 1) {
    printf("Failed to get input");
    return 0;
  }
  char *endptr;
  long num = strtol(input, &endptr, 10);
  printf("%ld\n", num);
  printf("%d", endptr);
}
