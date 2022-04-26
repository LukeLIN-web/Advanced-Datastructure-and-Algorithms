#include <stdio.h>

#define MAXN 10
#define MAXS 1000

int need_time(const int time[], const int score[], int happy_score, int n);

int main() {
    int n, i, happy_score;
    int time[MAXN], score[MAXN];
    scanf("%d %d", &n, &happy_score);
    for (i = 0; i < n; ++i)
        scanf("%d", &time[i]);
    for (i = 0; i < n; ++i)
        scanf("%d", &score[i]);
    printf("%d\n", need_time(time, score, happy_score, n));
    return 0;
}

/* Your function will be put here */

//我们不要从正面考虑问题，换个角度，逆向思维。我们从这一堆题目里选不做的，这些题目要满足：
//1.开心值之和<=happy_score   用score来买time
//2.所花的时间总和最多
// 定义子问题， c[i] is the best solutio
// c[0]0 =  0
// c[n] = max { c[n-1],  wi + c[ n- score  ]
int max(int a, int b ){
    return a > b ? a :b ;
}
int need_time(const int time[], const int score[], int happy_score, int n){
    int dp[MAXS] = {0};
    dp[happy_score] = 0;
    int i ,j;
    int mintime = time[0];
    int minscore = score[0];
    // 01背包问题伪代码(空间优化版)
//dp[0,...,W] = 0// 背包
//for i = 1,...,N // 物品
    //  for j = W,...,w[i] // 必须逆向枚举!!!
    //    dp[j] = max(dp[j], dp[j−w[i]]+v[i])
    for (j = 0; j < n; ++j){
        if(mintime > time[j])
            mintime = time[j];
        if (minscore > score[j])
            minscore = score[j];
    }
    // impossible, means
    int sumtime = 0;
    int sumscore = 0;
    for (i = 0; i < n ; i ++ ){
        sumtime += time[i];
        sumscore += score[i];
    }
    if (sumscore < happy_score){
        return -1;
    }
    for (i = 0; i < n ; i ++ ){
        // 外背包里物品
        for (j = sumscore - happy_score; j >= score[i];  j -- ){
            dp[j] = max(dp[j],  dp[j - score[i]] + time[i] );
            dp[j] = dp[j];
        }
    }
    //剩余的score 获得的最大sumtime。

    return sumtime - dp[sumscore - happy_score];
}
