#include <stdio.h>
int main() {
int n, i, largest = -1;
printf("Enter number: ");
scanf("%d", &n);
for (i = 2; i <= n; i++) {
if (n % i == 0) {  
int j, prime = 1;
for (j = 2; j <= i/2; j++) {
if (i % j == 0) {
prime = 0;
break;
}
}
if (prime == 1) {
largest = i;   
}
}
}
printf("Largest prime factor = %d\n", largest);
return 0;
}
