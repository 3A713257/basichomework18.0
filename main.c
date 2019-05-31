// basic homework 18 (3A713257)
#include <stdio.h>
#include<stdlib.h>

int main() {
    int number = 0, i;
    printf("Please enter an integer:");
    scanf("%d", &number);
    int array[10] = {};
    while(number) {
        array[number % 10]++;  
        number /= 10;
    }
    for (i = 0; i < 10; i++) {
        if (array[i] != 0)
        printf ("%d=%d\n", i, array[i]);
	}
    system ("pause");
    return 0;
}
