class Solution {
  public:
    int largest(vector<int> &arr) {
        int largest = arr[0];
        int size = arr.size();
        for(int i = 1 ; i<=size-1;i++){
            if(arr[i]>largest){
               largest=arr[i];
            }
        }
        return largest;
    }
};
