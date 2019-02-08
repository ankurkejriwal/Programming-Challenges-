#include <stdio.h>

int main(void) {
    
    printf("Completed Function for #807 for Skylines problem on LC 4ms Run time");
    
    
}
int maxIncreaseKeepingSkyline(int** grid, int gridRowSize, int *gridColSizes) {
    int* maxColArr = (int*)calloc(gridRowSize,sizeof(int));
    int *maxRowArr=(int*)calloc((*gridColSizes),sizeof(int));
    
    for (int i=0; i<gridRowSize;i++){
        
        for(int j=0; j<*gridColSizes;j++){
            if ( maxColArr[i] <grid[i][j]){
                maxColArr[i] = grid[i][j];
            }
        }
        
    }
    
    for (int i=0; i<*gridColSizes;i++){
        
        for(int j=0; j<gridRowSize;j++){
            if ( maxRowArr[i] <grid[j][i]){
                maxRowArr[i] = grid[j][i];
            }
        }
        
    }
    int sum = 0;
    
    for(int i=0;i<gridRowSize;i++){
        for(int j=0;j<*gridColSizes;j++){
            sum+=(maxColArr[i]<maxRowArr[j]?maxColArr[i]:maxRowArr[j])-grid[i][j];
        }
    }
    
    return sum;
    
}

