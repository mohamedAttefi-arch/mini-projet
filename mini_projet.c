// #include <stdio.h>

// int main(){
//     printf("working ...");
// }// Online C compiler to run C program online
#include <stdio.h>
#include<string.h>

int main(){

    char titre[200][100];
    int quantite[200];
    char auteur[200][100];
    float prix[200];
    int choix, n, i;
    int quantite__a_modifier;
    char livre_a_chercher[200];
    
    printf("pour ajouter un livre appuyez sur: 1");
    printf("\npour afficher la quantité des livre appuyez sur: 2");
    printf("\npour modifier la quantité des livre appuyez sur: 3");
    printf("\npour suprimer un livre appuyez sur: 4");
    printf("\npour afficher le nombre totale des livre appuyez sur: 5");
    printf("\nentrez votre choix: ");
    scanf("%d", &choix);
    
    
    
    do
    {
        switch(choix)
    {
        case 1:
        
        
        
        printf("entrez le nombre des livres");
        scanf("%d",&n);
        int c;
        while((c = getchar()) != '\n' && c != EOF);
        
        for(int i=0; i<n; i++)
         {   
            printf("\nentrez le titre de livre %d (sans espace): ",i+1);
             scanf(" %[^\n]s", &titre);
            
            
            
            printf("\nentrez le nom de l'auteur %d: ",i+1);
            scanf(" %[^\n]s", &auteur);
            
            
            
            printf("\nentrez le prix de livre %d: ",i+1);
            scanf("%.2f",&prix[i]);

            printf("\nentrez la quantité de livre %d: ",i+1);
            scanf("%d", &quantite[i]);
            printf("\n--%d: ",quantite[0]);
         }   
            
            break;
            
        case 2:
            for(int i=0; i<n; i++){
            printf("le titre de livre ajouter: %s",titre[i]);
            printf("l'auteur de livre: %s",auteur[i]);
            printf("le prix de titre: %.2f", prix[i]);
            printf("la quantité de ce livre: %d", quantite);
            
            }
            break;
        default:
            printf("rien a ajouté");
        
        case 3:

            printf("entrer le livre a chercher: ");
            scanf(" %[^\n]s", &livre_a_chercher);
            

            if (strcmp(titre,livre_a_chercher)==0)
            {
                printf("l'auteur de ce livre est: %s")
            }
            

            
        
        
        
    }
    } while (choix);
    
    
    
    
    
    
   

    
    

    return 0;
}
