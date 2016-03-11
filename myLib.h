#include <stdio.h>
#include <string.h>

int getHammingDistance(char str1[], char str2[]){
	int i;
	int count = 0;
	if(strlen(str1) == strlen(str2)){
		for(i = 0; i<strlen(str1); i+=1){
			if(str1[i] != str2[i])
				count+=1;
		}
	}

	return count;
}

