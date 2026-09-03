int removeDuplicates(int* nums, int numsSize) {
    int k=0,i;
    int n = nums[0];
    k++; 
    
    for(i=1; i<numsSize; i++){
        if(nums[i]==n)
            continue;
        n= nums[i]; 
        nums[k]=nums[i]; 
        k++;  
    }
    return k;
}