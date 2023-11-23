#include <stdio.h>
#include <stdlib.h>
int multiply(int num1, int num2) {
return num1 * num2;
}
int is_positive_integer(const char *str) {
while (*str) {
if (*str < '0' || *str > '9') {
return 0;
}
str++;
}
return 1;
}
int main(int argc, char *argv[]) {
if (argc != 3) {
printf("Error\n");
return 98;
}
char *num1_str = argv[1];
char *num2_str = argv[2];
if (!(is_positive_integer(num1_str) && is_positive_integer(num2_str))) {
printf("Error\n");
return 98;
}
int num1 = atoi(num1_str);
int num2 = atoi(num2_str);
printf("%d\n", multiply(num1, num2));
return 0;
}
