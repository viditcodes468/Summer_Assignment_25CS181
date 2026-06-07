#include <stdio.h>
int main() {
    int a, b, vidit, arjun;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    vidit = a;
    arjun = b;

    while(vidit != arjun) {
        if(vidit < arjun)
            vidit += a;
        else
            arjun += b;
    }

    printf("LCM = %d", vidit);
    return 0;
}
