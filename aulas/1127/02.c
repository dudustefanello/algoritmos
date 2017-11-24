#include <stdio.h>
#include <stdlib.h>

int main(){
int *v;
int n, i;
scanf ("%d", &n);
v = (int *)malloc (n * sizeof (int));
for (i = 0; i < n; ++i)
	scanf ("%d", &v[i]);
for (i = n; i > 0; --i)
	printf ("%d ", v[i-1]);
free (v);
}