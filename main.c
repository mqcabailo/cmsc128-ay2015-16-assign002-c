#include <stdio.h>
#include <string.h>
#include "myLib.h"


int main(){
    int choice;
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

                getHammingDistance(str1,str2);
                break;
            case 2:
                break;
            case 3:
                break;
            case 4:
                break;
            case 5:
                break;
            case 6:
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