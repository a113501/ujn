#include <stdio.h>
#define N 100
int fun(int score[],int below[],int m)
{
    int average,sum=0,count=0,i;
    for(i=0; i<m; i++)
        sum += score[i];
    average = sum/m;
    for(i=0; i<m; i++)
        if(score[i] <= average)
            below[count++] = score[i];
    return count;
}
int main()
{ 
  int score[N];
  int below[N],i;
  int a,m;
  scanf("%d",&m);
  for(i=0;i<m;i++)
  	scanf("%d",&score[i]);
  a = fun(score,below,m);

  printf("%d\n",a);
  printf("\n");
  for(i=0; i<a; i++)
    printf("%d ", below[i]);
  return 0;
}
//在score数组存放有m个成绩，在函数fun中计算平均分，
再将低于平均分的人数作为函数值返回，并将低于平均分的
分数存放在below数组中，最后在main函数中输出below数组。
