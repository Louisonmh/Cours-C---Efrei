#include <stdio.h>

int main() {
    int N_max = 100;
    int tab[N_max];
    int n;
    bool valid_input = false;
    while (!valid_input) {
        printf("Saisir le nombre d'elements du tableau (max %d): ", N_max);
        scanf("%d", &n);
        if (n > 0 && n <= N_max) {
            valid_input = true;
        } else {
            printf("Nombre invalide. Veuillez saisir un nombre entre 1 et %d.\n", N_max);
        }
    }
    for (int i = 0; i < n; i++) {
        printf("Saisir l'element %d: ", i + 1);
        scanf("%d", &tab[i]);
    }
    printf("Les elements du tableau sont: ");
    printf("[");
    for (int i = 0; i < n; i++) {
        printf("%d ", tab[i]);
        printf(",");
    }
    printf("]\n");
    printf("Les elements du tableau en ordre inverse sont: ");
    printf("[");
    for (int i = n - 1; i >= 0; i--) {
        printf("%d ", tab[i]);
        printf(",");
    }
    printf("]\n");
}