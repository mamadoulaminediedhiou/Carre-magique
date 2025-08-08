# Algorithme de construction d'un carré magique d'ordre impaire
Cet algorithme construit un **carré magique d'ordre impair** en langage **C**, selon l'algorithme classique de **Siam**.

Un **carré magique** est une grille carrée contenant des entiers positifs distincts tels que la somme de chaque ligne, chaque colonne et chaque diagonale est identique.

**Etape 1  — Initialisation**
On commence par initialiser tous les éléments du tableau à zéro. 
L'initialisation à zéro de tous les éléments du carré permettra ultérieurement 
de déduire si la case pointée est libre ou non.

**Etape 2 — Placement du 1**
Le chiffre 1 est placé dans la case au milieu  de la dernière ligne du carré (case d'indice (n,(n+1)/2)).

**Etape 3 Règles de déplacement**
Une fois qu'une case a été remplie, on en choisit une autre en effectuant, 
par rapport à la case qui vient d'être remplie précédemment, deux mouvements successifs :

    -l'un horizontal vers la case de droite
    -l'autre vertical d'une case vers le haut

Si i est l'indice de ligne et j l'indice de colonne, ce déplacement s'obtient en effectuant i = i+1 et j = j+1. 
Deux cas peuvent alors se présenter:

    -La case atteinte est libre, on y place alors le nombre suivant.
    -La case atteinte est déjà remplie, on en choisit une autre en effectuant un déplacement vertical vers le haut à partir de la case de départ.
  
## Compilation

Cet algorithme utilise  un **Makefile**. Pour compiler le programme,ouvrez le terminal,
placez-vous dans le dossier du projet et tapez **make** cela compilera tous les fichiers sources et générera
un exécutable Main
**Execution**
Pour excuter le programme,lancer **./Main**


**Si vous souhaitez voir chaque étape du remplissage du carré magique**, 
vous pouvez décommenter les deux lignes suivantes dans le fichier Carre.c :

// afficher(t, n);
// printf("\n");

