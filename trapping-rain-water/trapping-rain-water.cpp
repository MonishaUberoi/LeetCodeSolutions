class Solution {
public:
    int trap(vector<int>& height) {
        int totwater = 0;
        for(int i=0; i<height.size(); i++){
            int maxhl=0,maxhr=0;
            for(int j=0; j<=i; j++){
                maxhl=max(maxhl, height[j]);
            }
            for(int j=i; j<height.size(); j++){
               maxhr=max(maxhr, height[j]);
            }
            int h = min(maxhl,maxhr);
            totwater+=(h-height[i]);
        }
        return totwater;
    }
};