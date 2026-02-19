#include <stdio.h>

int main() {
  int N;
  int size[6];
  int T, P;
  int Shirt_Bundle = 0;
  int Pen_Bundle1, Pen_Bundle2;

  scanf("%d", &N);
  scanf("%d %d %d %d %d %d", &size[0], &size[1], &size[2], &size[3], &size[4],
        &size[5]);
  scanf("%d %d", &T, &P);

  // Shirt Bundles
  for (int i = 0; i < 6; i++) {
    Shirt_Bundle += (size[i] / T);
    if (size[i] % T > 0)
      Shirt_Bundle++;
  }

  // Pen Bundles
  Pen_Bundle1 = N / P;
  Pen_Bundle2 = N % P;

  printf("%d\n%d %d", Shirt_Bundle, Pen_Bundle1, Pen_Bundle2);
}