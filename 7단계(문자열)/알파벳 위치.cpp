#include <stdio.h>
#include <string.h>

int main()
{
	char word[101];
	int i=0, alp[26];
	
	scanf("%s", word);
	for(i=0; i<26; i++)
		alp[i]=-1;
		
	for(i=0; i<strlen(word); i++)
	{
		if(alp[word[i]-'a']>=0)
			continue;
		alp[word[i]-'a']=i;
	}
	
	for(i=0;i<26;i++)
	{
		printf("%d ", alp[i]);
	}
	return 0;
}
