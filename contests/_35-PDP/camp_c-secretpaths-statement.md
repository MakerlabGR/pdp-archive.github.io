---
layout: statement
codename: secretpaths
---

## Πρόβλημα:

Στο βασίλειο του Φίλιππου Β' του Μακεδόνος υπάρχουν $$N$$ πόλεις και $$N–1$$ μυστικοί δρόμοι, καθένας από
τους οποίους συνδέει αμφίδρομα ένα ζεύγος πόλεων. Από οποιαδήποτε πόλη μπορεί κάποιος να μεταβεί σε
οποιαδήποτε άλλη, χρησιμοποιώντας έναν ή περισσότερους μυστικούς δρόμους.

Καθώς το βασίλειο δέχεται επίθεση, ο Φίλιππος αναγκάζεται να καταστρέψει κάποιους από τους μυστικούς
δρόμους, προκειμένου να εμποδίσει τον εχθρό να κινείται εύκολα μεταξύ των πόλεων. Αναθέτει το έργο
αυτό στον πιστό του σύμβουλο Αριστείδη, αδελφό του Παυσανία του Ορέστη. Συγκεκριμένα, ο Φίλιππος
μπορεί να του ζητήσει:

- να καταστρέψει ένα συγκεκριμένο μυστικό δρόμο, ή
- να απαντήσει στην ερώτηση αν είναι δυνατή η μετάβαση από κάποια πόλη σε κάποια άλλη, μέσω
των μυστικών δρόμων που δεν έχουν ακόμα καταστραφεί.

Αρχικά κανένας από τους μυστικούς δρόμους δεν έχει καταστραφεί.

Προκειμένου η επικοινωνία ανάμεσα στον Φίλιππο και τον Αριστείδη να μην είναι εύκολο να υποκλαπεί από
τον εχθρό, οι παραπάνω δύο ενέργειες που ο Φίλιππος ζητάει από τον Αριστείδη είναι κωδικοποιημένες.
Διαβάστε προσεκτικά την περιγραφή των δεδομένων εισόδου και εξόδου του προβλήματος.

## Αρχεία εισόδου (secretpaths.in):

Η πρώτη γραμμή της εισόδου έχει τρεις ακέραιους αριθμούς χωρισμένους ανά δύο με ένα κενό διάστημα: το
πλήθος $$N$$ των πόλεων, το πλήθος $$M$$ των ενεργειών που ζητά ο Φίλιππος, και μια σταθερά κωδικοποίησης $$K$$
που μπορεί να πάρει τις τιμές 0 ή 1.

Ακολουθούν $$N−1$$ γραμμές που κάθε μία αντιστοιχεί σε ένα μυστικό δρόμο. Κάθε μία από αυτές περιέχει δύο
ακέραιους αριθμούς $$U$$ και $$V$$ χωρισμένους μεταξύ τους με ένα κενό διάστημα, που δηλώνουν ότι αρχικά
υπάρχει ένας μυστικός δρόμος που συνδέει απευθείας τις πόλεις $$U$$ και $$V$$. Θεωρήστε ότι οι πόλεις είναι
αριθμημένες από $$1$$ μέχρι $$N$$.

Ακολουθούν $$M$$ γραμμές που κάθε μία αντιστοιχεί σε μία ενέργεια που ζητάει ο Φίλιππος. Κάθε μία από
αυτές περιέχει ένα χαρακτήρα $$T$$ και δύο ακέραιους αριθμούς $$U$$ και $$V$$. Ο χαρακτήρας είναι ένα από τα
κεφαλαία λατινικά γράμματα “A” ή “Β” και οι αριθμοί $$U$$ και $$V$$ υποδηλώνουν δύο πόλεις.

Όταν ξεκινάει η επικοινωνία μεταξύ Φίλιππου και Αριστείδη, ο χαρακτήρας “A” σημαίνει ότι ο Φίλιππος
ζητάει την καταστροφή του δρόμου μεταξύ των πόλεων $$U$$ και $$V$$. Καμιά φορά, ο Φίλιππος μπερδεύεται και
ζητάει την καταστροφή κάποιου δρόμου που δεν υπήρχε ποτέ, ή που έχει ήδη καταστραφεί — στην
περίπτωση αυτή δεν πρέπει να γίνεται τίποτα. Ο χαρακτήρας “Β” σημαίνει ότι ο Φίλιππος ρωτάει αν αυτή τη
στιγμή είναι δυνατή η μετάβαση από την πόλη $$U$$ στην πόλη $$V$$, με τους υπάρχοντες δρόμους.

Αν η σταθερά κωδικοποίησης $$K$$ έχει την τιμή $$0$$, τότε η σημασία των χαρακτήρων “Α” και “Β” είναι πάντοτε
η παραπάνω. Αν όμως το $$K$$ έχει την τιμή 1, τότε η σημασία των χαρακτήρων “Α” και “Β” αντιστρέφεται
κάθε φορά που ο Αριστείδης απαντάει θετικά σε μια ερώτηση του Φίλιππου.

## Αρχεία εξόδου (secretpaths.out):

Η έξοδος θα πρέπει να περιέχει μία γραμμή για κάθε ενέργεια που ζητάει ο Φίλιππος και που αντιστοιχεί σε
ερώτηση. Η γραμμή θα πρέπει να περιέχει μία λέξη που θα είναι:

- **“yes”**, αν είναι δυνατή η μετάβαση μεταξύ των δύο πόλεων, ή
- **“no”**, αν δεν είναι δυνατή η μετάβαση.

## Παραδείγματα αρχείων εισόδου - εξόδου:

Το δίκτυο των πόλεων και των δρόμων και για τα δύο παραδείγματα που ακολουθούν είναι αυτό που
φαίνεται στο σχήμα δεξιά. Αλλάζουν μόνο η σταθερά κωδικοποίησης $$K$$ και οι ζητούμενες ενέργειες.

<table><tr><th>Παράδειγμα 1</th><th>Παράδειγμα 2</th><th>Δίκτυο Πόλεων</th></tr> <tr><td><table> <tr><th>secretpaths.in</th><th>secretpaths.out</th></tr>
<tr><td> 8 7 0<br>3 5<br>8 4<br>1 6<br>2 8<br>1 8<br>8 3<br>7 3<br>B 5 3<br>A 3 8<br>B 2 7<br>B 1 4<br>A 8 1<br>B 1 4<br>B 6 3<br></td><td>yes<br>no<br>yes<br>no<br>no</td></tr> </table></td>  <td><table> <tr><th>secretpaths.in</th><th>secretpaths.out</th></tr>
<tr><td>8 7 1<br>3 5<br>8 4<br>1 6<br>2 8<br>1 8<br>8 3<br>7 3<br>B 5 3<br>A 3 8<br>A 3 8<br>A 2 4<br>B 2 7<br>B 1 4<br>A 6 7<br></td><td>yes<br>yes<br>no<br>yes<br>no</td></tr> </table></td> <td><br><br>
<img src="/assets/35-camp-d-d1c1.svg" alt="centered image" width="180px" />
</td></tr></table>

*Εξήγηση Παραδειγμάτων*: Στο πρώτο παράδειγμα είναι $$K = 0$$, επομένως η σημασία των χαρακτήρων “Α” και “Β” δεν αλλάζει — το
“Α” συμβολίζει πάντα την καταστροφή δρόμου και το “Β” συμβολίζει πάντα την ερώτηση. Επομένως, οι
εκτελούμενες ενέργειες είναι κατά σειρά:

- Ερώτηση: είναι δυνατή η μετάβαση μεταξύ των πόλεων $$5$$ και $$3$$; Η απάντηση είναι **ναι**.
- Καταστροφή του δρόμου μεταξύ των πόλεων $$3$$ και $$8$$.
- Ερώτηση: είναι δυνατή η μετάβαση μεταξύ των πόλεων $$2$$ και $$7$$; Η απάντηση είναι **όχι**.
- Ερώτηση: είναι δυνατή η μετάβαση μεταξύ των πόλεων $$1$$ και $$4$$; Η απάντηση είναι **ναι**.
- Καταστροφή του δρόμου μεταξύ των πόλεων $$8$$ και $$1$$.
- Ερώτηση: είναι δυνατή η μετάβαση μεταξύ των πόλεων $$1$$ και $$4$$; Η απάντηση τώρα είναι **όχι**.
- Ερώτηση: είναι δυνατή η μετάβαση μεταξύ των πόλεων $$6$$ και $$3$$; Η απάντηση είναι **όχι**.

Στο δεύτερο παράδειγμα είναι $$K = 1$$, επομένως η σημασία των χαρακτήρων “Α” και “Β” αντιστρέφεται κάθε
φορά που μια ερώτηση έχει θετική απάντηση. Οι εκτελούμενες ενέργειες είναι κατά σειρά:

- Ερώτηση: είναι δυνατή η μετάβαση μεταξύ των πόλεων $$5$$ και $$3$$; Η απάντηση είναι **ναι**.
Μετά από αυτή την απάντηση **αντιστρέφεται** η σημασία των “Α” και “Β”.
- Ερώτηση: είναι δυνατή η μετάβαση μεταξύ των πόλεων $$3$$ και $$8$$; Η απάντηση είναι **ναι**.
Μετά από αυτή την απάντηση **αντιστρέφεται** ξανά η σημασία των “Α” και “Β”.
- Καταστροφή του δρόμου μεταξύ των πόλεων $$3$$ και $$8$$.
- Καταστροφή του δρόμου μεταξύ των πόλεων $$2$$ και $$4$$.
Ο δρόμος αυτός δεν υπάρχει, επομένως δε γίνεται τίποτα.
- Ερώτηση: είναι δυνατή η μετάβαση μεταξύ των πόλεων $$2$$ και $$7$$; Η απάντηση είναι **όχι**.
Μετά από αυτή την απάντηση δεν αντιστρέφεται η σημασία των “Α” και “Β”.
- Ερώτηση: είναι δυνατή η μετάβαση μεταξύ των πόλεων $$1$$ και $$4$$; Η απάντηση είναι **ναι**.
Μετά από αυτή την απάντηση **αντιστρέφεται** η σημασία των “Α” και “Β”.
- Ερώτηση: είναι δυνατή η μετάβαση μεταξύ των πόλεων $$6$$ και $$7$$; Η απάντηση είναι **όχι**.

## Περιορισμοί:

 * $$2 \le N \le 100.000$$ και $$2 \le M \le 500.000$$.
 * $$1 \le U \le N$$ και $$1 \le V \le N$$ για κάθε ενέργεια, και επιπλέον $$U \neq V$$.

## Subtasks:

- Για περιπτώσεις ελέγχου συνολικής αξίας $$15\%$$, θα είναι $$K = 0$$ και όλες οι ενέργειες καταστροφής θα
προηγούνται των ερωτήσεων.
- Για περιπτώσεις ελέγχου συνολικής αξίας $$50\%$$, θα είναι $$K = 0$$.
- Για περιπτώσεις ελέγχου συνολικής αξίας $$20\%$$, θα είναι $$N \le 1.000$$ και $$M \le 5.000$$.
- Για περιπτώσεις ελέγχου συνολικής αξίας $$50\%$$, θα είναι $$N \le 30.000$$.
- Για περιπτώσεις ελέγχου συνολικής αξίας $$65\%$$, θα είναι $$N \le 70.000$$.

**Μέγιστος χρόνος εκτέλεσης**: $$1$$ sec.<br>
**Μέγιστη διαθέσιμη μνήμη**: $$256$$ MB.
