 vector<int> subarraySum(int arr[], int n, long long s)
{
    vector<int> result;
    int sum=0;
    for(int i=0;i<n;i++){
        
        sum =arr[i];
        
        for(int j=i+1;j<=n;j++){
            if(sum>s){
                break;
            }  
            else if(sum == s){
                result.push_back(i+1);
                result.push_back(j);
                return result;
            }
            sum+=arr[j];
        }
    }
    result.push_back(-1);
    return result;
}