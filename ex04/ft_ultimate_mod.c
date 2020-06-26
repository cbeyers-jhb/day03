#include <stdio.h>
void ft_ultimate_div_mod(int *a, int *b); 
{
    
    int store = *a;
    
    *a = *a / *b;
    *b = store % *b;
}
/*
int main()
{
        int A = 20;
	int B = 4; 
    
	int *a;
	int *b;

	a = &A;
    b = &B;

	ft_ultimate_div_mod(&A, &B);
	printf("division is: ");
	printf("%d\n", A);
	printf("remainder is: ");
	printf("%d\n", B);
	return 0;
}
*/
