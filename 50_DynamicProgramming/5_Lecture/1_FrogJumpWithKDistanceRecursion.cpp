function (n){
    if(index==0) return 0;
    minSteps=INt_MAX;
    for(int j=1;j<=k;j++){
            if(index-j>0){
                int jump=function(i-k)+abs(array[index]-arr[index-j])
                minSteps=min(jump,minSteps);
            }
    }
    return minSteps;
}