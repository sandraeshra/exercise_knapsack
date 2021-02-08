#include "function1.h"
// A utility function that returns maximum  of two integers
int max(int a, int b) { return (a > b) ? a : b; }

int knapsack(int W, int wt[], int val[], int n)
{
	if (n == 0 || W == 0)
		return 0;

	// IF weight  of the nth term is more than Knapsack capacity W	
	//then this item cannot be included in the optimal solution

	if(wt[n-1] > W)
		return knapsack(W, wt, val, n-1);
	//Return the maximum of two classes:
	//(1) nth term item included
	//(2) not included
	else
		return max(val[ n -1 ] + knapsack(W - wt[n-1], wt, val, n-1),
		 	knapsack(W, wt, val, n-1));
}


