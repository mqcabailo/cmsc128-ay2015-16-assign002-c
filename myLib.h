#include <stdio.h>
#include <string.h>

int getHammingDistance(char str1[], char str2[]){
	//variable declaration
	int i;
	int count = 0;

	//checks if the strings are of same length
	if(strlen(str1) == strlen(str2)){
		for(i = 0; i<strlen(str1)-1; i+=1){
			if(str1[i] != str2[i]){
				count+=1;
			}
		}
		return count;
	}else{
		return -1;
	}

	
}

int countSubstrPattern(char original[], char pattern[]){
	int i;
	int j;
	int count = 0;
	int check = 0;

	if(strlen(original) >= strlen(pattern)){
		for(i = 0; i < strlen(original)-strlen(pattern)+1; i+=1){
			for(j = 0; j < strlen(pattern)-1; j+=1){
				if(original[i+j] == pattern[j]){
					check+=1;
				}else{
					break;
				}
			}
			printf("\n");	
			if(check == strlen(pattern)-1){
				count++;
			}
			check = 0;
		}
		
	}

	return count;
}

int isValidString(char str[], char alphabet[]){
	int i;
	int j;
	int valid = 1;

	for(i = 0; i < strlen(str)-1;i+=1){
		for(j = 0; j < strlen(alphabet)-1;j+=1){
			if(str[i]==alphabet[j]){
				break;
			}else if(str[i]!=alphabet[j] && j==strlen(alphabet)-2 ){
				valid = 0;
			}
		}

		if(valid == 0){
			break;
		}
	}

	return valid;

}