class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int largest = 0;
        if(heights.size() == 0){
            return -1;
        }
        if(heights.size() == 1){
            return heights[0];
        }

        for(int i = 0 ; i < heights.size() ; i++){
            int width = 1;
            int insideI = i;

            while(insideI > 0){
                if(heights[--insideI] >= heights[i]){
                    width++;
                }    
                else{
                    break;
                }
            }

            insideI = i;

            while(insideI < heights.size() - 1 ){
                if(heights[++insideI] >= heights[i]){
                    width++;
                }
                else{break;}
            }
            int area = width * heights[i];

            if(largest < area){
                largest = area;
            }
        }
        return largest;
    }
};
