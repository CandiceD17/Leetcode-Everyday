The first solution is using brute force; however, it would exceed time limits when running with tremendously long arrays.
class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxLeft = 0;
        int right = 0;
        int h = 0;
        int area=0;
        int size = height.size();
        for(int j = size-1; j>0; j--){
            maxLeft = 0;
            right = height[j];
            for(int i=0; i<size-1; i++){
                if(height[i]<=maxLeft)
                    continue;
                else{
                    maxLeft = height[i];
                    h = min(maxLeft, right);
                    if((j-i)*h>area)
                        area=(j-i)*h;
                }
            }
        }
        return area;
    }
};

So we need to apply a smarter way:
Starting from the outside two edges; 
Each time, we would only move the shorter edge inside to increase the height limit.

class Solution {
public:
    int maxArea(vector<int>& height) {
        int size = height.size();
        int left = 0;
        int right = size-1;
        int area = min(height[left],height[right])*(size-1);
        int temp = 0;
        while(left!=right){
            if(height[left]<height[right])
                left++;
            else
                right--;
            temp = min(height[left],height[right])*(right-left);
            if(temp>area)
                area = temp;
        }
        return area;
    }
};

2019.07.17
