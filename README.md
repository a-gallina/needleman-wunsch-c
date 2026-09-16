# Needleman-Wunsch Alignment (seqalign)

Implementazione in C dell'algoritmo di Needleman-Wunsch per l'allineamento globale di due sequenze biologiche. 

Il programma utilizza la programmazione dinamica per calcolare la matrice dei punteggi e ricostruisce l'allineamento ottimale tramite traceback, attraverso match, mismatch e gap penalties.

## Struttura del Progetto
L'algoritmo è diviso in tre fasi, come la struttura del codice in `src/` è divisa in tre file:
1. **Inizializzazione**: Setup della matrice (n+1) x (m+1) con i costi dei gap iniziali (riga 0 e colonna 0).
2. **Scoring**: Popolamento della griglia calcolando il massimo tra le mosse possibili (diagonale, sopra, sinistra). In questa fase viene anche ricordato da quale delle tre opzioni proviene il valore.
3. **Traceback**: Percorso a ritroso dalla cella in basso a destra per ricostruire le sequenze allineate tramite l'informazione salvata al passo precedente.

## Compilazione
Il progetto utilizza `make` per gestire la compilazione.

Per compilare il programma, esegui:
```bash
make
```
## Utilizzo
Verrà generato un file  `seqalign`. Eseguire da terminale con `./seqalign`.

