#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
using namespace std;

int add(int arr[6][6], int arr_i, int arr_j){
    int sum = arr[arr_i][arr_j];
    sum += arr[arr_i][arr_j +1];
    sum += arr[arr_i][arr_j +2];
    sum += arr[arr_i +1][arr_j +1];
    sum += arr[arr_i +2][arr_j];
    sum += arr[arr_i +2][arr_j +1];
    sum += arr[arr_i +2][arr_j +2];
    return sum;
}

int main(){
    int sum = -9 * 7;
    int arr[6][6];
    for(int arr_i = 0;arr_i < 6;arr_i++){
       for(int arr_j = 0;arr_j < 6;arr_j++){
          cin >> arr[arr_i][arr_j];
       }
    }
    for(int arr_i  = 0;arr_i < 4;arr_i++){
        for(int arr_j  = 0;arr_j < 4;arr_j++){
            int t = add(arr, arr_i, arr_j);
            if(t > sum)
                sum = t;
        }
    }
    cout << sum << endl;
    return 0;
}
