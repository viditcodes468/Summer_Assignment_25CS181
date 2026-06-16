#include <stdio.h>
int main() {
int a, b, vidit;
printf("Enter two numbers: ");
scanf("%d %d", &a, &b);
while (b != 0) {
vidit = b;b = a % b;
a = vidit;}
printf("GCD = %d", a);
return 0;
}
