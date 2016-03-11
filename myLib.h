#include <stdio.h>
#include <string.h>

int getHammingDistance(char str1[], char str2[]){
	//variable declaration
	int i;
	int count = 0;

	//checks if the strings are of same length
	if(strlen(str1) == strlen(str2)){

		//loop to traverse through all the characters
		for(i = 0; i<strlen(str1)-1; i+=1){

			//checks if the two strings differ in the current index
			//then increments count
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

	//checks if the inputs are valid
	if(strlen(original) >= strlen(pattern)){

		//loop to traverse through the characters of the original string
		for(i = 0; i < strlen(original)-strlen(pattern)+1; i+=1){

			//loop to traverse through the characters of the pattern string
			for(j = 0; j < strlen(pattern)-1; j+=1){

				//checks if the original string and the pattern string
				//have the same character in an index then increments check
				if(original[i+j] == pattern[j]){
					check+=1;
				}else{
					break;
				}
			}
			
			//checks if the var check is equal to the size of the pattern
			//then increments count		
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

	//loop to traverse through the characters of the input string
	for(i = 0; i < strlen(str)-1;i+=1){

		//loop to traverse through the characters ot the input alphabet
		for(j = 0; j < strlen(alphabet)-1;j+=1){

			//checks if the current character in the string can be found in
			//the input alphabet
			if(str[i]==alphabet[j]){
				break;

			//otherwise, sets the value of valid to 0
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

int getSkew(char str[], int n){
	int i;
	int g = 0;
	int c = 0;

	//checks if the input N is the of the same value
	//as the size of the string
	if(n <= strlen(str)-1){

		//loop to traverse through the string
		for(i = 0; i < n; i+=1){

			//checks if the current character is 'C' then increments the
			//int variable c
			if(str[i] == 'C'){
				c+=1;

			//checks if the current character is 'G' then increments the
			//int variable g
			}else if(str[i] == 'G'){
				g+=1;
			}
		}
		return g-c;
	}else{
		return 0;
	}
}

int getMaxSkew(char str[], int n){
	int i;
	int g = 0;
	int c = 0;

	//checks if the input N is the of the same value
	//as the size of the string
	if(n <= strlen(str)-1){

		//loop to traverse through the string
		for(i = 0; i < n; i+=1){

			//checks if the current character is 'C' then increments the
			//int variable c
			if(str[i] == 'C'){
				c+=1;

			//checks if the current character is 'G' then increments the
			//int variable g
			}else if(str[i] == 'G'){
				g+=1;
			}
		}
		return g;
	}else{
		return 0;
	}
}

int getMinSkew(char str[], int n){
	int i;
	int g = 0;
	int c = 0;


	//checks if the input N is the of the same value
	//as the size of the string
	if(n <= strlen(str)-1){

		//loop to traverse through the string
		for(i = 0; i < n; i+=1){

			//checks if the current character is 'C' then increments the
			//int variable c
			if(str[i] == 'C'){
				c+=1;

			//checks if the current character is 'G' then increments the
			//int variable g
			}else if(str[i] == 'G'){

				//checks if at least 1 'G' is found
				if(g!=1)
					g+=1;
			}
		}
		return g-c;
	}else{
		return 0;
	}
}

