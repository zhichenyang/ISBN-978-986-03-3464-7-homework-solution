//寫一個程式讀入一個正整數。
//如果該整數為 3 的倍數但不為 5 的倍數則輸出 1，
//或是為 5 的倍數但不為 3 的倍數則輸出 1。
//其他狀況則輸出 0 。
//例如如果輸入為 36 或 20，則輸出為 1。
//如果輸入為 30 或 7，則輸出為 0。

#include <stdio.h>
main()
{
  int i, k;
  scanf("%d", &i);
  k = (i % (3 * 5) != 0) && ((i % 3 == 0) || (i % 5 == 0));
  printf("%d\n", k);
}