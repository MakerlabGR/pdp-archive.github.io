#include <cstdio>
#include <cstdlib>
#include <algorithm>

const size_t MAXN = 1'000'000;

using namespace std;

struct ent{
   long x; // Θέση.
   long t; // Τύπος (+1: αρχή, -1: τέλος).
   long d; // Στιγμή που εισήχθει.
   bool operator<(const ent &E) const{
      if (x == E.x) return t > E.t; // Πρώτα τα τέλη.
      return x < E.x;
   }
   ent(long x, long t, long d) : x(x), t(t), d(d) { }
   ent() { }
} interv[2*MAXN];

long L, N, X;
long findMaxGap(long d){
   long prev = 1, gap = 0, open_intervals = 0, max_gap = 0;
   for (long i = 0; i < 2 * N; i++){
      // Ελέγχουμε ένα σημείο μόνο αν ανήκει στα πρώτα
      // d διαστήματα.
      if (d >= interv[i].d){
         if (open_intervals == 0) {
            gap += interv[i].x - prev;
            max_gap = max(max_gap, gap);
         } else gap = 0;
         open_intervals += interv[i].t;
         prev = interv[i].x;
      }
   }
   return max(max_gap, L-prev);
}

int main(){
   FILE *fi = fopen("roadwork.in", "r");
   fscanf(fi, "%ld%ld%ld", &N, &L, &X);
   for (long i = 1; i <= N; i++){
      long A, B;
      fscanf(fi, "%ld%ld", &A, &B);
      interv[2*i-2] = ent(A,  1, i);
      interv[2*i-1] = ent(B, -1, i);
   }
   sort(interv, interv+2*N);

   long answer = -1;
   for (long d = 0; d <= N; ++d) {
      if (findMaxGap(d) <= X) {
         answer = d;
         break;
      }
  }
  
   FILE *fo = fopen("roadwork.out", "w");
   fprintf(fo, "%ld\n", answer);
   fclose(fi);
   fclose(fo);
   return 0;
}
