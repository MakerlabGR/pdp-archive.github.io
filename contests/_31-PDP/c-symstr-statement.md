---
layout: statement
codename: symstr
---

Μία μη κενή συμβολοσειρά $$S$$ θα λέμε ότι είναι συμμετρική όταν είναι η συνένωση (παράθεση) μίας άλλης συμβολοσειράς $$W$$ με τον εαυτό της, δηλαδή όταν $$S = WW$$. Θα λέμε επίσης ότι η συμβολοσειρά $$W$$ είναι το μισό της $$S$$. Για παράδειγμα, η συμβολοσειρά $$“\text{hellohello}”$$ είναι συμμετρική (και το μισό της είναι η συμβολοσειρά $$“\text{hello}”$$) ενώ αντίθετα οι συμβολοσειρές $$“\text{abca}”$$ και $$“\text{abcab}”$$ δεν είναι συμμετρικές. Προφανώς, τα μήκη των συμμετρικών συμβολοσειρών είναι άρτιοι αριθμοί (διπλάσιοι του μήκους των αντίστοιχων μισών). Έστω μία συμβολοσειρά $$S$$ της οποίας το μήκος είναι περιττός αριθμός. Ζητείται να βρεθεί αν από την $$S$$ μπορεί να αφαιρεθεί ένας ακριβώς χαρακτήρας έτσι ώστε η συμβολοσειρά που θα προκύψει να είναι συμμετρική. Επιπλέον, ζητείται να βρεθεί αν αυτό μπορεί να γίνει με μοναδικό τρόπο ή αν με διαφορετικές αφαιρέσεις μπορούν να προκύψουν περισσότερες διαφορετικές συμμετρικές συμβολοσειρές.

## Πρόβλημα

Να αναπτύξετε ένα πρόγραμμα σε μια από τις γλώσσες του *IOI (PASCAL, C, C++, Java)* το οποίο θα διαβάζει μερικές τέτοιες συμβολοσειρές και για κάθε μία θα κάνει ένα από τα ακόλουθα:
- Αν με αφαίρεση ενός χαρακτήρα προκύπτει μία μοναδική συμμετρική συμβολοσειρά, τότε θα εκτυπώνει το μισό αυτής της συμβολοσειράς.
- Αν με αφαίρεση ενός χαρακτήρα μπορούν να προκύψουν περισσότερες διαφορετικές συμμετρικές συμβολοσειρές, τότε θα εκτυπώνει τον κωδικό αριθμό $$1$$ (ένα).
- Αν με την αφαίρεση κανενός χαρακτήρα δεν προκύπτει συμμετρική συμβολοσειρά, τότε θα εκτυπώνει τον κωδικό αριθμό $$0$$ (μηδέν).

## Αρχεία Εισόδου:
Το αρχείο εισόδου με όνομα **symstr.in** είναι αρχείο κειμένου με την εξής δομή. Η πρώτη γραμμή έχει δύο ακέραιους αριθμούς $$T$$ και $$N$$, χωρισμένους με ένα κενό διάστημα. Ο αριθμός $$T$$ θα παριστάνει το πλήθος των συμβολοσειρών που θα ακολουθήσουν, ενώ ο αριθμός $$N$$ θα είναι περιττός και θα παριστάνει το μήκος κάθε συμβολοσειράς. Κάθε μία από τις επόμενες $$T$$ γραμμές θα περιέχει μία συμβολοσειρά αποτελούμενη από $$N$$ κεφαλαία γράμματα του λατινικού αλφαβήτου.

## Αρχεία Εξόδου:
Το αρχείο εξόδου με όνομα **symstr.out** είναι αρχείο κειμένου με την εξής δομή. Έχει ακριβώς $$T$$ γραμμές που κάθε μία περιέχει την απάντηση στην αντίστοιχη συμβολοσειρά της εισόδου (βλ. παραπάνω).

## Παραδείγματα Αρχείων Εισόδου - Εξόδου:

**1<sup>o</sup>**

| **symstr.in**      | **symstr.out** |
| :--- | :--- |
| 4 9 <br> ABCKDABCD <br> ABCDEFGHI <br> ABABABABA <br> AAAAAAAAA | ABCD <br> 0 <br> 1 <br> AAAA |

Εξήγηση: Στο παράδειγμα υπάρχουν $$4$$ συμβολοσειρές που κάθε μία έχει $$9$$ γράμματα. Για κάθε συμβολοσειρά, η απάντηση εξηγείται παρακάτω:
- Από τη συμβολοσειρά $$“\text{ABCKDABCD}”$$ αν αφαιρεθεί το γράμμα $$“K”$$ τότε προκύπτει η συμμετρική συμβολοσειρά $$“\text{ABCDABCD}”$$ που το μισό της είναι $$“\text{ABCD}”$$ — αυτή είναι η μοναδική συμμετρική συμβολοσειρά που μπορεί να προκύψει από την αφαίρεση ενός χαρακτήρα.
- Από τη συμβολοσειρά $$“\text{ABCDEFGHI}”$$ όποιο γράμμα και αν αφαιρεθεί δεν προκύπτει συμμετρική συμβολοσειρά, άρα εκτυπώνεται $$“0”$$ (μηδέν).
- Από τη συμβολοσειρά $$“\text{ABABABABA}”$$ αν αφαιρεθεί το πρώτο $$“\text{A}”$$ τότε προκύπτει η συμμετρική συμβολοσειρά $$“\text{BABABABA}”$$, ενώ αν αφαιρεθεί το τελευταίο $$“\text{A}”$$ τότε προκύπτει η συμμετρική συμβολοσειρά $$“\text{ABABABAB}”$$. Άρα με αφαίρεση ενός χαρακτήρα δεν προκύπτει μοναδική συμμετρική συμβολοσειρά και γι’ αυτό εκτυπώνεται $$“1”$$ (ένα).
- Από τη συμβολοσειρά $$“\text{AAAAAAAAA}”$$ όποιο γράμμα και αν αφαιρεθεί προκύπτει η συμμετρική συμβολοσειρά $$“\text{AAAAAAAA}”$$, της οποίας το μισό είναι $$“\text{AAAA}”$$.

## Περιορισμοί

- Για περιπτώσεις ελέγχου συνολικής αξίας $$50%$$, θα είναι: $$1 \leq Τ \leq 10, 3 \leq N \leq 10.000$$ και $$N$$ περιττός αριθμός.
- Για περιπτώσεις ελέγχου συνολικής αξίας $$70%$$, δε θα χρειαστεί να εκτυπώσετε τον κωδικό $$“1”$$ (ένα) — δε χρειάζεται έλεγχος μοναδικότητας.
- Για περιπτώσεις ελέγχου συνολικής αξίας $$100%$$, θα είναι: $$1 \leq T \leq 10, 3 \leq N \leq 1.000.000$$ και $$N$$ περιττός αριθμός.

Προσοχή! Φροντίστε να διαβάζετε την είσοδο και να εκτυπώνετε την έξοδο αποδοτικά, ειδικά αν προγραμματίζετε σε C++ ή Java.

## Παρατηρήσεις:

- **Μορφοποίηση**: Στην είσοδο αλλά και στην έξοδο, κάθε γραμμή τερματίζει με έναν χαρακτήρα newline.
- **Μέγιστος χρόνος εκτέλεσης**: $$1$$ sec.
- **Μέγιστη διαθέσιμη μνήμη**: $$64$$ MB.
