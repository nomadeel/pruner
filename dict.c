/*
 * Copyright 2014, NICTA
 *
 * This software may be distributed and modified according to the terms of
 * the BSD 2-Clause license. Note that NO WARRANTY is provided.
 * See "LICENSE_BSD2.txt" for details.
 *
 * @TAG(NICTA_BSD)
 */

#include "dict.h"
#include <glib.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

dict_t *dict(void) {
    return g_hash_table_new(g_str_hash, g_str_equal);
}

void dict_set(dict_t *d, const char *key, void *value) {
    g_hash_table_insert(d, (gpointer)key, value);
}

void *dict_get(dict_t *d, const char *key) {
    return g_hash_table_lookup(d, key);
}

bool dict_contains(dict_t *d, const char *key) {
    return g_hash_table_contains(d, key);
}

void dict_destroy(dict_t *d) {
    g_hash_table_destroy(d);
}
