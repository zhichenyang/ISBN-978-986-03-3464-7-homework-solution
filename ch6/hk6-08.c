//寫一個程式來計算一個城市內特定型態道路交叉點的數量。一個城市的
//道路記錄在一個 n 乘 m 的整數陣列中。當陣列的元素為 1 。則代表該
//處是道路；當陣列的元素為 0 。則代表該處不是道路。
//如果一段道路的上下左右四個鄰居都是道路，則稱為「十字路口」
//如果一段道路的四個鄰居中有三個是道路，則稱為「丁字路口」
//如果一段道路的四個鄰居中有兩個非相對鄰居市道路，則稱為「轉彎路口」
//如果一段道路的四個鄰居中只有一個鄰居是道路，則稱為「死向」

//輸入的第一行為城市的長度 n 與寬度 m 。以下 n 行每一行有 m 個數字，
//代表該位置是否為道路。輸出為「十字路口」、「丁字路口」、「轉彎路
//口」及死巷的數目。
//參數規範: 0 < n <= 100, 0 < m <= 100

#include <stdio.h>
main()
{
  int n, m, a[102][102] = {0};
  int i, j;
  int r[5] = {0}, count;

  scanf("%d%d", &n, &m);
  for(i = 1; i <= n; i++)
  for(j = 1; j <= m; j++)
    scanf("%d", &a[i][j]);

  for(i = 1; i <= n; i++)
  for(j = 1; j <= m; j++)
    if(a[i][j] == 1) {
      count = 0;
      if(a[i - 1][j] == 1) count++;
      if(a[i + 1][j] == 1) count++;
      if(a[i][j - 1] == 1) count++;
      if(a[i][j + 1] == 1) count++;
      if(count == 2 && a[i - 1][j] == a[i + 1][j]) count = 0;
      r[count]++;
    }

  for(i = 4; i >= 1; i--)
    printf("%d\n", r[i]);

}
