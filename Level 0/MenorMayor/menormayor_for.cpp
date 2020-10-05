#include <iostream>
using namespace std;
int main(){
    int a = 5, b = 1, c = 3;
    int nums[3] = {a,b,c};
    int min = nums[0], max = nums[0]; 
    for(int i = 1; i < 3; ++i) {
        if (nums[i] < min) min = nums[i];
        if (nums[i] > max) max = nums[i];
    }
    cout << min;
    cout << max;
    return 0;
}