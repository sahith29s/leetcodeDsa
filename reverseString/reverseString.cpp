class Solution {
public:
    void reverseString(vector<char>& s) {
        int size = s.size();
        int start = 0;
        while(start < size - 1 - start){
            swap(s[start] , s[size - 1 -start]);
            start++;
        }
    }
};
