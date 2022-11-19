#include <stdio.h>

int main(void) {
  int t, n, x, y, z, count=0, i, j, a, b, c;
  scanf("%d", &t);
  while (t--){
    scanf("%d",&x);
    while(x){
      i=(x%10);
      if(i==4)
        count++;
      x/=10;
    }
    printf("%d\n",count);
  }
  return 0;
}
