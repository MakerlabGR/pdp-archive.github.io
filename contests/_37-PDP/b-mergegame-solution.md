---
layout: solution
codename: mergegame
---

## Επεξήγηση εκφώνησης

Μας δίνεται ένας πίνακας $$N$$ στοιχείων και σε κάθε βήμα μπορούμε είτε να διαγράψουμε ένα στοιχείο είτε να συγχωνεύσουμε δύο ίδια στοιχεία $$\texttt{x x}$$ σε ένα: το $$\texttt{x+1}$$. Σκοπός είναι να μεγιστοποιήσουμε την τιμή του τελευταίου στοιχείου.

## Λύση σε $$\mathcal{O}(N^2)$$ χρόνο

Θα ξεκινήσουμε με έναν αλγόριθμο που σε κάθε γύρο, κάνει δύο ειδών κινήσεις που περιλαμβάνουν το μικρότερο στοιχείο $$\texttt{y}$$ του πίνακα:
- **Κίνηση 1η:** Αν έχουμε $$\texttt{x y z}$$ με $$\texttt{x} \neq \texttt{y} \neq  \texttt{z}$$, τότε διαγράφουμε το $$\texttt{y}$$. 
- **Κίνηση 2η:** Αν έχουμε $$k$$ συνεχόμενα $$y$$, δηλαδή $$\texttt{x y y \ldots y z}$$ με $$\texttt{x} \neq \texttt{y} \neq  \texttt{z}$$, τότε τα συγχωνεύουμε από τα αριστερά προς τα δεξιά,
<center>
$$\texttt{x }\underbrace{\texttt{y+1 y+1 \ldots y+1}}_{k/2}\texttt{ z}$$. 
</center>
Εφαρμόζοντας αυτές τις παρατηρήσεις στο παράδειγμα της εκφώνησης, βρίσκουμε την βέλτιστη τιμή:

$$
\begin{aligned}
& \texttt{ 1 {\color{red}{0}} 1 2 {\color{royalblue}{0 0}} 3}  \to \\
& \texttt{ {\color{royalblue}{1 1}} 2 {\color{red}{1}} 3} \to \\
& \texttt{ {\color{royalblue}{2 2}} 3} \to \\
& \texttt{ {\color{royalblue}{3 3}} } \to \\
& \texttt{ 4 }.
\end{aligned}$$

Διαισθητικά, ο λόγος που μπορούμε να κάνουμε τις κινήσεις του πρώτου είδους είναι ότι για να συγχωνεύσουμε το $$\texttt{y}$$, θα πρέπει να διαγράψουμε το $$\texttt{z}$$ ή το $$\texttt{x}$$ (ή μία μεγαλύτερη τιμή που έχει προκύψει από συγχώνευσή τους). Αλλά δεν μας συμφέρει να διαγράψουμε μία μεγαλύτερη τιμή και να κρατήσουμε μία μικρότερη.

Για τις κινήσεις του δεύτερου είδους, από την παραπάνω αιτιολόγηση δεν μας συμφέρει να δημιουργήσουμε τριάδες της μορφής $$\texttt{y+1 y y+1}$$, γιατί το $$\texttt{y}$$ θα διαγραφεί. Επομένως, μεγιστοποιούμε το πλήθος των $$\texttt{y+1}$$ και αν κάποια από αυτά είναι περιττά θα αφαιρεθούν στους επόμενους γύρους.

Πηγαίνοντας από τα αριστερά προς τα δεξιά μπορούμε να υλοποιήσουμε τις κινήσεις ενός γύρου σε γραμμικό χρόνο. Επίσης μπορούμε να χρησιμοποιώντας τον ίδιο πίνακα, καθώς το μέγεθος του μικραίνει, άρα αν έχουμε δυο δείκτες στον πίνακα αυτό, έναν για την ανάγνωση και ένα για την εγγραφή, δεν θα επικαλυφθούν. Αφού σε κάθε γύρο, φεύγει τουλάχιστον ένα στοιχείο, μπορεί να υπάρχουν το πολύ $$N - 1$$ γύροι. Άρα συνολικά ο αλγόριθμος χρειάζεται $$\mathcal{O}(N^2)$$ χρόνο. 

Ο παρακάτω αλγόριθμος υλοποιεί αυτή την λύση και περνάει όλα τα testcases με $$N \leq 10.000$$.

{% include code.md solution_name='mergegame_n2.cc'  %}

**Σημείωση:** Η μεγαλύτερη τιμή μπορεί να αυξηθεί το πολύ κατά $$\log_2 N + 1$$, επομένως οι τιμές χωράνε σε ``long``. 

## Βέλτιστη λύση σε $$\mathcal{O}(N)$$ χρόνο

Για την βέλτιστη λύση, θα κρατάμε την ακολουθία σε φθίνουσα σειρά και θα προσθέτουμε τα στοιχεία ένα ένα από τα αριστερά προς τα δεξιά. Για κάθε στοιχείο που προσθέτουμε, θα αφαιρούμε όλα τα μικρότερα στοιχεία στα δεξιά της υπάρχουσας ακολουθίας. Έπειτα, όσο υπάρχουν ίσα στοιχεία θα κάνουμε συγχωνεύσεις. Με αυτόν τον τρόπο διατηρείται η μονοτονία της ακολουθίας. 

Στο παράδειγμα της εκφώνησης, η διαδικασία έχει ως εξής:

$$
\begin{aligned}
& \texttt{ {\color{seagreen}{1}} }  \to \\
& \texttt{ 1 {\color{seagreen}{0}} }  \to \\
& \texttt{ 1 0 {\color{seagreen}{1}} }  \to \\
& \texttt{ 1 1 }  \to \\
& \texttt{ 2 }  \to \\
& \texttt{ 2 {\color{seagreen}{2}} }  \to \\
& \texttt{ 3 }  \to \\
& \texttt{ 3 {\color{seagreen}{0}} }  \to \\
& \texttt{ 3 0 {\color{seagreen}{0}} }  \to \\
& \texttt{ 3 1 }  \to \\
& \texttt{ 3 1 {\color{seagreen}{3}} }  \to \\
& \texttt{ 3 3 }  \to \\
& \texttt{ 4 }.
\end{aligned}$$

Διαισθητικά, ο λόγος που αυτή η μέθοδος δουλεύει είναι παρόμοιος με τον λόγο της πρώτης μεθόδου. 
 * Αν έχουμε $$\texttt{x} > \texttt{y} < \texttt{z}$$, τότε το $$\texttt{y}$$ δεν μας συμφέρει να χρησιμοποιηθεί γιατί πρώτα θα πρέπει να διαγραφεί ένα από τα γειτονικά του στοιχεία που είναι μεγαλύτερα. 
 * Για τις συγχωνεύσεις που γίνονται, καθώς τις κάνουμε από αριστερά προς τα δεξιά, πάλι θα κάνουμε το μέγιστο πλήθος από αυτές .

Η παρακάτω υλοποίηση κρατάει την ακολουθία σε μία στοίβα. Κάθε στοιχείο θα μπει και θα βγει το πολύ μία φορά από την στοίβα. Επομένως, ο αλγόριθμος χρειάζεται $$\mathcal{O}(N)$$ χρόνο και περνάει όλα τα testcases. 

 {% include code.md solution_name='mergegame_stack.cc'  %}

