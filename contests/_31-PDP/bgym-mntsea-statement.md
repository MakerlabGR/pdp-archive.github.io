---
layout: statement
codename: mntsea
---

∆υο φίλοι προγραμματίζουν να κάνουν μαζί διακοπές. Επειδή στον έναν αρέσουν περισσότερο οι διακοπές στο βουνό, ενώ στον άλλον οι διακοπές στη θάλασσα, αποφασίζουν να περάσουν τις μισές μέρες των διακοπών τους στο βουνό και τις μισές στη θάλασσα. Επικοινωνούν με τον ταξιδιωτικό τους πράκτορα και, καθώς οι οικονομίες τους είναι μετρημένες, του ζητάνε να βρει για κάθε μέρα του χρόνου το οικονομικότερο δωμάτιο που μπορούν να κλείσουν. Άλλες μέρες αυτό βρίσκεται στο βουνό και άλλες στη θάλασσα.

Βρείτε με πόσους διαφορετικούς τρόπους οι δύο φίλοι μπορούν να πάνε διακοπές για ένα συνεχόμενο διάστημα ημερών, μένοντας κάθε μέρα στο οικονομικότερο δωμάτιο και με τέτοιο τρόπο ώστε τις μισές μέρες να είναι στο βουνό και τις μισές στη θάλασσα.

## Πρόβλημα
Αναπτύξτε ένα πρόγραμμα σε μια από τις γλώσσες του IOI (PASCAL, C, C++, Java) το οποίο, αφού διαβάσει τη θέση του οικονομικότερου δωματίου για κάθε μέρα του χρονικού διαστήματος που μας ενδιαφέρει, θα εκτυπώνει το πλήθος των διαφορετικών τρόπων με τους οποίους οι δύο φίλοι μπορούν να πάνε διακοπές.

## Αρχεία Εισόδου:
Τα αρχεία εισόδου με όνομα **mntsea.in** είναι αρχεία κειμένου με την εξής δομή: Στην πρώτη γραμμή υπάρχει ένας ακέραιος αριθμός **N** (όπου $$1 \leq N \leq 1.000.000$$), το πλήθος των ημερών στο χρονικό
διάστημα που μας ενδιαφέρει. Η επόμενη γραμμή περιέχει $$N$$ χαρακτήρες, καθένας από τους οποίους είναι **‘m’** (mountain, βουνό) ή **‘s’** (sea, θάλασσα). Κάθε χαρακτήρας παριστάνει τη θέση του οικονομικότερου δωματίου για την αντίστοιχη ημέρα.

## Αρχεία Εξόδου:
Τα αρχεία εξόδου με όνομα **mntsea.out** είναι αρχεία κειμένου που αποτελούνται από μία μόνο γραμμή με έναν μόνο ακέραιο αριθμό: το πλήθος των διαφορετικών τρόπων με τους οποίους οι δύο φίλοι μπορούν να πάνε διακοπές.

## Παραδείγματα Αρχείων Εισόδου - Εξόδου:

**1<sup>o</sup>**

| **mntsea.in**      | **mntsea.out** |
| :--- | :--- |
| 5 <br> msmsm | 6 |

Επεξήγηση: Οι δύο φίλοι μπορούν να πάνε με τέσσερις τρόπους διακοπές διάρκειας δύο ημερών και με δύο τρόπους διακοπές διάρκειας τεσσάρων ημερών.

**2<sup>o</sup>**

| **mntsea.in**      | **mntsea.out** |
| :--- | :--- |
| 10 <br> msmsmssmmm | 16 |

**3<sup>o</sup>**

| **mntsea.in**      | **mntsea.out** |
| :--- | :--- |
| 10 <br> ssssssssss | 0 |

Επεξήγηση: Δεν υπάρχει κανένας τρόπος οι δύο φίλοι να πάνε διακοπές, καθώς δεν υπάρχει κανένα οικονομικό δωμάτιο στο βουνό.

## Παρατηρήσεις:

**Μορφοποίηση**: Στην είσοδο αλλά και στην έξοδο, κάθε γραμμή τερματίζει με έναν χαρακτήρα newline.

**Μέγιστος χρόνος εκτέλεσης**: $$1$$ sec.

**Μέγιστη διαθέσιμη μνήμη**: $$64$$ MB.