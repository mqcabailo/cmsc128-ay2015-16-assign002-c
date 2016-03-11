#include <stdio.h>
#include <string.h>
#include "myLib.h"


int main(){
    int choice;
    int n;
    char str1[50];
    char str2[50];
    do{
        printf("[1] Get Hamming Distance\n");
        printf("[2] Count Substring Pattern\n");
        printf("[3] Is Valid String\n");
        printf("[4] Get Skew\n");
        printf("[5] Get Max Skew\n");
        printf("[6] Get Min Skew\n");
        printf("[7] Exit\n");
        printf("Enter choice:");
        scanf("%d", &choice);
        
        switch(choice){
            case 1:

                printf("Enter string 1: ");
                scanf(" ");    
                fgets(str1, sizeof(str1), stdin);
                                
                printf("Enter string 2: ");
                fgets(str2, sizeof(str2), stdin);

                printf("Hamming distance: %d\n", getHammingDistance(str1,str2));
                break;
            case 2:
                printf("Enter Original string: ");
                scanf(" ");    
                fgets(str1, sizeof(str1), stdin);                

                printf("Enter Pattern string : ");
                fgets(str2, sizeof(str2), stdin);

                printf("Substring patterns: %d\n", countSubstrPattern(str1, str2));
                break;
            case 3:
                printf("Enter String: ");
                scanf(" ");    
                fgets(str1, sizeof(str1), stdin);                

                printf("Enter Alphabet : ");
                fgets(str2, sizeof(str2), stdin);

                if(isValidString(str1, str2) == 1){
                    printf("String is Valid\n");
                }else{
                    printf("String is not Valid\n");
                }
                break;
            case 4:
                printf("Enter String: ");
                scanf(" ");    
                fgets(str1, sizeof(str1), stdin);                

                printf("Enter N : ");
                scanf("%d", &n);
                printf("Skew: %d\n",getSkew(str1, n));
                break;
            case 5:
                printf("Enter String: ");
                scanf(" ");    
                fgets(str1, sizeof(str1), stdin);                

                printf("Enter N : ");
                scanf("%d", &n);
                printf("Max Skew: %d\n",getMaxSkew(str1, n));
                break;
            case 6:
                printf("Enter String: ");
                scanf(" ");    
                fgets(str1, sizeof(str1), stdin);                

                printf("Enter N : ");
                scanf("%d", &n);
                printf("Min Skew: %d\n",getMinSkew(str1, n));
                break;
            case 7:
                break;
            default:
                printf("Invalid Choice!\n");
                break;
        }
        
    }while(choice!=7);
    
    return 0;
}