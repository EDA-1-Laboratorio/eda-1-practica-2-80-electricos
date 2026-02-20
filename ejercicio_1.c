#include <stdio.h>

void invertirCadena(char *inicio) {
    char *fin = inicio;
    char aux;

    // 1. Mover 'fin' al último carácter antes del '\0'
    while (*fin != '\0') {
        fin++;
    }
    fin--; 

    // 2. Intercambio de valores
    while (inicio < fin) {
        // --- TU CÓDIGO AQUÍ ---
        // Implementa el intercambio usando la variable 'aux'
        // Desplaza los apuntadores adecuadamente
        aux=*inicio;
        *inicio=*fin;
        *fin=aux;
        inicio++;
        fin--;
    }
}

int main() {
    char palabra[] = "APUNTADORES";
    printf("Original: %s\n", palabra);
    invertirCadena(palabra);
    printf("Invertida: %s\n", palabra);
    return 0;
}

//Durante el ciclo de intercambio (swap), la condición de parada es while (inicio < fin). 
//Explica detalladamente qué es lo que se está comparando físicamente en esa instrucción (¿valores o direcciones?) 
// y qué sucedería si la condición fuera while (*inicio != *fin).
/* 
    Durante el ciclo de intercambio se usa la condición "while (inicio < fin), y aqui lo que se está comparando 
    realmente son direcciones de memoria, no las letras. Los apuntadores "inicio" y "fin" señalan posiciones dentro 
    de la memoria donde están guardados los caracteres, así que el programa básicamente revisa si el apuntador 
    del inicio todavía está antes que el del final. Mientras eso pase, se siguen intercambiando las letras desde 
    los extremos hacia el centro. Cuando ambos apuntadores se encuentran o se cruzan, significa que ya no hay 
    nada más por invertir y el ciclo termina
*/
/* 
    Si la condición fuera "while (*inicio != *fin), entonces se compararían las letras y no las posiciones en memoria.
    Por obviedad eso estaría mal, porque el ciclo podría detenerse solo porque dos letras coinciden, aunque la cedena
    aún no esté completamente invertida. También podría seguir ejecutándose cuando los apuntadores ya se cruzaron,
    causando resultados incorrectos. Por eso se comparan las direcciones y no los valores.
*/
