#include <stdio.h>
int main() {
int n,i,j=0;
scanf("%d",&n);
int a[n];
for(i=0;i<n;i++) {
scanf("%d",&a[i]);
}
int b[n];
for(i=0;i<n;i++) {
if(a[i]!=0) {
b[j++]=a[i];
}
}
while(j<n) {
b[j++]=0;
}
for(i=0;i<n;i++) {
printf("%d ",b[i]);
}
return 0;
}
