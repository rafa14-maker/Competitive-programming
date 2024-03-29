// Efficient C++ program to find smallest
// derangement.
#include <stdio.h>

void generate_derangement(int N)
{
	// Generate Sequence S
	int S[N + 1];
	for (int i = 1; i <= N; i++)
		S[i] = i;

	// Generate Derangement
	int D[N + 1];
	for (int i = 1; i <= N; i += 2) {
		if (i == N) {

			// Only if i is odd
			// Swap S[N-1] and S[N]
			D[N] = S[N - 1];
			D[N - 1] = S[N];
		}
		else {
			D[i] = i + 1;
			D[i + 1] = i;
		}
	}

	// Print Derangement
	for (int i = 1; i <= N; i++)
		printf("%d ", D[i]);
	printf("\n");
}

// Driver Program
int main()
{
	generate_derangement(10);
	return 0;
}
