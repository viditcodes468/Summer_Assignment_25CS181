#include <stdio.h>
int main() {
int a[100], n, i, x, flag=0;
printf("Enter size: ");
scanf("%d", &n);
printf("Enter elements:");
for(i=0; i<n; i++) {
scanf("%d", &a[i]);
}
printf("Enter element to search: ");
scanf("%d", &x);
for(i=0; i<n; i++) {
if(a[i] == x) {
printf("Found at position %d", i+1);
flag = 1;
break;
}
}

if(flag == 0) {
printf("Not found");
}
return 0;
}
