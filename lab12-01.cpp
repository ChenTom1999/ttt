
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

char *strtrim(char *s);
void palindromes(char *s);

int main()
{
	char words[100],new_Words[100];
	printf("Please enter a string: ");
	fgets(words,100,stdin);
	strtrim(words);
	palindromes(words);
	
}
 /*delete space*/
char *strtrim(char *s){
	char *p = s;
	char *q = s;

	while(*p != '\0'){
		if(*p == ' ' || *p == '\t'){
			p++;
		}
		*q++ = *p++;
	}
	*q = '\0';
	return s;
}

void palindromes(char *s){
	int key = 0;
	int i,len = strlen(s);
	for(i = 0;i < len / 2;i++){
		if(s[i] == s[len - 2 - i]){  
			key++;
		}
	}
	if(key >=  len / 2){
		printf("%sis  Palindromes~\n",s);
	}else {
		printf("%sis not Palindromes~\n",s);
	}
}


