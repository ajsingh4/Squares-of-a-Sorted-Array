//
//  main.cpp
//  Squares of a Sorted Array
//
//  Created by Aj Gill on 4/9/19.
//  Copyright © 2019 Aj Gill. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> sortedSquares(vector<int>& A) {
        vector<int> B;
        for(int i=0; i<A.size();i++){
            B.push_back(A[i]*A[i]);
        }
        for(int j=0; j<B.size(); j++){
            for(int k=0; k<B.size(); k++){
                if(B[j] < B[k]){
                    int temp = B[j];
                    B[j] = B[k];
                    B[k] = temp;
                }
            }
        }
        return B;
    }
};

int main() {
    vector<int> input = {-4,-1,0,3,10};
    vector<int> answer = Solution().sortedSquares(input);
    for(int m=0; m<answer.size(); m++){
        cout << answer[m] << " ";
    }
}

