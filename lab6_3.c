
#include <stdio.h>
#include <ctype.h>


int main(void) {
    
    char words;
    int numbers = 0;
    
    
    printf("Enter a word: ");
    
    while ((words = getchar()) != '\n')
    {
        switch (toupper(words)) 
        {
            case 'O': case 'E': case 'I': case 'L': case 'N': 
            case 'A': case 'R': case 'S': case 'T': case 'U':
                   numbers += 1;
                   break;
            case 'D': case 'G': 
                   numbers += 2;
                   break;
            case 'B': case 'C': case 'M': case 'P':
                   numbers += 3;
                   break;
            case 'F': case 'H': case 'V': case 'W': case 'Y':
                   numbers += 4;
                   break;
            case 'K': 
                   numbers += 5;
                   break;
            case 'J': case 'X': 
                   numbers += 8;
                   break;
            case 'Q': case 'Z': 
                   numbers += 10;
                   break;
            default:
                    numbers = 0;
                    break;
                
            
        }
    }

    
    
    
    printf("\nScrabble value: %d", numbers);
    
    
    return 0;
}