#include <stdio.h>

int main(void)
{
	int a = 2; /* a is basically giving a value of that memory*/
	int *pA;
	pA = &a;/*pA naming convention*/
	char z = 'z';/* declaring a variable*/
	char *pZ;/* pZ naming convention*/
	pZ = &z;

	printf ("%p\n",pZ);
	printf ("%p\n",&z);/* prints memory address of z*/
	printf ("%p\n",pA);
	printf ("%p\n",&a);/* memory address of 2*/	
	/*printf ("%li\n",sizeof(p));just a Pointer*/ 
	/*printf ("%li\n",sizeof(*p));Dereferencing a pointer*/
	/*printf ("%li\n",sizeof(**p));*/ 
	
	
}
