---
layout: statement
codename: amazmosq
---

Τα κουνούπια του Αμαζονίου είναι λιγότερο διάσημα από εκείνα του Δυτικού Νείλου. Ίσως γιατί ζουν μόνο μία μέρα. Πολλαπλασιάζονται όμως με πολύ ταχύ ρυθμό. Ξεκινάμε με $$S$$ κουνούπια τη μέρα $$0$$. Κατά τη διάρκεια μιας μέρας, κάθε κουνούπι τσιμπάει έναν άνθρωπο. Στη συνέχεια, γεννά $$K$$ νέα κουνούπια και αμέσως μετά πεθαίνει.

Βρείτε πόσα τσιμπήματα θα έχει δεχθεί το ανθρώπινο γένος συνολικά, στο τέλος της $$N$$-οστής μέρας;

Ο αριθμός των τσιμπημάτων θα είναι πολύ μεγάλος, οπότε ζητείται να βρείτε το υπόλοιπο της διαίρεσής του δια $$20.140.409$$.

## Αρχεία Εισόδου (amazmosq.in):

Η είσοδος θα αποτελείται από μία γραμμή που θα περιέχει τρεις φυσικούς αριθμούς, $$S$$, $$K$$, $$N$$, χωρισμένους ανά δύο με ένα κενό διάστημα.

## Αρχεία Εξόδου (amazmosq.out):

Η έξοδος πρέπει να αποτελείται από μία γραμμή που να περιέχει ένα φυσικό αριθμό: το υπόλοιπο της διαίρεσης του πλήθους των τσιμπημάτων δια $$20.140.409$$.

## Παραδείγματα Αρχείων Εισόδου - Εξόδου:

**1<sup>o</sup>**

| **amazmosq.in**      | **amazmosq.out** |
| :--- | :--- |
| 1 2 12 | 8191 |


**Εξήγηση 1<sup>ου</sup> παραδείγματος**: Η εξέλιξη των κουνουπιών είναι:

ημέρα | $$0$$ | $$1$$ | $$2$$ | $$3$$ | $$4$$ | $$5$$ | $$6$$ | $$7$$ | $$8$$ | $$9$$ | $$10$$ | $$11$$ | $$12$$
κουνούπια | $$1$$ | $$2$$ | $$4$$ | $$8$$ | $$16$$ | $$32$$ | $$64$$ | $$128$$ | $$256$$ | $$512$$ | $$1.024$$ | $$2.048$$ | $$4.096$$

Επομένως τα συνολικά τσιμπήματα είναι $$1 + 2 + 4 + 8 + 16 + 32 + 64 + 128 + 256 + 512 + 1.024 + 2.048 + 4.096 = 8.191$$.

**2<sup>o</sup>**

| **amazmosq.in**      | **amazmosq.out** |
| :--- | :--- |
| 3 42 5 | 18968698 |

**Εξήγηση 2<sup>ου</sup> παραδείγματος**: Η εξέλιξη των κουνουπιών είναι:

ημέρα | $$0$$ | $$1$$ | $$2$$ | $$3$$ | $$4$$ | $$5$$
κουνούπια | $$3$$ | $$126$$ | $$5.292$$ | $$222.264$$ | $$9.335.088$$ | $$392.073.696$$

Επομένως τα συνολικά τσιμπήματα είναι $$3 + 126 + 5.292 + 222.264 + 9.335.088 + 392.073.696 = 401.636.469$$.

## Περιορισμοί

 - $$1 \leq S \leq 1.000$$.
 - $$1 \leq K \leq 100$$.
 - $$0 \leq N \leq 50.000.000$$.
 - Όριο χρόνου εκτέλεσης: $$1$$ sec.
 - Όριο μνήμης: $$64$$ MB.