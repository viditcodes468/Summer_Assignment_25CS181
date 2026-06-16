#include <stdio.h>
int main() {
int n, vidit, rem , sum = 0, fact, i;
printf("Enter number: ");
scanf("%d", &n);
vidit = n;
while (n > 0) {
rem = n % 10;   
fact = 1;
for (i = 1; i <= rem; i++) {
fact = fact * i;
}
sum = sum + fact;  
n = n / 10;        
}
if (sum == vidit)
printf("Strong number\n");
else
printf("Not strong\n");
return 0;
}
