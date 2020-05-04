int removeDuplicates(int* nums, int numsSize)
{
	int i,j,t;
	for(i=numsSize-1;i>0;i--)
	{
		if(nums[i]==nums[i-1])
		{
			for(j=i;j<numsSize;j++)
			{
				nums[j-1]=nums[j];
			}
            numsSize-=1;
		}
	}
	return numsSize;
}
