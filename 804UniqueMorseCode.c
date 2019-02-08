#include <stdio.h>
#include <string.h>

int main(void) {
    
    printf("Completed Function for #807 for Skylines problem on LC 4ms Run time");
    
    
}
int uniqueMorseRepresentations(char** words, int wordsSize) {
    
    char* MorseCode_Encoded[] = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
    
    char encode_buffer[100] = {0};
    char encode_arr[100][50] = {0};
    int j; //Iterator variables
    int k ; //Used to store index of letter in morse code array
    int encode_count = 0;
    
    
    
    
    for (int i=0; i<wordsSize;i++){
        memset(encode_buffer, 0, sizeof(encode_buffer)); //Resets buffer every iteration
        int existing_entry = 0;
        j =0;
        k=0;
        while(words[i][j] != '\0'){
            k = words[i][j]-'a';
            strncat(encode_buffer,MorseCode_Encoded[k],sizeof(MorseCode_Encoded[k]));
            j++;
        }
        
        for (int z=0; z <encode_count && !existing_entry;z++){
            
            if( (strncmp(encode_arr[z],encode_buffer,sizeof(encode_buffer))) == 0){
                
                existing_entry = 1;
            }
        }
        
        if (!existing_entry){
            strncpy(encode_arr[encode_count], encode_buffer, sizeof(encode_buffer));
            encode_count++;
        }
    }
    
    return encode_count;
    
}
