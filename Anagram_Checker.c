#include <stdio.h>
#include <conio.h>
#include <string.h>
int min(int m , int n){ //Function that return minimum out of two integers.
	if(m < n)
		return m;
	else
		return n;
}
void sort(char *x){    // void sort(char x[]){
	for (int i = 0; i < strlen(x)-1; i++)    // Sort the string or group of strings in decending order.
			for (int j = i+1; j <strlen(x); j++)
				if(x[i] < x[j]){
					char temp = x[i] ;  //ALTERNATIVELY, WE CAN TAKE :  int temp = x[i];
					x[i] = x[j];
					x[j] = temp ;
				}
}
int main(int argc, char const *argv[])
{
	char a[50] , b[50] ;
	int count = 0;
	printf("Enter First String\n");
	gets(a);
	printf("Enter Second String\n");
	gets(b);
	sort(a);
	sort(b);
	for (int i = 0; i < min(strlen(a) , strlen(b)); i++){
		if(a[i] != b[i])   // comparing the sorted strings
			count++; //counting number of dissimilar letters.
	}
	if(count == 0) // if all letters are same in both strings
		printf("GIVEN STRINGS ARE ANAGRAM\n");
	else
		printf("GIVEN STRINGS ARE NOT ANAGRAM\n");
	getch();
}