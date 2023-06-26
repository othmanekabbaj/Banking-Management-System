#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct client {
        int id;
        char nom[100];
        char prenom[100];
        char adresse[100];
        char numero_telephone[100];
        char email[100];
        char RIB[100];
        char type_compte[100];
        char solde_initial[100];
    };

struct date {
    int jour;
    int mois;
    int annee;
};

struct compte {
    int id;
    struct date d;
    char nom[100];
    char prenom[100];
    char adresse[100];
    char numero_telephone[100];
    char email[100];
    char RIB[100];
    char type_compte[100];
    char solde_initial[100];
    };


struct client cl[10];
struct compte cp[10];

int ids[] = {0,1, 2, 3, 4};

void initializeClientArray() {
    cl[0].id = 0;
    strcpy(cl[0].nom, "Martin");
    strcpy(cl[0].prenom, "Sophie");
    strcpy(cl[0].adresse, "14 Rue de la Liberte, Paris");
    strcpy(cl[0].numero_telephone, "0612345679");
    strcpy(cl[0].email, "sophie.martin@example.com");
    strcpy(cl[0].RIB, "FR76 1234 5678 9012 3456 7890 123");
    strcpy(cl[0].type_compte, "Epargne");
    strcpy(cl[0].solde_initial, "5500");

    //client 1
    cl[1].id = 1;
    strcpy(cl[1].nom, "Dupont");
    strcpy(cl[1].prenom, "Jean");
    strcpy(cl[1].adresse, "27 Avenue des Roses, Lyon");
    strcpy(cl[1].numero_telephone, "0612765432");
    strcpy(cl[1].email, "jean.dupont@example.com");
    strcpy(cl[1].RIB, "FR76 9876 5432 1098 7654 3210 987");
    strcpy(cl[1].type_compte, "Courant");
    strcpy(cl[1].solde_initial, "2500");

    //client 2
    cl[2].id = 2;
    strcpy(cl[2].nom, "Leroy");
    strcpy(cl[2].prenom, "Marie");
    strcpy(cl[2].adresse, "5 Rue du Commerce, Marseille");
    strcpy(cl[2].numero_telephone, "0723456745");
    strcpy(cl[2].email, "marie.leroy@example.com");
    strcpy(cl[2].RIB, "FR76 5432 1098 7654 3210 9876 543");
    strcpy(cl[2].type_compte, "Epargne");
    strcpy(cl[2].solde_initial, "0");

    //client 3
    cl[3].id = 3;
    strcpy(cl[3].nom, "Dubois");
    strcpy(cl[3].prenom, "Pierre");
    strcpy(cl[3].adresse, "9 Avenue du Soleil, Toulouse");
    strcpy(cl[3].numero_telephone, "0654321017");
    strcpy(cl[3].email, "pierre.dubois@example.com");
    strcpy(cl[3].RIB, "FR76 2109 8765 4321 0987 6543 210");
    strcpy(cl[3].type_compte, "Courant");
    strcpy(cl[3].solde_initial, "3500");

    //client 4
    cl[4].id = 4;
    strcpy(cl[4].nom, "Garcia");
    strcpy(cl[4].prenom, "Laura");
    strcpy(cl[4].adresse, "12 Rue de la Paix, Bordeaux");
    strcpy(cl[4].numero_telephone, "0756726012");
    strcpy(cl[4].email, "laura.garcia@example.com");
    strcpy(cl[4].RIB, "FR76 7890 1234 5678 9012 3456 789");
    strcpy(cl[4].type_compte, "Epargne");
    strcpy(cl[3].solde_initial, "8000");


}

void initializeAccountArray() {

    //client 0
    cp[0].id = 0;
    cp[0].d.jour = 10;
    cp[0].d.mois = 06;
    cp[0].d.annee = 2003;
    strcpy(cp[0].nom, "Martin");
    strcpy(cp[0].prenom, "Sophie");
    strcpy(cp[0].adresse, "14 Rue de la Liberte, Paris");
    strcpy(cp[0].numero_telephone, "0612345679");
    strcpy(cp[0].email, "sophie.martin@example.com");
    strcpy(cp[0].RIB, "FR76 1234 5678 9012 3456 7890 123");
    strcpy(cp[0].type_compte, "Epargne");
    strcpy(cp[0].solde_initial, "5500");

    //client 1
    cp[1].id = 1;
    cp[1].d.jour = 11;
    cp[1].d.mois = 06;
    cp[1].d.annee = 2003;
    strcpy(cp[1].nom, "Dupont");
    strcpy(cp[1].prenom, "Jean");
    strcpy(cp[1].adresse, "27 Avenue des Roses, Lyon");
    strcpy(cp[1].numero_telephone, "0612765432");
    strcpy(cp[1].email, "jean.dupont@example.com");
    strcpy(cp[1].RIB, "FR76 9876 5432 1098 7654 3210 987");
    strcpy(cp[1].type_compte, "Courant");
    strcpy(cp[1].solde_initial, "2500");

    //client 2
    cp[2].id = 2;
    cp[2].d.jour = 12;
    cp[2].d.mois = 06;
    cp[2].d.annee = 2003;
    strcpy(cp[2].nom, "Leroy");
    strcpy(cp[2].prenom, "Marie");
    strcpy(cp[2].adresse, "5 Rue du Commerce, Marseille");
    strcpy(cp[2].numero_telephone, "0723456745");
    strcpy(cp[2].email, "marie.leroy@example.com");
    strcpy(cp[2].RIB, "FR76 5432 1098 7654 3210 9876 543");
    strcpy(cp[2].type_compte, "Épargne");
    strcpy(cp[2].solde_initial, "0");

    //client 3
    cp[3].id = 3;
    cp[3].d.jour = 13;
    cp[3].d.mois = 06;
    cp[3].d.annee = 2003;
    strcpy(cp[3].nom, "Dubois");
    strcpy(cp[3].prenom, "Pierre");
    strcpy(cp[3].adresse, "9 Avenue du Soleil, Toulouse");
    strcpy(cp[3].numero_telephone, "0654321017");
    strcpy(cp[3].email, "pierre.dubois@example.com");
    strcpy(cp[3].RIB, "FR76 2109 8765 4321 0987 6543 210");
    strcpy(cp[3].type_compte, "Courant");
    strcpy(cp[3].solde_initial, "3500");

    //client 4
    cp[4].id = 4;
    cp[4].d.jour = 14;
    cp[4].d.mois = 06;
    cp[4].d.annee = 2003;
    strcpy(cp[4].nom, "Garcia");
    strcpy(cp[4].prenom, "Laura");
    strcpy(cp[4].adresse, "12 Rue de la Paix, Bordeaux");
    strcpy(cp[4].numero_telephone, "0756726012");
    strcpy(cp[4].email, "laura.garcia@example.com");
    strcpy(cp[4].RIB, "FR76 7890 1234 5678 9012 3456 789");
    strcpy(cp[4].type_compte, "Épargne");
    strcpy(cp[4].solde_initial, "8000");

}

int i = 5;

int addClient() {
    printf("Entrer votre nom : ");
    fgets(cl[i].nom, sizeof(cl[i].nom), stdin);
    printf("Entrer votre prenom : ");
    fgets(cl[i].prenom, sizeof(cl[i].prenom), stdin);
    printf("Entrer votre adresse : ");
    fgets(cl[i].adresse, sizeof(cl[i].adresse), stdin);
    printf("Entrer votre numero de telephone : ");
    fgets(cl[i].numero_telephone, sizeof(cl[i].numero_telephone), stdin);
    printf("Entrer votre email : ");
    fgets(cl[i].email, sizeof(cl[i].email), stdin);
    printf("Entrer votre RIB : ");
    fgets(cl[i].RIB, sizeof(cl[i].RIB), stdin);
    printf("Entrer le type de compte (Epargne/Courant): ");
    fgets(cl[i].type_compte, sizeof(cl[i].type_compte), stdin);
    printf("Entrer votre solde initial : ");
    fgets(cl[i].solde_initial, sizeof(cl[i].solde_initial), stdin);
    cl[i].id = i;
    ids[i] = i;
    i++;
    printf("\nClient ajoute avec succes !!\n");
    return i-1;
}

void displayClient(int x) {

    printf("Informations du client :\n");
    printf("ID: %i\n", cl[x].id);
    printf("Nom : %s\n", cl[x].nom);
    printf("Prenom : %s\n", cl[x].prenom);
    printf("Adresse : %s\n", cl[x].adresse);
    printf("Numero de telephone : %s\n", cl[x].numero_telephone);
    printf("Email : %s\n", cl[x].email);
    printf("RIB : %s\n", cl[x].RIB);
    printf("Type de compte : %s\n", cl[x].type_compte);
    printf("Solde initial (EN DH) : %s\n\n", cl[x].solde_initial);
}

int modifyClient() {
    int size = sizeof(ids) / sizeof(ids[0]);
    int id, choix, check = 0;
    char choix_typec;
    char nouveau_nom[100];
    char nouveau_prenom[100];
    char nouvelle_adresse[100];
    char nouveau_num[100];
    char nouveau_email[100];
    char nouveau_numc[100];

            printf("Entrer votre ID : ");
           do {
            scanf("%i",&id);
            system("cls");
                for (int i = 0; i < size; i++) {
                    if (ids[i] == id) {
                        check = 1;
                        break;
                }
            }

        if(check) {
                                printf("MODIFICATION DES INFOS D'UN CLIENT\n");
                                printf("-Pour modifier le nom entrer 1\n ");
                                printf("-Pour modifier le prenom entrer 2\n ");
                                printf("-Pour modifier l'adresse entrer 3\n ");
                                printf("-Pour modifier le numero de telephone entrer 4\n ");
                                printf("-Pour modifier l'adresse email entrer 5\n ");
                                printf("-Pour modifier le numero de compte 6\n ");
                                printf("-Pour modifier le type de compte 7\n ");
                                printf("Entrer votre choix : ");
                                do{
                                scanf("%i", &choix);
                                if(choix < 1 || choix > 7)printf("le choix que vous avez saisie est introuvale , reesayer: ");
                                }while(choix < 1 || choix > 7);
                                switch(choix) {

                                    case 1 : system("cls");
                                            printf("Modification du nom\n");
                                             printf("Entrer le nouveau nom : ");
                                             getchar();
                                             fgets(nouveau_nom, sizeof(nouveau_nom), stdin);
                                             nouveau_nom[strcspn(nouveau_nom, "\n")] = '\0';
                                             strcpy(cl[id].nom, nouveau_nom);
                                            system("cls");
                                            printf("Votre nom a ete change avec succes !!\n");
                                            printf("Le nouveau nom est: %s", cl[id].nom);
                                            break;


                                        case 2 :
                                            system("cls");
                                            printf("Modification du prenom\n");
                                            printf("Entrer le nouveau prenom : ");
                                            getchar();
                                            fgets(nouveau_prenom, sizeof(nouveau_prenom), stdin);
                                            nouveau_prenom[strcspn(nouveau_prenom, "\n")] = '\0';
                                            strcpy(cl[id].prenom, nouveau_prenom);
                                            system("cls");
                                            printf("Votre prenom a ete change avec succes !!\n");
                                            printf("Le nouveau nom est: %s", cl[id].prenom);
                                            break;

                                       case 3:
                                            system("cls");
                                            printf("Modification de l'adresse\n");
                                            printf("Entrer la nouvelle adresse : ");
                                            getchar();
                                            fgets(nouvelle_adresse, sizeof(nouvelle_adresse), stdin);
                                            nouvelle_adresse[strcspn(nouvelle_adresse, "\n")] = '\0';  // Supprimer le caractère de nouvelle ligne
                                            strcpy(cl[id].adresse, nouvelle_adresse);
                                            system("cls");
                                            printf("Votre adresse a été changée avec succès !\n");
                                            printf("La nouvelle adresse est : %s\n", cl[id].adresse);
                                            break;

                                        case 4 : system("cls");
                                            printf("Modification du numero de telephone\n");
                                            printf("Entrer le nouveau numero de telephone : ");
                                            getchar();
                                            fgets(nouveau_num, sizeof(nouveau_num), stdin);
                                            nouveau_num[strcspn(nouveau_num, "\n")] = '\0';
                                            strcpy(cl[id].numero_telephone, nouveau_num);
                                            system("cls");
                                            printf("Votre numero de telephone a ete change avec succes !!\n");
                                            printf("Le nouveau numero de telephone est: %s", cl[id].numero_telephone);
                                            break;

                                        case 5 : system("cls");
                                            printf("Modification de l'adresse email\n");
                                            printf("Entrer la nouvelle adresse email : ");
                                            getchar();
                                            fgets(nouveau_email, sizeof(nouveau_email), stdin);
                                            nouveau_email[strcspn(nouveau_email, "\n")] = '\0';
                                            strcpy(cl[id].email, nouveau_email);
                                            system("cls");
                                            printf("Votre adresse email a ete changee avec succes !!\n");
                                            printf("La nouvelle adresse email est: %s", cl[id].email);
                                            break;

                                        case 6 : system("cls");
                                            printf("Modification du numero de compte\n");
                                            printf("Entrer le nouveau numero de compte : ");
                                            getchar();
                                            fgets(nouveau_numc, sizeof(nouveau_numc), stdin);
                                            nouveau_numc[strcspn(nouveau_numc, "\n")] = '\0';
                                            strcpy(cl[id].RIB, nouveau_numc);
                                            system("cls");
                                            printf("Votre numero de compte a ete change avec succes !!\n");
                                            printf("Le nouveau numero de compte est: %s", cl[id].RIB);
                                            break;

                                        case 7 : system("cls");
                                                printf("Modification du type de compte\n");
                                                if(strcmp(cl[id].type_compte, "Courant") == 0){
                                                    printf("Votre compte pour le moment est un compte Courant, voulez vous le rendre un compte Epargne ?\n");
                                                    printf("Si oui tappez (O), sinon tappez (N)\n");
                                                    printf("Entrer votre choix ici : ");
                                                    do{
                                                        getchar();
                                                        scanf("%c",&choix_typec);
                                                        if(choix_typec != 'O' && choix_typec != 'o' && choix_typec != 'N' && choix_typec != 'n')printf("Le choix que vous avez saise est introuvable, Reessayer : ");
                                                    }while(choix_typec != 'O' && choix_typec != 'o' && choix_typec != 'N' && choix_typec != 'n');
                                                if(choix_typec == 'O' || choix_typec == 'o'){
                                                    strcpy(cl[id].type_compte, "Épargne");
                                                    system("cls");
                                                    printf("Le type de votre compte bancaire a ete modifie avec succes !!\n");
                                                    printf("Votre compte est maintenant un compte Epargne");
                                                }else {
                                                    system("cls");
                                                    printf("Modification du type du compte annule \n");
                                                    printf("Votre compte bancaire est encore un compte Courant");
                                                    }


                                                }else {

                                                    printf("Votre compte pour le moment est un compte Epargne, voulez vous le rendre un compte Courant ?");
                                                    printf("Si oui tappez (O), sinon tappez (N)\n");

                                                    do{
                                                        getchar();
                                                        scanf("%c",&choix_typec);
                                                        if(choix_typec != 'O' && choix_typec != 'o' && choix_typec != 'N' && choix_typec != 'n')printf("Le choix que vous avez saise est introuvable, Reessayer : ");
                                                    }while(choix_typec != 'O' && choix_typec != 'o' && choix_typec != 'N' && choix_typec != 'n');
                                                if(choix_typec == 'O' || choix_typec == 'o'){
                                                    strcpy(cl[id].type_compte, "Courant");
                                                    printf("Le type de votre compte bancaire a ete modifie avec succes !!\n");
                                                    printf("Votre compte est maintenant un compte Courant");
                                                }else {
                                                    system("cls");
                                                    printf("Modification du type du compte annule ");
                                                    printf("Votre compte bancaire est encore un compte Epargne");
                                                    }
                                                }
                                                break;

    }

    } else {
        system("cls");
        printf("L'ID que vous avez saisie ne figure pas dans notre base de donnees, resaisir : ");
    }

            }while(check == 0);

    return id;
}

void deleteClient(){
                int id, check = 0, solde;
                int size1 = sizeof(cl) / sizeof(cl[0]);
                int size2 = sizeof(ids) / sizeof(ids[0]);
                printf("Entrez l'ID du client que vous souhaitez supprimer : ");
                do {
                scanf("%i",&id);
                system("cls");
                check = 0;
                    for (int i = 0; i < size2; i++) {
                        if (ids[i] == id) {
                            check = 1;
                            break;
                    }
                }
                if(check){
                    solde = atoi(cl[id].solde_initial);
                    if(solde == 0){
                                    for(int i = id ; i < size1 - 1; i++){
                                        cl[i] = cl[i + 1];
                                    }
                                    for(int i = id ; i < size2 - 1 ; i++){
                                        ids[i] = ids[i+1];
                                    }
                                    size1--;
                                    size2--;
                                    system("cls");
                                    printf("Le client a ID %i a ete supprime avec succes!!\n", id);
                                    printf("Les IDS des clients restants : \n");
                                    for(int i = 0; i < size2; i++){
                                        printf("%i   ", ids[i]);
                                    }

                    }else {
                        system("cls");
                        printf("Suppresion impossible, vous avez encore %s DH dans ce compte: ", cl[id].solde_initial);

                    }
            }else{
                system("cls");
                printf("L'ID que vous avez saisie ne figure pas dans notre base de donnees, resaisir : ");
            }
                }while(!check);

    }

void searchClient(){
        char choix;
        int x=-1;
        char nom[100];
        char rib[100];
        char mail[100];
        printf("Pour rechercher par nom : Cliquer (A): \n");
        printf("Pour rechercher par RIB : Cliquer (B): \n");
        printf("Pour rechercher par mail : Cliquer (C): \n");
        printf("Entrer votre choix ici : ");
        do {
            scanf("%c", &choix);
            if(choix != 'A' && choix != 'B' && choix != 'C') printf("Choix introuvable, resaisir: ");
        }while(choix != 'A' && choix != 'B' && choix != 'C');

        switch(choix) {

            case 'A' : system("cls");
                    printf("RECHERCHE PAR NOM\n");
                     printf("entrer le nom (avec la premiere lettre en Majuscle): ");
                    fflush(stdin);
                    scanf("%s", nom);
                     for(int i = 0; i < 5 ; i++){
                        if(strcmp(cl[i].nom, nom) == 0) x = i;
                     }
                     if(x != -1){
                         printf("ID: %i\n", cl[x].id);
                        printf("Nom : %s\n", cl[x].nom);
                        printf("Prénom : %s\n", cl[x].prenom);
                        printf("Adresse : %s\n", cl[x].adresse);
                        printf("Numéro de téléphone : %s\n", cl[x].numero_telephone);
                        printf("Email : %s\n", cl[x].email);
                        printf("RIB : %s\n", cl[x].RIB);
                        printf("Type de compte : %s\n", cl[x].type_compte);
                        printf("Solde initial (EN DH) : %s\n\n", cl[x].solde_initial);
                     }else printf("le nom que vouz avez saisie ne se trouve pas dans notre base de donnees");
                     break;

                case 'B' : system("cls");
                    printf("RECHERCHE PAR RIB\n");
                     printf("entrer le RIB (sous cette forme : AAXX XXXX XXXX XXXX XXXX XXXX XXX): ");
                    fflush(stdin);
                    fgets(rib, sizeof(rib), stdin);
                    rib[strlen(rib) - 1] = '\0';
                    int x = -1;
                     for(int i = 0; i < 5 ; i++){
                        if(strcmp(cl[i].RIB, rib) == 0) x = i;
                     }
                     if(x != -1){
                        printf("ID: %i\n", cl[x].id);
                        printf("Nom : %s\n", cl[x].nom);
                        printf("Prénom : %s\n", cl[x].prenom);
                        printf("Adresse : %s\n", cl[x].adresse);
                        printf("Numéro de téléphone : %s\n", cl[x].numero_telephone);
                        printf("Email : %s\n", cl[x].email);
                        printf("RIB : %s\n", cl[x].RIB);
                        printf("Type de compte : %s\n", cl[x].type_compte);
                        printf("Solde initial (EN DH) : %s\n\n", cl[x].solde_initial);
                     }else printf("le RIB que vouz avez saisie ne se trouve pas dans notre base de donnees");
                     break;

                    case 'C' : system("cls");
                    printf("RECHERCHE PAR MAIL\n");
                     printf("entrer le mail (sous cette forme : xxxxxxxxxxxxxxxx@xxx.com): ");
                    fflush(stdin);
                    fgets(mail, sizeof(mail), stdin);
                    mail[strlen(mail) - 1] = '\0';
                    x = -1;
                     for(int i = 0; i < 5 ; i++){
                        if(strcmp(cl[i].email, mail) == 0) x = i;
                     }
                     if(x != -1){
                        printf("ID: %i\n", cl[x].id);
                        printf("Nom : %s\n", cl[x].nom);
                        printf("Prénom : %s\n", cl[x].prenom);
                        printf("Adresse : %s\n", cl[x].adresse);
                        printf("Numéro de téléphone : %s\n", cl[x].numero_telephone);
                        printf("Email : %s\n", cl[x].email);
                        printf("RIB : %s\n", cl[x].RIB);
                        printf("Type de compte : %s\n", cl[x].type_compte);
                        printf("Solde initial (EN DH) : %s\n\n", cl[x].solde_initial);
                     }else printf("le mail que vouz avez saisie ne se trouve pas dans notre base de donnees");
                     break;


        }
}

int addAccount() {
    printf("Entrer votre nom : ");
    fgets(cp[i].nom, sizeof(cp[i].nom), stdin);
    printf("Entrer votre prénom : ");
    fgets(cp[i].prenom, sizeof(cp[i].prenom), stdin);
    printf("Entrer votre adresse : ");
    fgets(cp[i].adresse, sizeof(cp[i].adresse), stdin);
    printf("Entrer votre numéro de téléphone : ");
    fgets(cp[i].numero_telephone, sizeof(cp[i].numero_telephone), stdin);
    printf("Entrer votre email : ");
    fgets(cp[i].email, sizeof(cp[i].email), stdin);
    printf("Entrer votre RIB : ");
    fgets(cp[i].RIB, sizeof(cp[i].RIB), stdin);
    printf("Entrer le type de compte (Epargne/Courant): ");
    fgets(cp[i].type_compte, sizeof(cp[i].type_compte), stdin);
    printf("Entrer votre solde initial : ");
    fgets(cp[i].solde_initial, sizeof(cp[i].solde_initial), stdin);
    printf("Entrer la date d'ouverture de votre compte (JJ/MM/AAAA): ");
    scanf("%i/%i/%i", &cp[i].d.jour, &cp[i].d.mois, &cp[i].d.annee);
    cp[i].id = i;
    ids[i] = i;
    i++;
    printf("\nCompte ajoute avec succes !!\n");
    return i-1;
}

void displayAccount(int x) {

    printf("Informations du compte :\n");
    printf("ID: %i\n", cp[x].id);
    printf("Nom : %s\n", cp[x].nom);
    printf("Prenom : %s\n", cp[x].prenom);
    printf("Adresse : %s\n", cp[x].adresse);
    printf("Numero de telephone : %s\n", cp[x].numero_telephone);
    printf("Email : %s\n", cp[x].email);
    printf("RIB : %s\n", cp[x].RIB);
    printf("Type de compte : %s\n", cp[x].type_compte);
    printf("Solde initial (EN DH): %s\n", cp[x].solde_initial);
    printf("Date d'ouverture du compte bancaire: %i/%i/%i\n\n", cp[x].d.jour, cp[x].d.mois, cp[x].d.annee);
}

int modifyAccount() {
    int size = sizeof(ids) / sizeof(ids[0]);
    int id, choix, check = 0;
    char choix_typec;
    char nouveau_nom[100];
    char nouveau_prenom[100];
    char nouvelle_adresse[100];
    char nouveau_num[100];
    char nouveau_email[100];
    char nouveau_numc[100];
    char nouveau_s[100];


            printf("Entrer votre ID : ");
           do {
            scanf("%i",&id);
            system("cls");
                for (int i = 0; i < size; i++) {
                    if (ids[i] == id) {
                        check = 1;
                        break;
                }
            }

        if(check) {
                                printf("-Pour modifier le nom entrer (1)\n ");
                                printf("-Pour modifier le prenom entrer (2)\n ");
                                printf("-Pour modifier l'adresse entrer (3)\n ");
                                printf("-Pour modifier le numero de telephone entrer (4)\n ");
                                printf("-Pour modifier l'adresse email entrer (5)\n ");
                                printf("-Pour modifier le numero de compte (6)\n ");
                                printf("-Pour modifier le type de compte (7)\n ");
                                printf("-Pour modifier le solde (8)\n ");
                                printf("-Pour modifier la date d'ouverture (9)\n ");
                                printf("Entrer votre choix : ");
                                do{
                                scanf("%i", &choix);
                                if(choix < 1 || choix > 9)printf("le choix que vous avez saisie est introuvale , reesayer: ");
                                }while(choix < 1 || choix > 9);
                                switch(choix) {

                                    case 1 : system("cls");
                                            printf("Modification du nom\n");
                                             printf("Entrer le nouveau nom : ");
                                             getchar();
                                             fgets(nouveau_nom, sizeof(nouveau_nom), stdin);
                                             nouveau_nom[strcspn(nouveau_nom, "\n")] = '\0';
                                             strcpy(cp[id].nom, nouveau_nom);
                                            system("cls");
                                            printf("Votre nom a ete change avec succes !!\n");
                                            printf("Le nouveau nom est: %s", cp[id].nom);
                                            break;


                                        case 2 :
                                            system("cls");
                                            printf("Modification du prenom\n");
                                            printf("Entrer le nouveau prenom : ");
                                            getchar();
                                            fgets(nouveau_prenom, sizeof(nouveau_prenom), stdin);
                                            nouveau_prenom[strcspn(nouveau_prenom, "\n")] = '\0';
                                            strcpy(cp[id].prenom, nouveau_prenom);
                                            system("cls");
                                            printf("Votre prenom a ete change avec succes !!\n");
                                            printf("Le nouveau nom est: %s", cp[id].prenom);
                                            break;

                                       case 3:
                                            system("cls");
                                            printf("Modification de l'adresse\n");
                                            printf("Entrer la nouvelle adresse : ");
                                            getchar();
                                            fgets(nouvelle_adresse, sizeof(nouvelle_adresse), stdin);
                                            nouvelle_adresse[strcspn(nouvelle_adresse, "\n")] = '\0';  // Supprimer le caractère de nouvelle ligne
                                            strcpy(cp[id].adresse, nouvelle_adresse);
                                            system("cls");
                                            printf("Votre adresse a été changée avec succès !\n");
                                            printf("La nouvelle adresse est : %s\n", cp[id].adresse);
                                            break;

                                        case 4 : system("cls");
                                            printf("Modification du numero de telephone\n");
                                            printf("Entrer le nouveau numero de telephone : ");
                                            getchar();
                                            fgets(nouveau_num, sizeof(nouveau_num), stdin);
                                            nouveau_num[strcspn(nouveau_num, "\n")] = '\0';
                                            strcpy(cp[id].numero_telephone, nouveau_num);
                                            system("cls");
                                            printf("Votre numero de telephone a ete change avec succes !!\n");
                                            printf("Le nouveau numero de telephone est: %s\n", cp[id].numero_telephone);
                                            break;

                                        case 5 : system("cls");
                                            printf("Modification de l'adresse email\n");
                                            printf("Entrer la nouvelle adresse email : ");
                                            getchar();
                                            fgets(nouveau_email, sizeof(nouveau_email), stdin);
                                            nouveau_email[strcspn(nouveau_email, "\n")] = '\0';
                                            strcpy(cp[id].email, nouveau_email);
                                            system("cls");
                                            printf("Votre adresse email a ete changee avec succes !!\n");
                                            printf("La nouvelle adresse email est: %s\n", cp[id].email);
                                            break;

                                        case 6 : system("cls");
                                            printf("Modification du numero de compte\n");
                                            printf("Entrer le nouveau numero de compte : ");
                                            getchar();
                                            fgets(nouveau_numc, sizeof(nouveau_numc), stdin);
                                            nouveau_numc[strcspn(nouveau_numc, "\n")] = '\0';
                                            strcpy(cp[id].RIB, nouveau_numc);
                                            system("cls");
                                            printf("Votre numero de compte a ete change avec succes !!\n");
                                            printf("Le nouveau numero de compte est: %s\n", cp[id].RIB);
                                            break;

                                        case 7 : system("cls");
                                                printf("Modification du type de compte\n");
                                                if(strcmp(cp[id].type_compte, "Courant") == 0){
                                                    printf("Votre compte pour le moment est un compte Courant, voulez vous le rendre un compte Epargne ?\n");
                                                    printf("Si oui tappez (O), sinon tappez (N)\n");
                                                    do{
                                                        scanf("%c",&choix_typec);
                                                        if(choix_typec != 'O' && choix_typec != 'o' && choix_typec != 'N' && choix_typec != 'n')printf("Le choix que vous avez saise est introuvable, Reessayer : ");
                                                    }while(choix_typec != 'O' && choix_typec != 'o' && choix_typec != 'N' && choix_typec != 'n');
                                                if(choix_typec == 'O' || choix_typec == 'o'){
                                                    strcpy(cp[id].type_compte, "Épargne");
                                                    system("cls");
                                                    printf("Le type de votre compte bancaire a ete modifie avec succes !!\n");
                                                    printf("Votre compte est maintenant un compte Epargne\n");
                                                }else {
                                                    system("cls");
                                                    printf("Modification du type du compte annule \n");
                                                    printf("Votre compte bancaire est encore un compte Courant\n");
                                                    }


                                                }else {

                                                    printf("Votre compte pour le moment est un compte Epargne, voulez vous le rendre un compte Courant ?\n");
                                                    printf("Si oui tappez (O), sinon tappez (N)\n");
                                                    getchar();
                                                    do{
                                                        scanf("%c",&choix_typec);
                                                        if(choix_typec != 'O' && choix_typec != 'o' && choix_typec != 'N' && choix_typec != 'n')printf("Le choix que vous avez saise est introuvable, Reessayer : ");
                                                    }while(choix_typec != 'O' && choix_typec != 'o' && choix_typec != 'N' && choix_typec != 'n');
                                                if(choix_typec == 'O' || choix_typec == 'o'){
                                                    strcpy(cp[id].type_compte, "Courant");
                                                    printf("Le type de votre compte bancaire a ete modifie avec succes !!\n");
                                                    printf("Votre compte est maintenant un compte Courant\n");
                                                }else {
                                                    system("cls");
                                                    printf("Modification du type du compte annule \n");
                                                    printf("Votre compte bancaire est encore un compte Epargne\n");
                                                    }
                                                }
                                                break;

                                            case 8 : system("cls");
                                            printf("Modification du solde\n");
                                            printf("Entrer le nouveau solde : ");
                                            getchar();
                                            fgets(nouveau_s, sizeof(nouveau_s), stdin);
                                            nouveau_s[strcspn(nouveau_s, "\n")] = '\0';
                                            strcpy(cp[id].solde_initial, nouveau_s);
                                            system("cls");
                                            printf("Votre solde a ete change avec succes !!\n");
                                            printf("Le nouveau solde est: %s DH", cp[id].solde_initial);
                                            break;


                                            case 9 : system("cls");
                                            printf("Modification de la date d'ouverture\n");
                                            printf("Entrer la nouvelle date (JJ/MM/AAAA) : ");
                                            scanf("%i/%i/%i", &cp[id].d.jour, &cp[id].d.mois, &cp[id].d.annee);
                                            system("cls");
                                            printf("Votre date d'ouverture a ete change avec succes !!\n");
                                            printf("La nouvelle date d'ouverture du compte bancaire: %i/%i/%i", cp[id].d.jour, cp[id].d.mois, cp[id].d.annee);
                                            break;

    }

    } else {
        system("cls");
        printf("L'ID que vous avez saisie ne figure pas dans notre base de donnees, resaisir : ");
    }

            }while(check == 0);

    return id;
}

void deleteAccount(){
                int id, check = 0, solde;
                int size1 = sizeof(cp) / sizeof(cp[0]);
                int size2 = sizeof(ids) / sizeof(ids[0]);
                printf("Entrez l'ID du compte que vous souhaitez supprimer : ");
                do {
                scanf("%i",&id);
                system("cls");
                check = 0;
                    for (int i = 0; i < size2; i++) {
                        if (ids[i] == id) {
                            check = 1;
                            break;
                    }
                }
                if(check){
                    solde = atoi(cp[id].solde_initial);
                    if(solde == 0){
                                    for(int i = id ; i < size1 - 1; i++){
                                        cp[i] = cp[i + 1];
                                    }
                                    for(int i = id ; i < size2 - 1 ; i++){
                                        ids[i] = ids[i+1];
                                    }
                                    size1--;
                                    size2--;
                                    system("cls");
                                    printf("Le compte a ID %i a ete supprime avec succes!!\n", id);
                                    printf("Les IDS des comptes restants : \n");
                                    for(int i = 0; i < size2; i++){
                                        printf("%i   ", ids[i]);
                                    }

                    }else {
                        system("cls");
                        printf("Suppresion impossible, vous avez encore %s DH dans ce compte\n ", cp[id].solde_initial);

                    }
            }else{
                system("cls");
                printf("L'ID que vous avez saisie ne figure pas dans notre base de donnees, resaisir : ");
            }
                }while(!check);

    }

void searchAccount(){
        int choix;
        int x=-1;
        char nom[100];
        char rib[100];
        char type[100];
        printf("Pour rechercher par nom : Cliquer (1): \n");
        printf("Pour rechercher par RIB : Cliquer (2): \n");
        printf("Pour rechercher par type de compte bancaire : Cliquer (3): \n");
        printf("Entrer votre choix ici : ");
        do {
            scanf("%i", &choix);
            if(choix != 1 && choix != 2 && choix != 3) printf("Choix introuvable, resaisir: ");
        }while(choix != 1 && choix != 2 && choix != 3);

        switch(choix) {

            case 1 : system("cls");
                    printf("RECHERCHE PAR NOM\n");
                     printf("entrer le nom (avec la premiere lettre en Majuscle): ");
                     scanf("%s", nom);
                     for(int i = 0; i < 5 ; i++){
                        if(strcmp(cp[i].nom, nom) == 0) x = i;
                     }
                     if(x != -1){
                         printf("ID: %i\n", cp[x].id);
                        printf("Nom : %s\n", cp[x].nom);
                        printf("Prénom : %s\n", cp[x].prenom);
                        printf("Adresse : %s\n", cp[x].adresse);
                        printf("Numéro de téléphone : %s\n", cp[x].numero_telephone);
                        printf("Email : %s\n", cp[x].email);
                        printf("RIB : %s\n", cp[x].RIB);
                        printf("Type de compte : %s\n", cp[x].type_compte);
                        printf("Solde initial : %d\n\n", cp[x].solde_initial);
                     }else printf("le nom que vouz avez saisie ne se trouve pas dans notre base de donnees");
                     break;

                case 2 : system("cls");
                    printf("RECHERCHE PAR RIB\n");
                     printf("entrer le RIB (sous cette forme : AAXX XXXX XXXX XXXX XXXX XXXX XXX): ");
                    fflush(stdin);
                    fgets(rib, sizeof(rib), stdin);
                    rib[strlen(rib) - 1] = '\0';
                    int x = -1;
                     for(int i = 0; i < 5 ; i++){
                        if(strcmp(cp[i].RIB, rib) == 0) x = i;
                     }
                     if(x != -1){
                        printf("ID: %i\n", cp[x].id);
                        printf("Nom : %s\n", cp[x].nom);
                        printf("Prénom : %s\n", cp[x].prenom);
                        printf("Adresse : %s\n", cp[x].adresse);
                        printf("Numéro de téléphone : %s\n", cp[x].numero_telephone);
                        printf("Email : %s\n", cp[x].email);
                        printf("RIB : %s\n", cp[x].RIB);
                        printf("Type de compte : %s\n", cp[x].type_compte);
                        printf("Solde initial : %d\n\n", cp[x].solde_initial);
                     }else printf("le RIB que vouz avez saisie ne se trouve pas dans notre base de donnees");
                     break;

                    case 3 : system("cls");
                    printf("RECHERCHE PAR TYPE DE COMPTE\n");
                     printf("entrer le type (Premiere lettre en majuscule): ");
                    fflush(stdin);
                    fgets(type, sizeof(type), stdin);
                    type[strlen(type) - 1] = '\0';
                     if(strcmp(type, "Courant") == 0 ){
                        for(int x = 0; x < 10 ; x++){
                                    if(strcmp(cp[x].type_compte, "Courant") == 0)
                                 {
                                    printf("ID: %i\n", cl[x].id);
                                    printf("Nom : %s\n", cl[x].nom);
                                    printf("Prenom : %s\n", cl[x].prenom);
                                    printf("Adresse : %s\n", cl[x].adresse);
                                    printf("Numero de telephone : %s\n", cl[x].numero_telephone);
                                    printf("Email : %s\n", cl[x].email);
                                    printf("RIB : %s\n", cl[x].RIB);
                                    printf("Type de compte : %s\n", cl[x].type_compte);
                                    printf("Solde initial (EN DH) : %s\n\n", cl[x].solde_initial);
                                 }}

                     }else if (strcmp(type, "Epargne") == 0){
                                 for(int x = 0; x < 10 ; x++){
                                    if(strcmp(cp[x].type_compte, "Epargne") == 0)
                                 {
                                    printf("ID: %i\n", cl[x].id);
                                    printf("Nom : %s\n", cl[x].nom);
                                    printf("Prenom : %s\n", cl[x].prenom);
                                    printf("Adresse : %s\n", cl[x].adresse);
                                    printf("Numero de telephone : %s\n", cl[x].numero_telephone);
                                    printf("Email : %s\n", cl[x].email);
                                    printf("RIB : %s\n", cl[x].RIB);
                                    printf("Type de compte : %s\n", cl[x].type_compte);
                                    printf("Solde initial (EN DH) : %s\n\n", cl[x].solde_initial);
                                 }}
                     }else printf("Le type de compte que vous avez saisie n'est pas offert par notre banque\n");
                     break;


        }
}

void sendingMoney(){
        int id1, id2, check1 = 0, check2 = 0;
        int size = sizeof(ids) / sizeof(ids[0]);
        int solde1, solde2, vrs;

        printf("Entrer votre ID : ");
           do {
            scanf("%i",&id1);
            system("cls");
                for (int i = 0; i < size; i++) {
                    if (ids[i] == id1) {
                        check1 = 1;
                        break;
                }
            }
        solde1 = atoi(cp[id1].solde_initial);
        if(check1 && solde1 != 0 ) {
                     printf("Entrer l'ID du compte recevant : ");
                    do {
                        scanf("%i",&id2);
                        system("cls");
                        for (int i = 0; i < size; i++) {
                        if(ids[i] == id2) {
                        check2 = 1;
                        break;}}
                    if(check2){
                        printf("Votre solde est %s DH\n", cp[id1].solde_initial);
                        printf("Entrer la somme que vous voulez versez: ");
                        solde1 = atoi(cp[id1].solde_initial);
                        solde2 = atoi(cp[id2].solde_initial);
                        do{
                        scanf("%i", &vrs);
                        if(vrs > solde1)printf("Solde insuffisant, Resaisir: ");
                        }while (vrs > solde1);
                        sprintf(cp[id1].solde_initial, "%d", solde1 - vrs);
                        sprintf(cp[id2].solde_initial, "%d", solde2 + vrs);
                        system("cls");
                        printf("Virement effectue avec succes!!\n");
                        printf("Solde du compte ID %i (EN DH) : %s\n", id1,  cp[id1].solde_initial);
                        printf("Solde du compte ID %i (EN DH) : %s\n", id2,  cp[id2].solde_initial);
                    }else printf("L'ID que vous avez saisie est introuvable, Resaisir: ");
                    }while(!check2);
                } else if(!check1) printf("L'ID que vous avez saisie est introuvable, Resaisir: ");
                else printf("Solde insuffisant\n");
            }while(!check1);

}

void takingMoneyOut(){
int id, solde, check = 0, sar;
int size = sizeof(ids) / sizeof(ids[0]);



    printf("Entrer votre ID : ");
           do {
            scanf("%i",&id);
            system("cls");
                for (int i = 0; i < size; i++) {
                    if (ids[i] == id) {
                        check = 1;
                        break;
                }
            }
        solde = atoi(cp[id].solde_initial);
        if(check && solde != 0 ) {
                        printf("Votre solde est %s DH\n", cp[id].solde_initial);
                        printf("Entrer la somme que vous voulez retirer: ");
                        do{
                        scanf("%i", &sar);
                        if(sar > solde)printf("Solde insuffisant, Resaisir: ");
                        }while(sar > solde);
                        sprintf(cp[id].solde_initial, "%d", solde - sar);
                        system("cls");
                        printf("Retrait effectue avec succes !!\n");
                        printf("Votre solde actuel: %s\N", cp[id].solde_initial );
        }
        if(check && solde == 0){
            printf("Solde insuffisant\N");
            break;
        }
        if(!check) printf("L'ID que vous avez saisie est introuvable, Resaisir: ");

        }while(!check);








}

char MenuPrincipal(){
    char choix;
    printf("MENU PRINCIPAL: \n");
    printf("Pour la gestion des clients, tappez (A): \n");
    printf("Pour la gestion des comptes, tappez (B): \n");
    printf("Pour la gestion des operations, tappez (C): \n");
    printf("Pour quitter, tappez (Q): \n");
        printf("Entrer votre choix : ");
    do{
        fflush(stdin);
        scanf(" %c", &choix);
        while (getchar() != '\n');
        if(choix != 'A' && choix != 'B' && choix != 'C' && choix != 'Q'){
                printf("Le choix qui vous avez saisie est invalide, resaisir : ");
        }
    }while(choix != 'A' && choix != 'B' && choix != 'C' && choix != 'Q');
        return choix;
}

char Menu1() {

    char choix;
    printf("MENU GESTION DES CLIENTS: \n");
    printf("Pour ajouter un client, tappez (A): \n");
    printf("Pour modifier les informations d'un client, tappez (B): \n");
    printf("Pour supprimer un client, tappez (C): \n");
    printf("Pour rechercher un client, tappez (D): \n");
    printf("Pour revenir au menu principal, tappez (Q): \n");
    printf("Entrer votre choix : ");
    do{
        fflush(stdin);
        scanf("%c", &choix);
        if(choix != 'A' && choix != 'B' && choix != 'C' && choix != 'D' && choix != 'Q'){
                printf("Le choix qui vous avez saisie est invalide, resaisir : ");
        }
    }while(choix != 'A' && choix != 'B' && choix != 'C' && choix != 'D' && choix != 'Q');
        return choix;
}

char Menu2() {

    char choix;
    printf("MENU GESTION DES COMPTES: \n");
    printf("Pour ajouter un compte, tappez (A): \n");
    printf("Pour modifier les informations d'un compte, tappez (B): \n");
    printf("Pour supprimer un compte, tappez (C): \n");
    printf("Pour rechercher un compte, tappez (D): \n");
    printf("Pour revenir au menu principal, tappez (Q): \n");
    printf("Entrer votre choix : ");
    do{
        fflush(stdin);
        scanf("%c", &choix);
        if(choix != 'A' && choix != 'B' && choix != 'C' && choix != 'D' && choix != 'Q'){
                printf("Le choix qui vous avez saisie est invalide, resaisir : ");
        }
    }while(choix != 'A' && choix != 'B' && choix != 'C' && choix != 'D' && choix != 'Q');
        return choix;
}

char Menu3() {

    char choix;
    printf("MENU GESTION DES OPERATIONS: \n");
    printf("Pour effectuer un virement, tappez (A): \n");
    printf("Pour effectuer un retrait, tappez (B): \n");
    printf("Pour revenir au menu principal, tappez (Q): \n");
    printf("Entrer votre choix : ");
    do{
        fflush(stdin);
        scanf("%c", &choix);
        if(choix != 'A' && choix != 'B' && choix != 'Q'){
                printf("Le choix qui vous avez saisie est invalide, resaisir : ");
        }
    }while(choix != 'A' && choix != 'B' && choix != 'Q');
        return choix;
}


int main() {

    char choix1, choix2;

    initializeAccountArray();
    initializeClientArray();
    while(1){
    choix1 = MenuPrincipal();
    switch(choix1){
        case 'A' : system("cls");
                   choix2 = Menu1();
                    switch(choix2){
                        case 'A' :system("cls");
                                printf("AJOUT D'UN CLIENT\n");
                                fflush(stdin);
                                addClient();
                                displayClient(i-1);
                                printf("\nAppuyer sur ENTRER pour revenir au menu principal...");
                                getchar();
                                break;

                        case 'B' :system("cls");
                                printf("MODIFICATION D'UN CLIENT\n");
                                fflush(stdin);
                                int a = modifyClient();
                                displayClient(a);
                                printf("\nAppuyer sur ENTRER pour revenir au menu principal...");
                                getchar();
                                break;

                        case 'C' : system("cls");
                                printf("SUPPRESSION D'UN CLIENT\n");
                                fflush(stdin);
                                deleteClient();
                                getchar();
                                printf("\nAppuyer sur ENTRER pour revenir au menu principal...");
                                getchar();
                                break;

                        case 'D' :
                                system("cls");
                                printf("RECHERCHE D'UN CLIENT\n");
                                fflush(stdin);
                                searchClient();
                                getchar();
                                printf("\nAppuyer sur ENTRER pour revenir au menu principal...");
                                getchar();
                                break;


                        case 'Q' : system("cls");
                                    break;
                    }system("cls");
                    break;
            case 'B' : system("cls");
                        choix2 = Menu2();
                        switch(choix2){
                        case 'A' : system("cls");
                                printf("AJOUT D'UN COMPTE\n");
                                fflush(stdin);
                                addAccount();
                                displayAccount(i-1);
                                getchar();
                                printf("\NAppuyer sur n'importe quelle touche pour revenir au menu principal...");
                                getchar();
                                system("cls");
                                break;

                        case 'B' : system("cls");
                                printf("MODIFICATION D'UN COMPTE\n");
                                fflush(stdin);
                                int a = modifyAccount();
                                displayAccount(a);
                                fflush(stdin);
                                printf("\nAppuyer sur n'importe quelle touche pour revenir au menu principal...");
                                getchar();
                                break;

                        case 'C' : system("cls");
                                printf("SUPPRESSION D'UN COMPTE\n");
                                fflush(stdin);
                                deleteAccount();
                                getchar();
                                printf("Appuyer sur n'importe quelle touche pour revenir au menu principal...");
                                getchar();
                                 break;

                        case 'D' :
                                system("cls");
                                printf("RECHERCHE D'UN COMPTE\n");
                                fflush(stdin);
                                searchAccount();
                                printf("Appuyer sur n'importe quelle touche pour revenir au menu principal...");
                                getchar();
                                break;


                        case 'Q' : system("cls");
                                    break;

                    }system("cls");
                    break;

            case 'C' :  system("cls");
                        choix2 = Menu3();
                        switch(choix2){
                        case 'A' :system("cls");
                                printf("VIREMENT\n");
                                fflush(stdin);
                                sendingMoney();
                                getchar();
                                printf("Appuyer sur n'importe quelle touche pour revenir au menu principal...");
                                getchar();
                                break;

                        case 'B' :system("cls");
                                printf("RETRAIT\n");
                                fflush(stdin);
                                takingMoneyOut();
                                getchar();
                                printf("Appuyer sur n'importe quelle touche pour revenir au menu principal...");
                                getchar();
                                break;
                        case 'Q' :
                            system("cls");
                                    break;

                    }break;




                    case 'Q' :
                            system("cls");
                            printf("Merci d'avoir utiliser notre programme, a la prochaine");
                            exit(0);

                        }
}
}


















