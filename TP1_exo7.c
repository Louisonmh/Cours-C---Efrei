#include <stdio.h>

int main() {
    float TVA, prixHT, prixTTC;
    TVA = 5.5;
    printf("Enter le prix HT: ");
    scanf("%f", &prixHT);
    prixTTC = prixHT + (prixHT * TVA / 100);
    printf("Le prix TTC est: %f\n", prixTTC);
    return 0;
}