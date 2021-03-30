#include <stdio.h>
#include <math.h>


int main (int argc, char * argv [ ]){
	int a, b, kor, dob, dif;

       printf("Введіть число a: ");
       scanf("%d",&a );
       printf("Введіть число b: ");
       scanf("%d",&b );

	kor = sqrt (a);
	dob =  2  *  (a + b);
	dif = a  -  (3 * b);
  
        printf("\n***Результат***\n");
	printf("1 = %d\n2 = %d\n3 = %d\n", kor, dob, dif);

	return 0;
  }
