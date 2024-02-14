// Πρόγραμμα που δέχεται δύο αριθμούς και έναν χαρακτήρα που αντιστοιχεί σε πράξη (+, -, /, *) και εκτελεί την αντίστοιχη πράξη
// Χρήση των συναρτήσεων prosthesi, afairesi, polaplasiasmos, diairesh

#include <stdio.h>

int prosthesi(int x, int y); //Δήλωση της συνάρτησης prosthesi
int afairesi(int x, int y); //Δήλωση της συνάρτησης afairesi
int polaplasiasmos(int x, int y); //Δήλωση της συνάρτησης polaplasiasmos
float diairesh(int x, int y); //Δήλωση της συνάρτησης diairesh

int main(){
    int x, y; //Δήλωση των μεταβλητών x και y τύπου int (ακέραιοι)
    float apotelesma; //Δήλωση της μεταβλητής apotelesma τύπου float (δεκαδικός αριθμός)
    char praksi; //Δήλωση της μεταβλητής praksi τύπου char (χαρακτήρας) οπυ θα πάρει τιμές του χαρακτήρα (+, -, /, *)
    printf("Dwse tin praksi(+,-,/,*): "); 
    scanf("%c", &praksi); //καλεί την scanf για να διαβάσει τον χαρακτήρα (+ για πρόσθεση, - για αφαίρεση, / για διαίρεση, * για πολλαπλασιασμό)
    printf("Dwse ton prwto arithmo: "); 
    scanf("%d", &x); //καλεί την scanf για να διαβάσει τον πρώτο αριθμό
    printf("Dwse ton deutero arithmo: ");
    scanf("%d", &y); //καλεί την scanf για να διαβάσει τον δεύτερο αριθμό

    switch(praksi){ //Δήλωση της switch
        case '+': //Αν ο χαρακτήρας είναι '+'
            apotelesma = prosthesi(x, y); //Αποθήκευση του αποτελέσματος της συνάρτησης prosthesi στη μεταβλητή apotelesma
            printf("To apotelesma tis prosthesis einai: %f\n", apotelesma); //Εκτύπωση του αποτελέσματος της συνάρτησης prosthesi
            break; //Έξοδος από την switch
        case '-': //Αν ο χαρακτήρας είναι '-'
            apotelesma = afairesi(x, y); //Αποθήκευση του αποτελέσματος της συνάρτησης afairesi στη μεταβλητή apotelesma
            printf("To apotelesma tis afairesis einai: %f\n", apotelesma); //Εκτύπωση του αποτελέσματος της συνάρτησης afairesi
            break; 
        case '*': //Αν ο χαρακτήρας είναι '*'
            apotelesma = polaplasiasmos(x, y); //Αποθήκευση του αποτελέσματος της συνάρτησης polaplasiasmos στη μεταβλητή apotelesma
            printf("To apotelesma tou polaplasiasmou einai: %f\n", apotelesma); //Εκτύπωση του αποτελέσματος της συνάρτησης polaplasiasmos
            break; 
        case '/': //Αν ο χαρακτήρας είναι '/'
            apotelesma = diairesh(x, y); //Αποθήκευση του αποτελέσματος της συνάρτησης diairesh στη μεταβλητή apotelesma
            printf("To apotelesma tis diaireshs einai: %f\n", apotelesma); //Εκτύπωση του αποτελέσματος της συνάρτησης diairesh
            break; 
        default: //Αν ο χαρακτήρας δεν είναι ούτε '+', ούτε '-', ούτε '*', ούτε '/'
            printf("Lathos praksi\n"); //Εκτύπωση του μηνύματος "Λάθος πράξη"
            break; 
        }
}

int prosthesi(int x, int y){ //Υλοποίηση της συνάρτησης prosthesi
    int sum = x + y; //Δήλωση της μεταβλητής sum και αρχικοποίηση της με το άθροισμα των x και y
    return sum; //Επιστροφή της τιμής της μεταβλητής sum
}

int afairesi(int x, int y){ //Υλοποίηση της συνάρτησης afairesi
    int dif = x - y; //Δήλωση της μεταβλητής dif και αρχικοποίηση της με τη διαφορά των x και y
    return dif; //Επιστροφή της τιμής της μεταβλητής dif
}

int polaplasiasmos(int x, int y){ //Υλοποίηση της συνάρτησης polaplasiasmos
    int mult = x * y; //Δήλωση της μεταβλητής mult και αρχικοποίηση της με το γινόμενο των x και y
    return mult; //Επιστροφή της τιμής της μεταβλητής mult
}

float diairesh(int x, int y){ //Υλοποίηση της συνάρτησης diairesh
    int div = x / y; //Δήλωση της μεταβλητής div και αρχικοποίηση της με το πηλίκο των x και y
    return div; //Επιστροφή της τιμής της μεταβλητής div
}