#include <stdio.h>
int main() {
int n, r, sum = 0, vidit;
printf("Enter a number: ");
scanf("%d", &n);
vidit = n;   
while(n > 0) {
r = n % 10;        
sum = sum + (r * r * r);
n = n / 10;              
}
if(vidit == sum)
printf("Armstrong number");
else
printf("Not Armstrong number");
return 0;
}
