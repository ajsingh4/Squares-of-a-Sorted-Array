//
//  main.cpp
//  Squares of a Sorted Array
//
//  Created by Aj Gill on 4/9/19.
//  Copyright © 2019 Aj Gill. All rights reserved.
//

#include <iostream>
#include <vector>
#include <queue>

using namespace std;

class Solution {
public:
    vector<int> sortedSquares(vector<int>& A) {
        priority_queue <int> B;
        vector<int> C;
        for(int i=0; i<A.size();i++){
            B.push(A[i]*A[i]);
        }
        for(int j=0; j<A.size();j++){
            int temp = B.top();
            
            //cout << "Top is " << temp << " \n";
            B.pop();
            C.push_back(temp);
        }
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

