int searchInsert(int* nums, int sumsSize, int target){
    
    int res;

    if(target > nums[numsSize - 1] return numsSize; 
    else 
	if(target < nums[0]) return 0;

    for(int i = 0; i < numsSize; ++i){
	if(target == nums[i])
	    res = i;
	else 
	    if(target > nums[i] && target < nums[i + 1])
		res = i + 1;
    }

    return res;
}
