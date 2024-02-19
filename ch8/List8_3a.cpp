#include <stdio.h>
#define ROW 2
#define COL 3
int main(void)
{
	int i, j;
	int **a; // declare pointer to pointer

	a = new int* [ROW]; //allocate a pointer array
	for ( i=0; i < ROW; i++ )
	{
		a[i] = new int[COL]; //allocate an int[COL] for
	}                      // each pointer a[i]

	for ( i=0; i < ROW; i++ ){
		for ( j=0; j < COL; j++ ){
			a[i][j] = i + j;
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
	
	// free the memory
	for ( i=0; i < ROW; i++ ){
		delete [] a[i];
	}
	delete [] a;
	return 0;
}

