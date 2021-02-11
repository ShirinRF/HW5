#include <string.h>
#include <stdio.h>
#include <stdlib.h>
int main() {
    int count=0,add=0,finall=0,n,i,j,k,m=0,flag=0;
    char c,ceach;
    char search[51];
    char s[1000][51];
    gets(search);
    scanf("%d",&n);
    getchar();
    for (i=0;i<n;i++){
      gets(s[i]);
  	}
  for (i=0;i<n;i++){
        flag=0;
        add=0;
    for (k=0;k<strlen(search);k++){
      for (j=flag;j<strlen(s[i]);j++){
        if (s[i][j]==search[k]){
          add++;
          flag=j+1;
          j=strlen(s[i]);
        }
      }
    }
    if (add>=strlen(search)){
      finall++;
    }
  }
    printf("%d",finall);
}
