#include "main.h"
/**
 *reverse_array - reverse the writen array
 *@a: array being reversed
 *@n:number of arry being reversed
 *Return:array
*/

void reverse_array(int *a, int n)
{
	int i;
	int t;

	for (i = 0; i < n--; i++)
	{
		t = a[i];
		a[i] = a[n];
		a[n] = t;
	}
}
