#include <stdio.h>
#include <math.h>

int main(void)
{
    int     i, x1, y1, r1, x2, y2, r2, result;
    double  dis, sub;
    scanf(" %d", &i);
    
    while(i--)
    {
        scanf("%d %d %d %d %d %d", &x1, &y1, &r1, &x2, &y2, &r2);
        dis = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
        sub = r1 > r2 ? r1 - r2 : r2 - r1;
        
        if(dis == 0 && r1 == r2)                result = -1;    // 완전 일치
        else if(dis == r1 + r2 || dis == sub)   result = 1;     // 교점 1개
        else if(dis < r1 + r2 && (sub < dis))   result = 2;     // 교점 2개
        else result = 0;                                        // 교점 X
        printf("%d\n", result);
    }
}