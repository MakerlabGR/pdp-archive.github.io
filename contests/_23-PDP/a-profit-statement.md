---
layout: statement
codename: profit
---

Οι τιμές κάποιων αγαθών ή τίτλων (π.χ. πετρελαίου, χρυσού, μετοχών αλλά και βασικών τροφίμων όπως των αλεύρων, της ζάχαρης κ.λπ.) διαμορφώνονται καθημερινά βάσει της προσφοράς και της ζήτησης, αλλά και με βάση την εκτίμηση για τη μελλοντική τους πορεία. Αποτέλεσμα αυτών των συναλλαγών είναι οι τιμές αυτές να αλλάζουν από μέρα σε μέρα. Κάποιοι εκμεταλλεύονται αυτήν την αυξομείωση των τιμών, αγοράζοντας μία ποσότητα (ή δικαίωμα σε ποσότητα) φθηνά, και έπειτα πουλούν την ίδια ποσότητα ή δικαίωμα ακριβότερα. Το κέρδος εκφράζεται από το λόγο της τιμής πώλησης προς την τιμή αγοράς. Έστω ότι γνωρίζουμε την τιμή που έχει κάποιο αγαθό κάθε μέρα για ένα μεγάλο χρονικό διάστημα. Θέλουμε να υπολογίσουμε το μέγιστο κέρδος που θα μπορούσε κάποιος να αποκομίσει με μία αγορά και στη συνέχεια μία πώληση.

## Πρόβλημα

Να αναπτύξετε ένα πρόγραμμα σε μια από τις γλώσσες του IOI το οποίο να διαβάζει το πλήθος των ημερών για τις οποίες είναι γνωστή η τιμή του αγαθού, την τιμή του αγαθού για κάθε μία από αυτές τις ημέρες, και να υπολογίζει το μέγιστο δυνατό κέρδος από μία αγορά και στη συνέχεια μία πώληση.

## Αρχεία εισόδου

Τα αρχεία εισόδου με όνομα **profit.in** είναι αρχεία κειμένου με την εξής δομή: Η πρώτη γραμμή περιέχει έναν ακέραιο αριθμό $$N$$, το πλήθος των ημερών για τις οποίες είναι γνωστή η τιμή του αγαθού ($$1 \leq N \leq 1.000.000$$). Η δεύτερη γραμμή περιέχει $$N$$ ακέραιους αριθμούς $$X_i$$ (για $$1 \leq i \leq N$$), χωρισμένους μεταξύ τους με κενά διαστήματα, την τιμή του αγαθού κάθε μέρα ($$1 \leq X_i \leq 1.000$$).

## Αρχεία εξόδου

Τα αρχεία εξόδου με όνομα profit.out είναι αρχεία κειμένου με την εξής δομή: Έχουν μία γραμμή με έναν πραγματικό αριθμό $$P$$, το μέγιστο δυνατό κέρδος από μία αγορά και στη συνέχεια μία πώληση, δηλαδή τη μέγιστη τιμή του λόγου $$X_i / X_j$$ όταν $$j \leq i$$. Ο αριθμός $$P$$ πρέπει να στρογγυλοποιείται με ακρίβεια τριών δεκαδικών ψηφίων.

## Παραδείγματα αρχείων εισόδου - εξόδου

**1<sup>o</sup>**

| **profit.in**                         | **profit.out** |
| ------------------------------------ | ------------- |
| 10 <br> 5 4 3 10 11 9 8 8 8 8 | 3.667 |

*Επεξήγηση παραδείγματος 1:* Το μέγιστο κέρδος προκύπτει αν κάποιος αγοράσει την τρίτη μέρα ($$X_3 = 3$$) και πουλήσει την πέμπτη ($$X_5 = 11$$). Το κέρδος είναι $$X_5 / X_3 = 11 / 3 = 3.6666666...$$

**2<sup>o</sup>**

| **profit.in**                         | **profit.out** |
| ------------------------------------ | ------------- |
| 10 <br> 9 8 15 5 6 9 8 10 3 5 | 2.000 |

*Επεξήγηση παραδείγματος 2:* Το μέγιστο κέρδος προκύπτει αν κάποιος αγοράσει την τέταρτη μέρα ($$X_4 = 5$$) και πουλήσει την όγδοη (X8 = 10). Το κέρδος είναι $$X_8 / X_4 = 10 / 5 = 2$$.

**3<sup>o</sup>**

| **profit.in**                         | **profit.out** |
| ------------------------------------ | ------------- |
| 10 <br> 9 8 7 6 5 4 3 2 1 1 |  1.000 |

*Επεξήγηση παραδείγματος 3:* Η τιμή του προϊόντος μειώνεται σταθερά, κατά συνέπεια δεν είναι δυνατό να προκύψει αληθινό κέρδος. Η μέγιστη τιμή του λόγου είναι $$1$$, αν κάποιος αγοράσει και πουλήσει την ίδια μέρα.

## Όρια

**Mέγιστος χρόνος εκτέλεσης:** $$1$$ sec.
