#include <stdio.h>
int main() {
int n, rev = 0, dig, vidit;
printf("Enter number: ");
scanf("%d", &n);
vidit = n;
while(n > 0) {
dig = n % 10;
rev = rev * 10 + dig;
n = n / 10;
}
if(vidit == rev)
printf("Palindrome");
else
printf("Not Palindrome");
return 0;
}
