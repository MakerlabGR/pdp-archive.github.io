---
layout: solution
codename: bureaucracy
---

## Επεξήγηση εκφώνησης

Έχουμε έναν κατευθυνόμενο γράφο $$N$$ κόμβων με ακμές που έχουν βάρη. Κάποιοι κόμβοι έχουν οριστεί ως αρχικοί $$S$$ (πράσινο χρώμα στο σχήμα) και 
κάποιοι κόμβοι ως τελικοί $$D$$ (κόκκινο χρώμα στο σχήμα). Ενδέχεται κάποιοι κόμβοι να είναι ταυτόχρονα αρχικοί και τελικοί (κόκκινο+πράσινο χρώμα στο σχήμα). Ας υποθέσουμε ότι ξεκινάμε από έναν αρχικό κόμβο $$S_i$$ για να φτάσουμε σε έναν τελικό 
κόμβο $$D_j$$ και στο μονοπάτι που ακολουθούμε το μέγιστο βάρος που θα συναντήσουμε το ονομάζουμε $$L_j$$ και τον αριθμό των ακμών που θα προσπεράσουμε τον ονομάζουμε $$C_j$$. 

{: .center_image}
![Παράδειγμα εκφώνησης](/assets/36-c-bureaucracy-sample1.svg){:width="280px"}

Για να φτάσουμε στον κόμβο $$D_j$$ μπορούμε να ξεκινήσουμε από όποιον αρχικό κόμβο $$S_i$$ υπάρχει μονοπάτι από τον $$S_i$$ προς τον $$D_j$$. Σύμφωνα με την εκφώνηση, υπάρχει πάντα μονοπάτι που καταλήγει σε κάθε τελικό κόμβο ξεκινώντας από κάποιον ή κάποιους αρχικούς. 

Ζητείται να φτάσουμε σε *όλους* τους τελικούς κόμβους με το ελάχιστο δυνατό $$L$$ (δηλαδή το μέγιστο βάρος ακμής από όλα τα μονοπάτια που θα ακολουθήσουμε: $$L=\min_{j=1}^N {L_j}$$). Επιπλέον, για το ελάχιστο αυτό $$L$$, ζητείται να υπολογίσουμε πόσες ακμές συνολικά προσπεράσαμε: $$C=\sum_{j=1}^{N} C_j$$.  

## Βέλτιστη λύση με δυαδική αναζήτηση και αναζήτηση κατά πλάτος

Έστω ότι $$L_{limit}$$ το μέγιστο βάρος των ακμών που επιτρέπεται να διανύσουμε στην προσπάθεια μας να φτάσουμε από τους αρχικούς κόμβους σε όλους τους τελικούς κόμβους. Προφανώς όσες ακμές έχουν βάρος μεγαλύτερο από $$L_{limit}$$ θεωρούνται απαγορευμένες και θα αγνοήσουμε την ύπαρξη τους. 

**Παρατήρηση 1:** Αν μηδενίσουμε το $$L_{limit}$$ τότε θα απαγορευτούν όλες οι ακμές και δεν θα καταφέρουμε να φτάσουμε στους τελικούς κόμβους.  
Όσο αυξάνουμε το $$L_{limit}$$ επιτρέπουμε περισσότερες ακμές μέχρι που σε κάποια κομβική τιμή του (και σε όλες τις μεγαλύτερες τιμές), θα *καταφέρουμε να φτάσουμε σε όλους τους τελικούς κόμβους*. Επομένως, η αναζήτηση της κομβικής αυτής τιμής μπορεί να γίνει αποδοτικά με **δυαδική αναζήτηση** στα δυνατά $$L_{limit}$$, δηλαδή στα βάρη των ακμών που μας δίνονται.    

**Παρατήρηση 2:** Για να ελέγξουμε την εφικτότητα να φτάσουμε όλους τους κόμβους χρησιμοποιώντας μόνο ακμές με βάρος το πολύ $$L_{limit}$$, μπορούμε να κάνουμε αναζήτηση κατά βάθος (DFS) ή **αναζήτηση κατά πλάτος ([BFS](https://cp-algorithms.com/graph/breadth-first-search.html))**. Στην περίπτωση μας που ζητείται επιπλέον να βρούμε τις λιγότερες ακμές που θα διασχίσουμε, η αναζήτηση κατά πλάτος πλεονεκτεί καθώς ανακαλύπτουμε τους κόμβους που βρίσκονται πιο κοντά στην αφετηρία πριν συνεχίσουμε στους πιο απομακρυσμένους, άρα θα υπολογίσουμε ταυτόχρονα αν φτάσαμε σε όλους τους τελικούς κόμβους καθώς και την ελάχιστη απόσταση που χρειάστηκε να διανύσουμε.

**Προετοιμάζοντας τη δυαδική αναζήτηση:** Συγκεντρώνουμε όλες τις τιμές βαρών των ακμών σε έναν πίνακα $$W$$ και τις ταξινομούμε. Κατόπιν αφαιρούμε(διαγράφουμε) τα διπλότυπα ώστε να αποκτήσουμε μια γνησίως αύξουσα ακολουθία βαρών[^1] με τη χρήση της ``std::unique`` και της ``std::vector::erase``

[^1]: Η αφαίρεση των διπλότυπων δεν είναι απαραίτητη για τη λύση του προβλήματος αλλά ενδέχεται να μειώνει τα βήματα της δυαδικής αναζήτησης καθώς δεν θα ελέγξουμε πάνω από μια φορά καμία τιμή $$L_{limit}$$.

```c++
    std::sort(W.begin(), W.end());
    W.erase(std::unique(W.begin(), W.end()), W.end());
```

**Μειώνοντας τον αριθμό των αρχικών κόμβων:** Αντί να δοκιμάσουμε αναζήτηση κατά πλάτος για ένα $$L_{limit}$$ από κάθε αρχικό κόμβο και να πρέπει να ενώσουμε τα αποτελέσματα των αναζητήσεων στο τέλος για να δούμε αν καταφέραμε να φτάσουμε σε όλους τους τελικούς κόμβους, μπορούμε 
να δημιουργήσουμε έναν εικόνικο (dummy) κόμβο (μπλέ κόμβος στο σχήμα) που να αποτελει την αφετηρία της αναζήτησης κατά πλάτος και να προσθέσουμε μια ακμή από αυτόν προς κάθε αρχικό κόμβο (μπλέ ακμές στο σχήμα). Δεν θέλουμε οι ακμές αυτές να επηρεάζονται από το $$L_{limit}$$ οπότε οι ακμές αυτές θα έχουν βάρος $$0$$. Προφανώς θα πρέπει από κάθε μονοπάτι που θα καταλήγει σε έναν τελικό κόμβο να αφαιρέσουμε τη μια dummy ακμή που προσπεράσαμε. Οι κόμβοι στο αρχείο εισόδου είναι αριθμημένοι από $$1$$ έως $$N$$ οπότε μια βολική επιλογή είναι να χρησιμοποιούμε τον κόμβο $$0$$ ως τον νέο εικονικό αρχικό κόμβο. 

{: .center_image}
![Παράδειγμα εκφώνησης με dummy κόμβο](/assets/36-c-bureaucracy-sample1dummy.svg){:width="320px"}

```c++
    for(long i=0,s; i<Snr /*αριθμός αρχικών κόμβων*/; i++){
        fscanf(in, "%ld", &s);
        edge[0].push_back( { 0/*βάρος*/, s/*προορισμός*/ } );
    }
```
 
**Μετρώντας τους τελικους κόμβους που εξερευνήσαμε:** Κάθε φορά που φτάνουμε σε έναν κόμβο, ελέγχουμε αν είναι τελικός κόμβος και αν είναι, αυξάνουμε έναν μετρητή. Αν, στο τέλος της αναζήτησης κατά πλάτος, μετρήσαμε όλους τους τελικούς μας κόμβους, η τιμή $$L_{limit}$$ ήταν ικανοποιητική.

Ο χρόνος που απαιτεί ο αλγόριθμος μας, καθορίζεται από τη δυαδική αναζήτηση στα $$\mathcal{O}(R)$$ βάρη των ακμών και την αναζήτηση κατά πλάτος που απαιτεί χρόνο $$\mathcal{O}(R)$$, επομένως, ο συνολικός χρόνος που απαιτείται είναι $$\mathcal{O}(R\cdot \log{R})$$.

{% include code.md solution_name='bsearch_RlogR.cc'  %}

## Μερική λύση με επαναληπτική επέκταση γράφου

Η λύση αυτή χρησιμοποιεί μια τροποποίηση στον αλγόριθμο των [Jarnik/Prim/Dijkstra](https://cp-algorithms.com/graph/mst_prim.html) και παίρνει το 80% των πόντων του προβλήματος.

Αποθηκεύουμε όλες τις ακμές ταξινομημένες με το βάρος τους σε ένα ``std::set``. Αρχικά ο γράφος μας αποτελείται μόνο από 
τον κόμβο $$0$$ (dummy κόμβος αφετηρίας) και το $$L$$ είναι $$0$$. Κρατάμε έναν πίνακα $$\texttt{visit}$$ με τους κόμβους που έχουμε ανακαλύψει. Σε μια μεταβλητή $$\texttt{dest\_remain}$$ κρατάμε τον αριθμό των τελικών κόμβων.

Επαναλαμβάνουμε τα παρακάτω βήματα μέχρι να επισκευτούμε όλους τους τελικούς κόμβους και να μηδενιστεί η $$\texttt{dest\_remain}$$:
- Αναζητούμε στο ``std::set`` την πρώτη ακμή που η αφετηρία της έχει ανακαλυφθεί έως τώρα. Η ακμή αυτή ενδεχομένως να αυξήσει το $$L$$ αλλά τη χρειαζόμαστε καθώς ο γράφος μας δεν έχει ανακαλύψει όλους τους τελικούς κόμβους.
- Αν ανακαλύψαμε νέο κόμβο (ο προορισμός της ακμής δεν είχε ανακαλυφθεί μέχρι τώρα) επεκτείνουμε το γράφο μας με τον κόμβο προορισμού και, αν φτάσαμε σε τελικό κόμβο, μειώνουμε τη μεταβλητή $$\texttt{dest\_remain}$$.
- Σβήνουμε την ακμή αυτή από το ``std::set``.

Όταν επισκευτούμε όλους τους τελικούς κόμβους, εκτελούμε μια αναζήτηση κατά πλάτος για να υπολογίσουμε το σύνολο των χρυσών νομισμάτων μου ζητείται.

Για να ανακαλύψουμε τους $$D$$ τελικούς κόμβους θα εκτελέσουμε $$\mathcal{O}(N)$$ σειριακές αναζητήσεις ακμών στο ``std::set`` που περιέχει $$\mathcal{O}(R)$$ ακμές. Η ταξινόμηση των ακμών καθώς και η διαγραφή τους, απαιτεί επιπλέον χρόνο $$\mathcal{O}(R\cdot \log{R})$$.  
Ο συνολικός χρόνος που απαιτείται είναι $$\mathcal{O}(N \cdot R + R \cdot \log{R})$$.  

{% include code.md solution_name='expand_graph_NxR.cc' start=60 end=82 %}
Δείτε ολόκληρο τον κώδικα [εδώ]({% include link_to_source.md solution_name='expand_graph_NxR.cc' %})