#include <stdio.h>
#include <stdlib.h>

int main()
{
	int N, H;
	scanf("%d %d", &N, &H);
	int alturas[N];
	int count = 0;

	for (int i = 0; i < N; i++)
	{
		scanf("%d", &alturas[i]);
		if (H >= alturas[i])
		       count += 1;	
	}

	printf("%d", count);


	return 0;
}
