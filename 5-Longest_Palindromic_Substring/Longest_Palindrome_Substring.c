#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int expandAroundCenter(char *s, int left, int right)
{

	int n = strlen(s);
	while (left >= 0 && right < n && s[left] == s[right])
	{
		left--;
		right++;
	}

	return right - left - 1;
}

char *longestPalindrome(char *s)
{
	int n = strlen(s);
	if (n == 0)
	{
		return "";
	}

	int start = 0;
	int maxLen = 1;
	for (int i = 0; i < n; i++)
	{
		int len1 = expandAroundCenter(s, i, i);		// odd
		int len2 = expandAroundCenter(s, i, i + 1); // even
		int len = (len1 > len2) ? len1 : len2;

		if (len > maxLen)
		{
			start = i - (len - 1) / 2;
			maxLen = len;
		}
	}

	char *res = (char *)malloc((maxLen + 1) * sizeof(char));
	strncpy(res, s + start, maxLen);
	res[maxLen] = '\0';
	return res;
}


int main () {
	char input[100];
	printf("Enter a string : ");
	scanf("%s", input);
	char* output = longestPalindrome(input);
	printf("Output : %s\n", output);
	free(output);
	return 0;
}