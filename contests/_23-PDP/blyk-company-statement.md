---
layout: statement
codename: snow_run
---

Πρόσφατη έρευνα ενός περιοδικού, υποστηρίζει ότι η απόδοση των εργαζόμενων σε μία επιχείρηση, βελτιώνεται όταν αισθάνονται ότι δεν υπάρχουν διακρίσεις αναφορικά με το φύλο μέσα σε αυτήν. Η έρευνα μάλιστα επισημαίνει, ότι αυτή η «αίσθηση» δεν καθορίζεται από το πλήθος των γυναικών και των ανδρών, αλλά από την διαφορά στο πλήθος των σχέσεων (προϊστάμενος - υφιστάμενος) όπου ο προϊστάμενος είναι γυναίκα και ο υφιστάμενος άνδρας, και στο αντίστοιχο πλήθος, όπου ο προϊστάμενος είναι άνδρας και ο υφιστάμενος γυναίκα. Πιο συγκεκριμένα, κάθε εργαζόμενος στην επιχείρηση, εκτός του διευθυντή, έχει έναν άμεσο προϊστάμενο, ο οποίος τον επιβλέπει. Για κάθε ακολουθία εργαζομένων, όπου ο κάθε εργαζόμενος είναι άμεσος προϊστάμενος του επόμενού του, ο εργαζόμενος που βρίσκεται στην αρχή της ακολουθίας είναι προϊστάμενος κάθε άλλου εργαζόμενου στην ακολουθία. Έτσι αν η ιεραρχία της επιχείρησης αποτυπωθεί σε ένα δέντρο με ρίζα το διευθυντή, ένας εργαζόμενος $$x$$ είναι προϊστάμενος κάθε άλλου εργαζόμενου στο υποδέντρο με ρίζα τον εργαζόμενο $$x$$.

Η έρευνα θεωρεί τα ζευγάρια εργαζόμενων διαφορετικού φύλου όπου ο πρώτος είναι προϊστάμενος του δεύτερου, όχι μόνο άμεση σχέση αλλά σε ολόκληρη την ιεραρχία. Ειδικότερα θεωρείται το πλήθος $$r\_f$$ των ζευγαριών, όπου ο προϊστάμενος (σε όλη την ιεραρχία) είναι γυναίκα και το πλήθος $$r\_m$$ των ζευγαριών, όπου ο προϊστάμενος (σε όλη την ιεραρχία) είναι άνδρας. Η έρευνα υποστηρίζει ότι οι εργαζόμενοι λειτουργούν αποδοτικότερα όταν η διαφορά $$r\_m - r\_f$$ προσεγγίζει το $$0$$.

## Πρόβλημα

Να αναπτύξετε ένα πρόγραμμα σε μια από τις γλώσσες του ΙΟΙ το οποίο, αφού διαβάσει το συνολικό αριθμό των εργαζομένων μιας επιχείρησης και για κάθε εργαζόμενο τον αριθμό (θέση στο αρχείο) του προϊσταμένου του και το φύλο του, θα υπολογίζει τη διαφορά ζευγαριών, διαφορετικού φύλου, που ο προϊστάμενος είναι γυναίκα από τα ζευγάρια που ο προϊστάμενος είναι άνδρας.

## Αρχεία εισόδου

Τα αρχεία εισόδου με όνομα **company.in** είναι αρχεία κειμένου με την εξής δομή: Η πρώτη γραμμή έχει έναν ακέραιο αριθμό $$N$$, $$1 ≤ N ≤ 5.000$$ το πλήθος των εργαζομένων της επιχείρησης. (Οι εργαζόμενοι λοιπόν αριθμούνται από 1 μέχρι N). Στην i-οστή από τις επόμενες N γραμμές δίνεται o αριθμός του άμεσου προϊσταμένου του i-οστού εργαζομένου. Για το διευθυντή, ο αριθμός άμεσου προϊσταμένου είναι 0. Στην ίδια γραμμή (i-οστή) ακολουθεί ένα κενό και το φύλο του i-οστού εργαζομένου (m για άντρα, f για γυναίκα). Να θεωρήσετε ότι κανένας εργαζόμενος δεν είναι προϊστάμενος του εαυτού του και ότι ο διευθυντής είναι προϊστάμενος κάθε άλλου εργαζομένου (δηλαδή στην ιεραρχία της επιχείρησης αντιστοιχεί σε ένα δέντρο με ρίζα τον διευθυντή).

## Αρχεία εξόδου

Τα αρχεία εξόδου με όνομα **company.out** είναι αρχεία κειμένου με την εξής δομή: Στη μοναδική τους γραμμή έχουν έναν μόνο ακέραιο αριθμό $$D$$, $$-5.000 < D < 5.000$$. Ο αριθμός αυτός αντιστοιχεί στη διαφορά $$r\_m - r\_f$$.

## Παραδείγματα αρχείων εισόδου - εξόδου

**1<sup>o</sup>**

| **snow_run.in**                         | **snow_run.out** |
| ------------------------------------ | ------------- |
| 5 <br> 4 m <br> 3 f <br> 4 m <br> 0 f <br> 1 m | -2 |

![Παράδειγμα 1](/assets/23-pdp-b-company-example.png){:width="350px"}

**2<sup>o</sup>**

| **snow_run.in**                         | **snow_run.out** |
| ------------------------------------ | ------------- |
| 10 <br> 3 f <br> 4 f <br> 0 m <br> 3 m <br> 2 m <br> 1 m <br> 4 m <br> 1 m <br> 2 m <br> 1 f | 0 |

**3<sup>o</sup>**

| **snow_run.in**                         | **snow_run.out** |
| ------------------------------------ | ------------- |
| 10 <br> 3 m <br> 4 m <br> 0 f <br> 3 m <br> 2 f <br> 1 m <br> 4 f <br> 1 m <br> 2 f <br> 1 f |  1 |

## Παρατηρήσεις

 1. **Μέγιστος χρόνος εκτέλεσης:** $$1$$ sec.
 2. **Μέγιστη διαθέσιμη μνήμη:** $$64$$ MB.
 3. Όλες οι γραμμές τελειώνουν με new_line.