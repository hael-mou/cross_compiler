#include <stdio.h>
#include <stdlib.h>
#include "Etudiant.h"
#include "Gestion_Etudionts.h"

int main()
{

    char choice = 0;
    do {
    system("clear");
    printf("#############################################\n");
    printf("##                                         ##\n");
    printf("##-- Main Menu:                            ##\n");
    printf("##                                         ##\n");
    printf("## 1. Ajouter un etudiant                  ##\n");
    printf("## 2. Supprimer un etudiant                ##\n");
    printf("## 3. liste des etudiants                  ##\n");
    printf("## 4. Exit                                 ##\n");
    printf("##                                         ##\n");
    printf("#############################################\n");
    printf("##  ~> ");

    scanf("%c", &choice);

        switch(choice)
        {
            case '3':
                system("clear");
                lecture();
                getchar();
                getchar();
                break;
            case '1':
                system("clear");
                add_Etudiant();
                break;
            case '2':
                system("clear");
                remove_Etudiant();
                getchar();
                break;
            case '4':
                return 0;
            default:
                printf("Vous avez entrer une valeur inexistante ??");
                getchar();
                getchar();
                break;
        }
    }while(1);
}
