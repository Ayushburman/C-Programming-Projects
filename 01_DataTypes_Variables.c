/*
 * Data Types & Variables
 * ───────────────────────────────────────────────────────────────
 * Covers  : int, float, double, char, _Bool, short, long, unsigned
 *           sizeof, type limits, implicit & explicit casting
 */

#include <stdio.h>
#include <limits.h>   /* INT_MAX, CHAR_MIN … */
#include <float.h>    /* FLT_MAX, DBL_MAX  … */
#include <stdbool.h>  /* bool, true, false   */

int main(void) {
 
    /* ── Integer family ─────────────────────────────────── */
    char   c  = 'A';
    short  s  = 32000;
    int    i  = -2147483648;   /* INT_MIN on 32-bit */
    long   l  = 9876540L;
    long long ll = 9223372036854775807LL;  /* LLONG_MAX */
 
    unsigned int  ui = 4294967295U;   /* UINT_MAX */
    unsigned char uc = 255;







 /* ── Floating-point family ───────────────────────────── */
    float       f  = 3.14f;
    double      d  = 3.141592653589793;
    long double ld = 3.1415926535897846L;









 /* ── Boolean (C99+) ─────────────────────────────────── */
    bool flag = true;






/* ── Print sizes ────────────────────────────────────── */
    printf("=== sizeof each type (bytes) ===\n");
    printf("  char        : %zu\n", sizeof(char));
    printf("  short       : %zu\n", sizeof(short));
    printf("  int         : %zu\n", sizeof(int));
    printf("  long        : %zu\n", sizeof(long));
    printf("  long long   : %zu\n", sizeof(long long));
    printf("  float       : %zu\n", sizeof(float));
    printf("  double      : %zu\n", sizeof(double));
    printf("  long double : %zu\n", sizeof(long double));
    printf("  bool        : %zu\n", sizeof(bool));








 /* ── Print limits ────────────────────────────────────── */
    printf("\n=== platform limits ===\n");
    printf("  INT_MIN  = %d\n",  INT_MIN);
    printf("  INT_MAX  = %d\n",  INT_MAX);
    printf("  UINT_MAX = %u\n",  UINT_MAX);
    printf("  FLT_MAX  = %e\n",  FLT_MAX);
    printf("  DBL_MAX  = %e\n",  DBL_MAX);
    printf("  LLONG_MIN = %lld\n", LLONG_MIN);
    printf("  LLONG_MAX = %lld\n", LLONG_MAX);








  /* ── Print values ────────────────────────────────────── */
    printf("\n=== variable values ===\n");
    printf("  char   c  = %c  (ASCII %d)\n", c,  c);
    printf("  short  s  = %d\n",  s);
    printf("  int    i  = %d\n",  i);
    printf("  long   l  = %ld\n", l);
    printf("  ll        = %lld\n", ll);
    printf("  long double ld = %.18Lf\n", ld);
    printf("  uint   ui = %u\n",  ui);
    printf("  uchar  uc = %u\n",  uc);
    printf("  float  f  = %.6f\n", f);
    printf("  double d  = %.15f\n", d);
    printf("  bool flag = %s\n",  flag ? "true" : "false");








/* ── Type casting ────────────────────────────────────── */
    printf("\n=== casting ===\n");
    int   x = 7, y = 2;
    float result_bad  = x / y;              /* integer division first */
    float result_good = (float)x / y;       /* explicit cast before div */
    printf("  7 / 2 (int div)   = %.1f\n", result_bad);
    printf("  (float)7 / 2      = %.1f\n", result_good);
 





    
   /* implicit narrowing — loss of data demo */
    double big = 9.99;
    int    truncated = (int)big;  /* fractional part dropped */
    printf("  (int)9.99         = %d  (truncated, not rounded)\n", truncated);
    return 0;
}