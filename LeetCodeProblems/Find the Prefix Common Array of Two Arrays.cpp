// Problem Link
// https://leetcode.com/problems/find-the-prefix-common-array-of-two-arrays/description/


// Source Code

class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        int n = A.size();
        vector<int> res(n, 0);
        set<int> s1, s2;

        for(int i = 0;i < n;i++){
            int c = 0;
            if(s2.find(A[i]) != s2.end()){
                c++;
            }

            s1.insert(A[i]);
            if(s1.find(B[i]) != s1.end()){
                c++;
            }
            s2.insert(B[i]);

            if(i == 0){
                res[i] = c;
            }else{
                res[i] = res[i-1] + c;
            }
        }

        return res;
        
    }
};