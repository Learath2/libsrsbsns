#ifndef LIBSRSBSNS_BINTREE_H
#define LIBSRSBSNS_BINTREE_H 1

#include <stdbool.h>

typedef struct bintree *bintree_t;
typedef int (*bintree_cmp_fn)(void *elem1, void *elem2);

bintree_t bintree_init(bintree_cmp_fn cmpfn);
void bintree_dispose(bintree_t t);
size_t bintree_count(bintree_t t);
void bintree_clear(bintree_t t);
bool bintree_insert(bintree_t t, void *data);
void* bintree_find(bintree_t t, void *data);
bool bintree_remove(bintree_t t, void *data);
void bintree_balance(bintree_t t);

#endif /* LIBSRSBSNS_BINTREE_H */
