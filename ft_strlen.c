#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void print_bits(unsigned char octet)
{
    int i = 7;  // On commence par le bit de poids fort (le bit 7)
    
    while (i >= 0)  // On parcourt les bits de 7 à 0
    {
        // On vérifie le i-ème bit en utilisant un masque
        if (octet & (1 << i)) // Si le i-ème bit est à 1 le << décale le 1 de i bits vers la gauche
            write(1, "1", 1);
        else
            write(1, "0", 1);
        i--;  // On passe au bit suivant (de gauche à droite)
    }
}

int main()
{
    unsigned char byte;

    byte = 2;
    print_bits(byte);
    return (0);
}






 
