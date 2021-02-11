#include <stdio.h>  
#include <stdlib.h>
#include <math.h>
long long int find(long long int n, long long int k) { 
	long long int sum = 0, i; 
	for (i = 2; i <= n; i++) 
		sum = (sum + k) % i; 

	return sum + 1; 
} 
int main(){
	int n,k; 
	scanf("%d %d",&n,&k);
	printf("%d",find(n-1, k+1));
	return 0; 
} 

