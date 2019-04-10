//
//  main.cpp
//  Squares of a Sorted Array
//
//  Created by Aj Gill on 4/9/19.
//  Copyright © 2019 Aj Gill. All rights reserved.
//

#include <iostream>
#include <vector>
#include <set>

using namespace std;

class Solution {
public:
    vector<int> sortedSquares(vector<int>& A) {
        set<int> B;
        vector<int> C;
        for(int i=0; i<A.size();i++){
            B.insert(A[i]*A[i]);
        }
        for(set<int>::iterator it = B.begin(); it != B.end(); it++){
            C.push_back(*it);
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

