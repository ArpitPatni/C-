public:
    pair<long,long> indexes(vector<long long> v, long long x)
    {
        long long first=-1,last=-1;
        long long start=0;
        long long end=v.size()-1;
        while(start<=end){
            long long mid=start+(end-start)/2;
            if(v[mid]==x){
                first=mid;
                end=mid-1;
            }
            else if(x<v[mid]){
                end=mid-1;
            }else{
                start=mid+1;
            }
        }
        
        start=0;
        end=v.size()-1;
         while(start<=end){
            long long mid=start+(end-start)/2;
            if(v[mid]==x){
                last=mid;
                start=mid+1;
            }
            else if(x<v[mid]){
                end=mid-1;
            }else{
                start=mid+1;
            }
        }
        return {first,last};
    }