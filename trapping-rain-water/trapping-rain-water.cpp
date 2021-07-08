class Solution {
public:
    int trap(vector<int>& height) {
        int totwater=0, n=height.size();
        if(n==0){
            return 0;
        }
        int l=0, r=n-1;
        int maxleft=0, maxright=0;
        while(l<=r){
            if(height[l]<=height[r]){
                if(maxleft<=height[l]){maxleft=height[l];}
                else{totwater+=(maxleft-height[l]);}
                l++;
            }else{
                if(maxright<=height[r]){maxright=height[r];}
                else{totwater+=(maxright-height[r]);}
                r--;
            }
        }
        return totwater;
    }
};