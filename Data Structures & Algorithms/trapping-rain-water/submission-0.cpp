class Solution {
public:
    int trap(vector<int>& height) {

        int n = height.size();

        if(n ==0 ){
            return 0;
        }

        vector<int> la(n);
        vector<int> ra(n);
        vector<int> re(n);

        
        la[0] = height[0];
        ra[n-1] = height[n-1];

        for(int i=1; i< n-1; i++){
            la[i] = max(la[i-1],height[i]);
        }
        for(int i=n-2;i>=0;i--){
            ra[i] = max(height[i],ra[i+1]);
        }

        for(int i =0; i< n-1; i++){
            re[i] = min(la[i],ra[i]) - height[i];
        }

        int sum = 0;
        for(int i=0; i<n-1;i++){
            if(i<0){
                continue;
            }
            sum += re[i];
        }
        return sum;
        
    }
};
