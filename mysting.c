/*
    Author : Shanu Dey
    Date : 26/7/2019
 */

#include <stdlib.h>

// mystrlen is used to calculate length of the string
int mystrlen(char *s)
{
	int i = 0;
	for (i = 0; s[i] != '\0'; i++);
	return i;
}

//mystrcat is used to concatinate two string and return the base address of the concatinated string
char *mystrcat(char *a, char *b)
{
	int i, j, k = 0;
	char *s;
	for (i = 0; a[i] != '\0'; i++);
	for (j = 0; b[j] != '\0'; j++);
	s = (char *)malloc((i + j) * sizeof(char));
	while (*a)
		s[k++] = *a++;
	while (*b)
		s[k++] = *b++;
	return s;
}
//mystrcmp is used to compare two string nad return the difference
int mystrcmp(char *a, char *b)
{	
	while(*a && *b && *a==*b){
		a++;
		b++;
	}
	return *a - *b;
}
// mystrcpy copy source string to destination and return the destination address
char *mystrcpy(char *s,char *d){
	int i,n;
	char *t = s;
	for(n=0;d[n]='\0';n++);
	while(*t++=*d++);
	return s;
}

//mystrrev is used to reverse the string and return the base address of reversed string
char *mystrrev(char *s){
	int i,j,t;
	for(j=0;s[j]!='\0';j++);
	j--;
	while(i<j){
		t = s[i];
		s[i++] = s[j];
		s[j--]  =t;
	}
	return s;
}
