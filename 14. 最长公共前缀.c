char * longestCommonPrefix(char ** strs, int strsSize)
{
	int i,j,flag=1;
	if(strsSize==0) return "";
	for(j=0;j<strlen(strs[0])&&flag;j++)
	{
		for(i=1;i<strsSize;i++)
		{
			if(strs[0][j]!=strs[i][j])
			{
				strs[0][j]='\0';
				flag==0;
				break;
			}
		}
	}
	return strs[0];
	
 }
