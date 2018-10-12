//
//  main.c
//  Assignment3
//
//  Created by xuwen nie on 15/10/8.
//  Copyright © 2015年 xuwen nie. All rights reserved.
//

#include <stdio.h>
#include <String.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Please enter the rows and clowns : ");
    int rows ;
    scanf("%d",&rows);
    int column;
    scanf("%d",&column);
    
    printf("x is %d,  y is %d.\n",rows,column);
    //make 2d array
    char grid[column][rows];
    //set all data into array
    printf("Enter your string : ");
    for(int i = 0;i<column;i++){
        for(int j = 0; j < rows;j++){
            scanf(" %c",&grid[i][j]);
        }
    }
   
    //compare
    printf("Enter how many word you want to find:");
    int num;
    scanf("%d",&num);

    //get the input words
    
    printf("enter your words");
    char str[50];
    scanf("%s",&str);
    int length = strlen(str);
    
    //compare useing 3 loop, once find first same letter, goes different ways to compare,once no mathc, break
    char direc = "";
    if(length > rows || length > column){
        printf("out of bound");
    }else{
        for(int i= 0;i<rows;i++){//in here it will break and tells me i = 37674. i dont know why.
            for(int j = 0;j < column;j++){
                if(grid[i][j]==str[0]){
                    for(int k = 1; k < length;k++){
                        if(grid[i-k][j] == str[k]){
                            char direc = "N";
                        }else if(grid[i+k][j] == str[k]){
                            char direc = "S";
                        }else if(grid[i][j-k] == str[k]){
                            char direc = "W";
                        }else if(grid[i][j+k]){
                            char direc = "E";
                        }else if(grid[i-k][j-k] == str[k]){
                            char direc = "NW";
                        }else if(grid[i-k][j+k] == str[k]){
                            char direc = "NE";
                        }else if(grid[i+k][j-k] == str[k]){
                            char direc = "SW";
                        }else if(grid[i+k][j+k] == str[k]){
                            char direc = "SE";
                        }else{
                            char direc = "not in grid";
                            break;
                        }
                    }
                    
                    
                }
            }
        }
        
        
    
    printf("%s\t%s",str,direc);
    
    
    }
    
    
   /*
    
    for(int i = 0;i<clomn;i++){
        for(int j = 0;j<rows;j++){
            printf("%c\t",grid[i][j]);
        }
        printf("\n");
    }
    */
    
    
    return 0;
}

