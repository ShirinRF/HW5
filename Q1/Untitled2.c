#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
struct info {
	char name[50];
	int hour;
	int minute;
	char sign;
};
struct comp{
	int comphour;
	int compminute;
};
struct counting{
	int count_h;
	int count_m;
};

int largest(int arr[], int n){ 
	int i; 
	int max = arr[0]; 
	for (i = 1; i < n; i++) 
		if (arr[i] > max) 
			max = arr[i]; 

	return max; 
} 

int main(){
	int i,j,n,c,locationh=0,maxh=0;
	scanf("%d",&n);
	struct info input[2*n];
	struct comp compare[2*n];
	struct counting count[2*n];
	for (i = 0; i < 2*n; i++){
    	scanf("%s %d:%d %c",input[i].name,&input[i].hour,&input[i].minute,&input[i].sign);
	}
	for (i = 0; i < 2*n; i++){
		compare[i].comphour=input[i].hour;
		compare[i].compminute=input[i].minute;
	}
	for (i=0;i<2*n;i++){
		count[i].count_h=0;
	}
	for (i=0;i<2*n;i++){
			if (input[i].hour==compare[i].comphour && input[i].sign=='+'){
				count[i].count_h++;
			}
	}
		maxh=count[0].count_h;
		for (i=0;i<2*n;i++){
			if (maxh<count[i].count_h){
				maxh=count[i].count_h;
				j=i;
			}
		}
	}


