#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
int main(){
	int i,key;
	char pt[2500],ct[2500];
	gets(pt);
	key = 'S'-pt[0] ;
	for(i=0;i<strlen(pt);i++){
		if(pt[i]>=65&&pt[i]<=90){
		ct[i]=((((pt[i]-65))+key)%26)+65;
		if (ct[i]<65){
			ct[i]=91+((((pt[i]-65))+key)%26);
		}
	}
	else if(pt[i]>=97&&pt[i]<=122){
		ct[i]=((((pt[i]-97))+key)%26)+97;
		if (ct[i]<97){
			ct[i]=123+((((pt[i]-97))+key)%26);
		}
	}
	else {
		ct[i]=pt[i];
	}
}
	ct[i]='\0';
	puts(ct);
}

