#include<stdio.h>
#include<string.h>

main()
{
	char name[100];
	int i,n,ans=0;
	
	printf("Enter Any Character = ");
	gets(name);
	
	n=strlen(name);
	printf("Reverse String = %s",strrev(name));
	
	for(i=0;i<n;i++)
	{
		if(name[i]==name[n-i-1])
		ans++;
	}
	if(ans==i)
	{
		printf("\n String Is Palindrome.");
	}
	else
	{
		printf("\n String Is Not Palindrome.");
	}
}