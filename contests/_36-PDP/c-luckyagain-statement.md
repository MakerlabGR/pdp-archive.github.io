---
layout: statement
codename: luckyagain
---

Για τις ανάγκες αυτής της άσκησης, θα λέμε ότι ένας θετικός ακέραιος αριθμός είναι **τυχερός** αν ισχύουν τα εξής:
 - έχει άρτιο πλήθος ψηφίων, και
 - το άθροισμα των πρώτων μισών ψηφίων του είναι ίσο με το άθροισμα των δεύτερων μισών ψηφίων του.

Για παράδειγμα:
 - Ο αριθμός $$123$$ δεν είναι τυχερός, γιατί το πλήθος των ψηφίων του είναι $$3$$, που δεν είναι άρτιος αριθμός.
 - Ο αριθμός $$153871$$ δεν είναι τυχερός, γιατί το άθροισμα των πρώτων μισών ψηφίων του είναι $$1+5+3=9$$, ενώ το άθροισμα των δεύτερων μισών ψηφίων του είναι $$8+7+1=16$$.
 - Ο αριθμός $$3791$$ είναι τυχερός, γιατί το άθροισμα των πρώτων μισών ψηφίων του είναι $$3+7=10$$ και το άθροισμα των δεύτερων μισών ψηφίων του είναι $$9+1=10$$.

Σας δίνονται $$N$$ χαρτάκια, καθένα από τα οποία έχει γραμμένο πάνω του έναν αριθμό. Με πόσους διαφορετικούς τρόπους μπορείτε να κολλήσετε δύο διαφορετικά χαρτάκια (δηλαδή να ενώσετε τα ψηφία των αριθμών που είναι γραμμένοι σε αυτά), έτσι ώστε να σχηματιστεί τυχερός αριθμός;

## Πρόβλημα:
Να αναπτύξετε ένα πρόγραμμα σε μια από τις γλώσσες PASCAL, C, C++, Java το οποίο θα διαβάζει την τιμή του $$N$$ και τους αριθμούς που είναι γραμμένοι πάνω στα $$N$$ χαρτάκια, και θα εκτυπώνει το πλήθος των διαφορετικών τρόπων που μπορούν να σχηματιστούν τυχεροί αριθμοί κολλώντας δύο χαρτάκια.

## Αρχεία εισόδου:
Το αρχείο εισόδου με όνομα **luckyagain.in** είναι αρχείο κειμένου που αποτελείται από δύο γραμμές. Η πρώτη γραμμή περιέχει έναν ακέραιο αριθμό $$N$$, το πλήθος των χαρτιών. Η δεύτερη γραμμή περιέχει $$N$$ ακέραιουςαριθμούς, χωρισμένους ανά δύο με ένα κενό διάστημα.

## Αρχεία εξόδου:
Το αρχείο εξόδου με όνομα **luckyagain.out** είναι αρχείο κειμένου που περιέχει μία μόνο γραμμή με έναν ακέραιο αριθμό: το πλήθος των διαφορετικών τρόπων που μπορούν να σχηματιστούν τυχεροί αριθμοί κολλώντας δύο χαρτάκια.

## Παραδείγματα

**1<sup>o</sup>**

| **luckyagain.in**      | **luckyagain.out** |
| :--- | :--- |
| 7<br>75038 92 1 728 83 5 423 | 6 |

*Εξήγηση:* Μπορούν να σχηματιστούν τυχεροί αριθμοί κολλώντας δύο χαρτάκια με $$6$$ διαφορετικούς τρόπους.
 - κολλώντας το $$1$$ και το $$423$$ προκύπτει ο τυχερός αριθμός $$1423$$,
 - κολλώντας το $$75038$$ και το $$1$$ προκύπτει ο τυχερός αριθμός $$750381$$,
 - κολλώντας το $$92$$ και το $$83$$ προκύπτει ο τυχερός αριθμός $$9283$$,
 - κολλώντας το $$728$$ και το $$1$$ προκύπτει ο τυχερός αριθμός $$7281$$,
 - κολλώντας το $$83$$ και το $$92$$ προκύπτει ο τυχερός αριθμός $$8392$$, και
 - κολλώντας το $$423$$ και το $$75038$$ προκύπτει ο τυχερός αριθμός $$42375038$$.
 
**2<sup>o</sup>**
 
| **luckyagain.in**      | **luckyagain.out** |
| :--- | :--- |
| 6<br>265 10387 392 981 6986 74 | 0 |

*Εξήγηση:* Δεν μπορεί να σχηματιστεί κανένας τυχερός αριθμός.

**3<sup>o</sup>**

| **luckyagain.in**      | **luckyagain.out** |
| :--- | :--- |
| 5<br>17 62 35 44 80 | 20 |

*Εξήγηση:* Κολλώντας οποιαδήποτε χαρτάκια προκύπτει πάντα τυχερός αριθμός.

## Περιορισμοί:
 - $$1 \leq N \leq 1.000.000$$,
 - Οι αριθμοί θα είναι το πολύ εννιαψήφιοι και το πρώτο ψηφίο θα είναι πάντα μη μηδενικό.
 - Για περιπτώσεις ελέγχου συνολικής αξίας 30%, θα είναι $$N \leq 1.000$$.
 - Για περιπτώσεις ελέγχου συνολικής αξίας 50%, οι αριθμοί θα είναι πενταψήφιοι ή εξαψήφιοι.
 
**Προσοχή!** Η απάντηση μπορεί να υπερβαίνει το $$2^{32}$$. Επίσης, φροντίστε να διαβάζετε την είσοδο και να εκτυπώνετε την έξοδο αποδοτικά, ειδικά αν προγραμματίζετε σε C++ ή Java.

**Μορφοποίηση:** Στην έξοδο, όλες οι γραμμές τερματίζουν με ένα χαρακτήρα newline.<br>
**Μέγιστος χρόνος εκτέλεσης:** 2 sec.<br>
**Μέγιστη διαθέσιμη μνήμη:** 128 MB.