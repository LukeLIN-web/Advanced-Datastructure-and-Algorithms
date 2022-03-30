#include <iostream>
#include <vector>
#include <cmath>
#include <string>
#include <set>
#include <unordered_map>
#include <numeric>

using namespace std;
// arccos(2/3)
// arccos (1/sqrt2)
// ABCD 1110 0111   arccos 0110/3

vector<unordered_map<string, int>> allFiles;
unordered_map<string, int> fileNames;// store filename mapping num
double compute(const string &a, const string &b) {
    auto file1 = allFiles[fileNames[a]];
    auto file2 = allFiles[fileNames[b]];
    vector<int> vt1;
    vector<int> vt2;
    for (const auto&[key, value]: file1) {
        // if have , then
        if (file2.find(key) != file2.end()) {
            vt1.emplace_back(value);
            vt2.emplace_back(file2[key]);
        } else {
            vt1.emplace_back(value);
            vt2.emplace_back(0);
        }
    }
    for (const auto&[key, value]: file2) {
        if (file1.find(key) == file1.end()) {
            vt1.emplace_back(0);
            vt2.emplace_back(value);
        }
    }
    auto inprod = std::inner_product(vt1.begin(), vt1.end(), vt2.begin(), 0);
    double module1 = sqrt(std::inner_product(vt1.begin(), vt1.end(), vt1.begin(), 0.0));
    double module2 = sqrt(std::inner_product(vt2.begin(), vt2.end(), vt2.begin(), 0.0));
    double res = acos(inprod / (module1 * module2));
    return res;
}


int main() {
    int N;
//    N = 3;
    cin >> N;

    for (int i = 0; i < N; ++i) {
        string title;
        cin >> title;
        fileNames[title] = i;
        string tmp;
        cin >> tmp;
        unordered_map<string, int> map;
        while (tmp != string("#")) {
            if (map.find(tmp) != map.end()) {
                map[tmp] += 1;
            } else {
                map.insert(make_pair(tmp, 1));
            }
            cin >> tmp;
        }
        allFiles.emplace_back(map);
    }
    int M;
    cin >> M;
//    M =2 ;
    for (int i = 0; i < M; ++i) {
        string a, b;
        cin >> a >> b;
        printf("Case %d: %.3f\n", i + 1, compute(a, b));
    }

    return 0;

}
