#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {    
    int player, bot, life;
    player = bot = 0;
    life = 10;
    srand(time(NULL));
    char rand_c = (rand() % 26) + 97; // Letra misteriosa entre 'a' y 'z'

    printf("GANA A LA MAQUINA: EL JUEGO POR TURNOS\n");
    printf("Intenta adivinar la letra oculta antes que la maquina. ¡Mucha suerte!\n");

    while (player != rand_c && bot != rand_c && life > 0) {
        printf("\nTe quedan %d vidas.\nElige una letra (o '0' para salir): ", life);
        player = getchar();

        // Salida voluntaria
        if (player == '0') {
            printf("DERROTA. Has abandonado la partida.\n");
            break;
        }

        // Limpiar salto de línea del buffer
        while (getchar() != '\n');

        bot = (rand() % 26) + 97; // La máquina elige una letra
        --life; // Se consume una vida

        // Mostrar jugada del bot
        printf("La maquina ha elegido: %c\n", bot);

        // CASO 1. El jugador adivina antes que la máquina.
        if (player == rand_c && bot != rand_c) {
            printf("VICTORIA. Has ganado a la maquina.\n");
        }

        // CASO 2. La maquina adivina antes que el jugador.
        else if (player != rand_c && bot == rand_c) {
            printf("DERROTA. La maquina ha sido mas rapida que tu.\n");
        }

        // CASO 3. Ambos aciertan a la vez.
        else if (player == rand_c && bot == rand_c) {
            printf("WOW. Ambos habeis adivinado la letra a la vez. Empate.\n");
        }

        // CASO 4. Te quedas sin vidas.
        else if (life == 0) {
            printf("DERROTA. Te has quedado sin vidas.\n");
        }

        // CASO 5. Ninguno acierta.
        else {
            printf("Ninguno la ha adivinado. Intentalo otra vez.\n");
        }
    }
    return 0;
}