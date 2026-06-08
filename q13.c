#include <stdio.h>
int main() {
int n, i;
int a = 0, b = 1, c;
printf("enter the number ");
scanf("%d", &n);
printf("FS");
for(i = 1; i <= n; i++) {
printf("%d ", a);
c = a + b;
a = b;
b = c;}
return 0;
}
