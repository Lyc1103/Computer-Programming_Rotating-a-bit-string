#include <stdio.h>
#include <stdint.h>
#include <math.h>

int RightRot(int num, int const shft)
{
    int ans = 0, tmp;
    int buffer[35] = {0};
    tmp = num;
    buffer[0] = tmp % 2;
    int len = 1;
    while (1)
    {
        tmp = tmp >> 1;
        int tmptmp = tmp;
        if (tmptmp == 1)
        {
            buffer[len] = 1;
            break;
        }
        else if (tmptmp == 0)
        {
            buffer[len] = 0;
            break;
        }
        buffer[len] = tmptmp % 2;
        len++;
    }
    int shift_tmp;
    shift_tmp = (shft % (len + 1));
    // for (int i = 0; i <= len; i++)
    // {
    //     printf("%d", buffer[i]);
    // }
    // puts("");

    for (int i = shift_tmp; i <= len; i++)
    {
        ans += buffer[i] * pow(2, i - shift_tmp);
    }
    for (int i = (shift_tmp - 1); i >= 0; i--)
    {
        ans += buffer[i] * pow(2, len - (shift_tmp - 1) + i);
    }

    return ans;
}

int main()
{
    int x, ans = 0;
    int n;
    scanf("%d %d", &x, &n);

    ans = RightRot(x, n);
    printf("%d", ans);
    return 0;
}