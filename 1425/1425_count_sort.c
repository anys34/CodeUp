#include <stdio.h>

int main(void) {
  int n,c,boolean = 0,a;
  int counts[300]={};
  int sorted[300]={};
  scanf("%d %d",&n,&c);
  for(int i = 1;i <= n;i++) {
    scanf("%d",&a);
    counts[a] = a;
    sorted[a] += 1; 
  }
  for(int i = 100;i <= 300;i++){
    while(sorted[i] != 0){ 
      boolean ++;

      printf("%d ",counts[i]);
      if(boolean % c == 0) {
        printf("\n");
      }
      sorted[i] --;
    }
    if (boolean == n) break;
  }
  return 0;
}