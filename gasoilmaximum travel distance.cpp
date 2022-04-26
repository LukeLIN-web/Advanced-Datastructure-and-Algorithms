#include<iostream>
#include<vector>
#include <algorithm>
#include <limits.h>

using namespace std;

// If there is cheap oil at the next stop ,
// Then we can refuel until we can just get there （ You can also not refuel ,
// Make sure you can drive until ）;
// If  is more expensive than this site ,
// Then fill it directly , Obviously, this is a greedy thought .
struct gas {
    double price, dis;

    bool operator<(const gas &a) const {
        return dis < a.dis;
    }
};

int main() {
    double C, totalDistance, DAVG;
    int N;
    cin >> C >> totalDistance >> DAVG >> N;
    vector<gas> station(N + 1);
    for (int i = 0; i < N; ++i) {
        cin >> station[i].price >> station[i].dis;
    }
    station[N] = {0.0, totalDistance};//For the convenience of handling the destination ,
    // Set it as the last gas station , A distance of d, The price for 0.0
    sort(station.begin(), station.end());
    if (station[0].dis != 0){
        printf("The maximum travel distance = 0.00");
        return 0;
    }
    int now = 0;
    double res = 0;
    double nowtank = 0;
    double onceMaxDistance = C * DAVG;
    while (now < N) {
        // 遍历范围内每一个, 选择最便宜的.如果找到了比现在还便宜的就直接去.
        double minPrice = INT_MAX;
        int minStat = -1;
        int i = now + 1;
        while (station[i].dis <= station[now].dis + onceMaxDistance) {
            if (station[i].price < minPrice) {
                minPrice = station[i].price;
                minStat = i;
                if (station[i].price < station[now].price)
                    break;
            }
            i++;
        }
        if (minStat == -1) {
            break;
        }
        if (minPrice < station[now].price) {
            if (nowtank * DAVG < station[minStat].dis - station[now].dis) {
                double addoil = (station[minStat].dis - station[now].dis - nowtank * DAVG) / DAVG;
                res += addoil * station[now].price;//补上距离
                nowtank += addoil;
            }
        } else {
            //后面都贵,先补满
            double addoil = C - nowtank;
            res += addoil * station[now].price;
            nowtank = C;
        }
        nowtank -= (station[minStat].dis - station[now].dis) / DAVG;
        now = minStat;
    }
    if (now != N) {
        printf("The maximum travel distance = %.2f", station[now].dis + onceMaxDistance );
    } else {
        printf("%.2f", res);
    }
    return 0;
}