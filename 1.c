#include <stdio.h>
#include <math.h>


int main () {
	int a, b, dob, dif;
    	float kor;

    	printf("Введіть число a: ");
    	scanf("%d",&a );
    	printf("Введіть число b: ");
    	scanf("%d",&b );

	kor = pow(a, 0.33);
	dob = 2  *  (a + b);
	dif = a  -  (3 * b);
  
   	printf("\n***Результат***\n");
	printf("1 = %.0f\n2 = %d\n3 = %d\n", kor, dob, dif);

	return 0;
  }
