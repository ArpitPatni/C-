int frogJump(int n, vector<int> &heights)
{
    // Write your code here.
    int prev=0;
    int prev2=0;
    for(int i=1;i<n;i++){
        int firstStep=prev+abs(heights[i]-heights[i-1]);
        int secondStep=INT_MAX;
        if(i>1){
            secondStep=prev2+abs(heights[i]-heights[i-2]);
        }
        int curr=min(firstStep,secondStep);
        prev2=prev;
        prev=curr;
    }
    return prev;
}