Etudiant shiftToLastLine(){
    FILE *F = fopen("class.txt","r");
    Etudiant Etud;
    Etud.id = 0;
    while (fscanf(F,"%d,%[^,],%[^,],%[^,],%[^\n]\n",&Etud.id,Etud.nom,Etud.prenom,Etud.Niveau,Etud.filiere) != EOF){}
    fclose(F);
    return Etud;
}

void add_Etudiant(){
    Etudiant Etud;
    FILE *F = fopen("class.txt","a+");
    if(F==NULL)
    {
        printf("Creation de la liste impossible.");
        getchar();
    } else{
    getchar();
    printf(" - Nom : ");
    gets(Etud.nom);
    printf(" - Prenom : ");
    gets(Etud.prenom);
    printf(" - filiere : ");
    gets(Etud.filiere);
    printf(" - Niveau : ");
    gets(Etud.Niveau);
    Etudiant Etud2 = shiftToLastLine();
    fprintf(F, "%d,%s,%s,%s,%s \n",Etud2.id+1,Etud.nom,Etud.prenom,Etud.Niveau,Etud.filiere);
    fclose(F);
    }
}

void lecture(){
    FILE *F = fopen("class.txt","r");
    Etudiant Etud;
    if (F == NULL){
        printf("Ouverture impossible du fichier de donnees.");
        getchar();
    } else{
    while (fscanf(F,"%d,%[^,],%[^,],%[^,],%[^\n]\n",&Etud.id,Etud.nom,Etud.prenom,Etud.Niveau,Etud.filiere) != EOF)
    printf("%d - Nom : %s,\tPrenom : %s,\tNiveau : %s,\tfiliere : %s\n",Etud.id,Etud.nom,Etud.prenom,Etud.Niveau,Etud.filiere);
    }
    fclose(F);
}

void remove_Etudiant(){
    FILE *F,*F2;
    int id = 0;
    Etudiant Etud;
    F=fopen("class.txt","r");
    F2=fopen("class2.txt","w+");
    if(F==NULL || F2 == NULL)
    {
        printf("Ouverture du fichier et impossible.");
        getchar();
    }
    else{
        printf("iD de l'etudiant: ");
        scanf("%d",&id);
        while (fscanf(F,"%d,%[^,],%[^,],%[^,],%[^\n]\n",&Etud.id,Etud.nom,Etud.prenom,Etud.Niveau,Etud.filiere) != EOF)
            if(Etud.id != id)
                fprintf(F2, "%d,%s,%s,%s,%s \n",Etud.id,Etud.nom,Etud.prenom,Etud.Niveau,Etud.filiere);
        fclose(F);
        fclose(F2);
        remove("class.txt");
        rename("class2.txt","class.txt");
    }

}
