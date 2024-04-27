class Solution{
public:
    int heapHeight(int N, int arr[]){
        // code here
        if(N==1) return 1;
        int height=0;
        while(N>1){
            N=N/2;
            height++;
        }
        return height;
    }
};