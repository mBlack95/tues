/*
TUES http://www.elsys-bg.org/
11б
N.10
Георги Миленов Цанев
Да се разработи програма, която изисква от потребителя да въведе целочислено число x, където 0<x<10. Да се инициализира масив от 10 елемента. Да се намери първото число N в интервала [0; +∞) делящо се на х. Да се намери сумата на всички числа в интервала [0; N] и да се запише като първи елемент в масива. Да се намери второто число N' в интервала [0; +∞) делящо се на x. Да се намери сумата на всички числа в интервала [0, N'] и да се запише като втори елемент в масива. Аналогично да се запълнят и останалите елементи на масива. Масивът да се изведе на стандартния изход.
*/

#include<stdio.h>

int main() {
	int x, n, i, c, z, arr[10];
	while ((x<=0) || (x>=10)) {
	printf("Vavedete x: ");	
	scanf("%d", &x);
	}

	i=0;
	n=0;
	c=0;
	while(i<10) {
		if (n%x == 0) {
			printf("%d ", n);
			for (z=0; z<=n; z++) c = z + c;
			arr[i] = c;
			n++;
			i++;
		}
		else n++;			 
	}

	printf("\n");
	for(i=0; i<10; i++){
		printf("%d ", arr[i]);
	}
	printf("\n");
}
