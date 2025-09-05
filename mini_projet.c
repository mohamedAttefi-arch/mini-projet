#include <stdio.h>
#include <string.h>

int main() {
    char titre[200][100];
    int quantite[200];
    char auteur[200][100];
    float prix[200];
    int choix, i;
    int n = 0; // number of books

    do {
        printf("\n---- Menu ----\n");
        printf("1. Ajouter des livres\n");
        printf("2. Afficher la liste des livres\n");
        printf("3. Modifier la quantité d'un livre\n");
        printf("4. Supprimer un livre\n");
        printf("5. Afficher le nombre total de livres\n");
        printf("0. Quitter\n");
        printf("Entrez votre choix: ");
        scanf("%d", &choix);
        getchar(); // consume newline

        switch (choix) {
            case 1:
                printf("Entrez le nombre de livres à ajouter: ");
                int livres_a_ajouter;
                scanf("%d", &livres_a_ajouter);
                getchar(); // consume newline
                for (i = n; i < n + livres_a_ajouter; i++) {
                    printf("Titre du livre %d: ", i + 1);
                    fgets(titre[i], 100, stdin);
                    titre[i][strcspn(titre[i], "\n")] = 0; // remove newline

                    printf("Auteur du livre %d: ", i + 1);
                    fgets(auteur[i], 100, stdin);
                    auteur[i][strcspn(auteur[i], "\n")] = 0; // remove newline

                    printf("Prix du livre %d: ", i + 1);
                    scanf("%f", &prix[i]);
                    getchar();

                    printf("Quantité du livre %d: ", i + 1);
                    scanf("%d", &quantite[i]);
                    getchar();
                }
                n += livres_a_ajouter;
                break;
            case 2:
                printf("\n--- Liste des livres ---\n");
                for (i = 0; i < n; i++) {
                    printf("Livre %d:\n", i + 1);
                    printf("  Titre: %s\n", titre[i]);
                    printf("  Auteur: %s\n", auteur[i]);
                    printf("  Prix: %.2f\n", prix[i]);
                    printf("  Quantité: %d\n", quantite[i]);
                }
                break;
            case 3: {
                char livre_a_chercher[100];
                printf("Entrez le titre du livre à modifier: ");
                fgets(livre_a_chercher, 100, stdin);
                livre_a_chercher[strcspn(livre_a_chercher, "\n")] = 0;
                int found = 0;
                for (i = 0; i < n; i++) {
                    if (strcmp(titre[i], livre_a_chercher) == 0) {//compare what the user entered with the titles in the array
                        printf("Quantité actuelle: %d\n", quantite[i]);
                        printf("Nouvelle quantité: ");
                        scanf("%d", &quantite[i]);
                        getchar();
                        found = 1;
                        printf("Quantité mise à jour.\n");
                        break;
                    }
                }
                if (!found) {//to reverese the boolean value
                    printf("Livre non trouvé.\n");
                }
                break;
            }
            case 4: {
                char livre_a_supprimer[100];
                printf("Entrez le titre du livre à supprimer: ");
                fgets(livre_a_supprimer, 100, stdin);
                livre_a_supprimer[strcspn(livre_a_supprimer, "\n")] = 0;//remove newline
                int found = 0;
                for (i = 0; i < n; i++) {
                    if (strcmp(titre[i], livre_a_supprimer) == 0) {//compare what the user entered with the titles in the array
                        for (int j = i; j < n - 1; j++) {
                            strcpy(titre[j], titre[j + 1]);
                            strcpy(auteur[j], auteur[j + 1]);//left shifting the arrays
                            prix[j] = prix[j + 1];
                            quantite[j] = quantite[j + 1];
                        }
                        n--; //decrease the count of books
                        found = 1;
                        printf("Livre supprimé.\n");
                        break;
                    }
                }
                if (!found) {
                    printf("Livre non trouvé.\n");
                }
                break;
            }
            case 5:
                printf("Nombre total de livres: %d\n", n);
                break;
            case 0:
                printf("Au revoir!\n");
                break;
            default:
                printf("Choix invalide.\n");
        }
    } while (choix != 0);//loop until user chooses to exit

    return 0;
}