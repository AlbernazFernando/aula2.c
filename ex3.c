#include <stdio.h>

int main() {
  float a, b, c;

  printf("digite quantas maças comprou: ");
  scanf("%f", &c);
  if ( c < 12 ) {
    b = c * 1.3; 
    printf("%.2f", b);
  }
  else if ( c >= 12 ) {
    b = c * 1;
    printf("%.2f", b);
  }
  return 0;
}
