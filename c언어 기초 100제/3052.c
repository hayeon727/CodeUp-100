#include <stdio.h>

int main() {
  int num[10];
  int div[42];

  for (int i = 0; i < 10; i++) {
    scanf("%d", &num[i]);
  }

  for (int i = 0; i < 42; i ++) {
    div[i] = 0;
  }
  for (int i = 0; i < 10; i++) {
    int buf;
    buf = num[i] % 42; // 5 % 42 => 5
    div[buf]++;
  }

  int cnt = 0;
  for (int i = 0; i < 42; i++) {
    if (div[i] >= 1) {
      cnt++;
    }
  }
  printf("%d", cnt);
  
  return 0;
}