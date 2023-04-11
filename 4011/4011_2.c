#include <stdio.h>

// 모두 삼항 연산자로

int main()
{
   int y, m, d, gender;
   scanf("%2d%2d%2d-%1d", &y, &m, &d, &gender);
   printf("%d%02d/%02d/%02d %c", (gender > 2) ? (20) : (19), y, m, d, (gender%2==0) ? 'F' : 'M');
   
   return 0;
}