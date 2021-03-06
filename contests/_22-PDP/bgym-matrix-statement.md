---
layout: statement
codename: matrix
---

Καθηγητής Πληροφορικής ενός Λυκείου, αντιμετώπισε ένα ξαφνικό πρόβλημα. Ο αφοσιωμένος υπολογιστής που καταγράφει τα κείμενα που εμφανίζονται στον «έξυπνο» ηλεκτρονικό πίνακα του εργαστηρίου Πληροφορικής, του «έδειξε» μπλε οθόνη! Mε χρήση ειδικών εργαλείων λογισμικού ανάκτησε σε φυσικό επίπεδο (surface reading) τμήμα των αρχείων του δίσκου, χωρίς όμως τα στοιχεία χρόνου. Έτσι δυστυχώς όλες οι θέσεις που αντιστοιχούσαν στο περιεχόμενο του «έξυπνου» ηλεκτρονικού πίνακα ήταν πλήρεις με χαρακτήρες. (Τους τελευταίους που είχαν αναγραφεί στην κάθε θέση). Για την ανάκτηση των στοιχείων χρόνου, χρειάζεται να βρει τη θέση στη συμβολοσειρά που είναι εγγεγραμμένη στο δίσκο, τουλάχιστον μιας φράσης, που θυμάται ότι είχε γράψει την τελευταία φορά.

**Παράδειγμα:** Στην ευρύτερη συμβολοσειρά `A;KDLJKNF,ΙMBUBBLE SORTDIHEWN GLM FR &JSALJFLMC`, η συμβολοσειρά `BUBBLE SORT` ξεκινά στη 13η θέση.

## Πρόβλημα

Nα αναπτύξετε ένα πρόγραμμα σε μία από τις γλώσσες του ΙΟΙ, το οποίο, αφού διαβάσει τη ζητούμενη συμβολοσειρά, θα εντοπίζει τη θέση του 1<sup>ου</sup> χαρακτήρα της σε μια μεγαλύτερη (αυτή που συνολικά περιέχει ο δίσκος), αν η ζητούμενη περιέχεται πλήρως στην μεγαλύτερη.

## Αρχεία εισόδου

Τα αρχεία εισόδου με όνομα **matrix.in** είναι αρχεία κειμένου με την εξής δομή: Στην πρώτη γραμμή περιέχουν έναν ακέραιο αριθμό $$N$$ ($$2 \leq N \leq 1024$$) τον αριθμό των χαρακτήρων του ζητουμένου κειμένου. Στη δεύτερη γραμμή περιέχεται το αναζητούμενο κείμενο. Στην τρίτη γραμμή περιέχουν έναν ακέραιο αριθμό $$M$$ ($$8 \leq M \leq 65536$$) τον αριθμό των χαρακτήρων του κειμένου μέσα στο οποίο θα γίνει η αναζήτηση. Στην τέταρτη γραμμή υπάρχει το κείμενο μέσα στο οποίο θα γίνει η αναζήτηση.

 * Όλοι οι χαρακτήρες έχουν κωδικοποίηση ANSI (ASCII $$33$$ - $$254$$)

## Αρχεία εξόδου

Τα αρχεία εξόδου με όνομα **matrix.out** είναι αρχεία κειμένου με την εξής δομή: Περιέχουν ακριβώς έναν ακέραιο αριθμό $$P$$ ($$1 \leq P \leq 65534$$). Τον αριθμό, που δείχνει τη θέση στον αρχικό πίνακα, στην οποία εντοπίστηκε η αρχή της ζητούμενης συμβολοσειράς.

## Παραδείγματα αρχείων εισόδου - εξόδου

**1<sup>o</sup>**

| **matrix.in**                         | **matrix.out** |
| ------------------------------------ | ------------- |
| 11 <br> BUBBLE SORT <br> 46 <br> A;KDLJKNF,lMBUBBLE SORTDIHEWN GLM FR &JSALJFLMC | 13 |

**2<sup>o</sup>**

| **matrix.in**                         | **matrix.out** |
| ------------------------------------ | ------------- |
| 5 <br> STACK <br> 67 <br> ?><MNBVCXZ”:LKJHGFDSA}{POIUYTREWQ <br> QWERTYUIOP[]ASDFGHJKL;’ZXCVBNM,./ | F |

## Παρατηρήσεις

 1. Αν δεν βρεθεί σε καμία θέση η ζητούμενη συμβολοσειρά, το αρχείο εξόδου θα έχει ως μόνο περιεχόμενο το χαρακτήρα F.
 2. Τα αρχεία εισόδου έχουν μόνο τους επιτρεπόμενους χαρακτήρες και ως εκ τούτου δεν απαιτείται κανένας έλεγχος ορθότητας.
3. $$N \leq M$$.
4. **Mέγιστος Χρόνος Εκτέλεσης:** $$1$$ sec.