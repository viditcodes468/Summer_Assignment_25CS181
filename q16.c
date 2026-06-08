#include <stdio.h>
int main() {
int start, end, num, vidit, r, sum;
printf("Enter start of range");
scanf("%d", &start);
printf("Enter end of range");
scanf("%d", &end);
printf("Armstrong numbers between %d and %d are ", start, end);
for(num = start; num <= end; num++) {
vidit = num;
sum = 0;
while(vidit > 0) {
r = vidit % 10;         
sum = sum + (r * r * r); 
vidit = vidit / 10;   
}
if(sum == num)
printf("%d ", num);
}
return 0;
}
