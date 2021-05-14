#include <stdio.h>
#include <limits.h>

// 10개의 숫자가 입력될 때
// 최대값과 최소값을 구하시오

int main() {
  int num[10];
  int Min_num = INT_MAX, Max_num = INT_MIN;

  for (int i = 0; i < 10; i++) {
    scanf("%d", &num[i]);
  }

  for (int i = 0; i < 10; i++) {
    //if (Max_num < num[i]) {
    //  Max_num = num[i];
    // }

    Max_num = (Max_num < num[i]) ? num[i] : Max_num;
    //if (Max_num > num[i]) {
    //  Min_num = num[i];
    //}
    Min_num = (Min_num > num[i]) ? num[i] : Min_num;
  }

  printf("최대값은 %d입니다.\n", Max_num);
  printf("최소값은 %d입니다.\n", Min_num);
  return 0;
}