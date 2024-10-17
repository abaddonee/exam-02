#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

unsigned char reverse_bits(unsigned char octet)
{
    unsigned char result;
    unsigned char i;

    i = 0;
    result = 0;
    while (i < 8) // 8 bits
    {
        result = result << 1; //on décale le bit de 1 vers la gauche
        result = result | (octet & 1); //on ajoute le bit de poids faible de octet
        octet = octet >> 1; //on décale octet de 1 vers la droite
        i++; //on incrémente i
    }
    return (result); //on retourne le résultat
}

int main()
{
    unsigned char byte;

    byte = 2;
    print_bits(byte);
    return (0);
}






 
