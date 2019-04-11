//
//  main.cpp
//  Squares of a Sorted Array
//
//  Created by Aj Gill on 4/9/19.
//  Copyright © 2019 Aj Gill. All rights reserved.
//

#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

class Solution {
public:
    vector<int> sortedSquares(vector<int>& A) {
        vector<int> C;
        int i = 0;
        int j = A.size()-1;
        while (i<=j) {
            if(abs(A[i]) <= abs(A[j])){
                C.push_back(A[j]*A[j]);
                j--;
            }
            else{
                C.push_back(A[i]*A[i]);
                i++;
            }
        }
        reverse(C.begin(), C.end());
        return C;
    }
};

int main() {
    vector<int> input = {-4,-1,0,3,10};
    vector<int> answer = Solution().sortedSquares(input);
    for(int m=0; m<answer.size(); m++){
        cout << answer[m] << " ";
    }
}

