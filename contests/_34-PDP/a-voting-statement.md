---
layout: statement
codename: voting
---

Στις εκλογές για την ανάδειξη των δημοτικών αρχών, υπάρχουν $$M$$
υποψήφιοι δήμαρχοι, αριθμημένοι από $$1$$ έως και $$M$$. Στην πόλη σας ψηφίζουν $$N$$ ψηφοφόροι, καθένας από τους οποίους ψηφίζει ακριβώς έναν από τους υποψήφιους δημάρχους. Για να κερδίσει κάποιος υποψήφιος την εκλογή, πρέπει να συγκεντρώσει (αυστηρά) περισσότερες ψήφους από κάθε άλλον υποψήφιο.

Το μεσημέρι της ημέρας των εκλογών έχουν ψηφίσει οι $$K$$ από τους $$N$$ ψηφοφόρους. Η εφορευτική επιτροπή ανυπομονεί να μάθει το αποτέλεσμα και, εντελώς παρατύπως για μια εκλογή με μυστική ψηφοφορία, αποσφραγίζει την κάλπη και ανοίγει τα $$K$$ ψηφοδέλτια που υπάρχουν μέσα.

Βάσει των πρώτων $$K$$ ψήφων που βλέπει η εφορευτική επιτροπή, βοηθήστε τη να υπολογίσει πόσοι από τους υποψήφιους δημάρχους μπορούν να κερδίσουν την εκλογή, μετά φυσικά την ολοκλήρωση της εκλογικής διαδικασίας.


## Πρόβλημα

Να αναπτύξετε ένα πρόγραμμα σε μια από τις γλώσσες του IOI (PASCAL, C, C++, Java) το οποίο θα διαβάζει τον αριθμό των ψηφοφόρων, των υποψηφίων, των ψηφισάντων και το
περιεχόμενο των ψήφων που έχουν υποβληθεί έως τη στιγμή της αποσφράγισης. Το πρόγραμμά σας πρέπει να τυπώνει τον αριθμό των υποψηφίων που έχουν τη δυνατότητα να κερδίσουν την εκλογή.

## Αρχεία Εισόδου:

Τα αρχεία εισόδου με όνομα **voting.in** είναι αρχεία κειμένου με την εξής δομή: Στην πρώτη γραμμή υπάρχουν τρεις ακέραιοι αριθμοί χωρισμένοι ανά δύο με ένα κενό διάστημα: το πλήθος των ψηφοφόρων $$N$$, το πλήθος των υποψηφίων $$M$$, και το πλήθος των ψηφισάντων $$K$$. Στη δεύτερη γραμμή υπάρχουν $$K$$ ακέραιοι αριθμοί χωρισμένοι ανά δύο με ένα κενό διάστημα: οι αριθμοί των υποψηφίων που ψήφισε καθένας από τους $$K$$ πρώτους ψηφοφόρους.

## Αρχεία Εξόδου:

Τα αρχεία εξόδου με όνομα **voting.out** είναι αρχεία κειμένου με την εξής δομή. Περιέχουν ακριβώς μία γραμμή που περιέχει ακριβώς έναν ακέραιο αριθμό: το πλήθος των υποψηφίων δημάρχων που μπορούν να κερδίσουν την εκλογή.

## Περιορισμοί:

 - $$1 \leq K \leq N \leq 1.000.000$$,
 - $$1 \leq M \leq 1.000$$.

## Παραδείγματα Αρχείων Εισόδου - Εξόδου:

**1<sup>o</sup>**

| **voting.in**      | **voting.out** |
| :--- | :--- |
| 10 3 7<br>1 2 2 1 1 3 1 | 2 |

Στο πρώτο παράδειγμα, υπάρχουν τρεις υποψήφιοι δήμαρχοι και δέκα ψηφοφόροι, από τους οποίους έχουν ψηφίσει οι επτά. Αυτή τη στιγμή, ο πρώτος υποψήφιος δήμαρχος έχει συγκεντρώσει $$4$$ ψήφους, ο δεύτερος $$2$$ και ο τρίτος $$1$$. Μόνο ο πρώτος και ο δεύτερος υποψήφιος μπορούν να κερδίσουν την εκλογή.

**2<sup>o</sup>**

| **voting.in**      | **voting.out** |
| :--- | :--- |
| 8 2 8<br>1 2 1 2 2 1 1 2 | 0 |

Στο δεύτερο παράδειγμα, υπάρχουν δύο υποψήφιοι δήμαρχοι και οκτώ ψηφοφόροι, οι οποίοι έχουν όλοι ψηφίσει. Οι δύο υποψήφιοι ισοψηφούν, επομένως κανείς από τους δύο δεν μπορεί να κερδίσει την εκλογή.

## Υποπροβλήματα:

 - Για περιπτώσεις ελέγχου συνολικής αξίας $$20\%$$, θα είναι $$N = K$$, δηλαδή θα έχουν ψηφίσει όλοι οι υποψήφιοι.
 - Για περιπτώσεις ελέγχου συνολικής αξίας $$30\%$$, θα είναι $$M = 2$$, δηλαδή θα υπάρχουν μόνο δύο υποψήφιοι.

## Παρατηρήσεις:

**Μορφοποίηση**: Στην είσοδο αλλά και στην έξοδο, κάθε γραμμή τερματίζει με έναν χαρακτήρα newline.

**Μέγιστος χρόνος εκτέλεσης**: $$1$$ sec.

**Μέγιστη διαθέσιμη μνήμη**: $$64$$ MB.