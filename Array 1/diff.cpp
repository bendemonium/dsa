#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> in(n);
    for (int i=0; i<n; i++) cin >> in[i];
    cout << solve(n, in);
    return 0;
}
