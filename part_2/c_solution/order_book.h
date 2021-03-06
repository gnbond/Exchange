/* 
 * A single order book, buys & sells for a single instrument 
 */

#ifndef ORDER_BOOK_H
#define ORDER_BOOK_H

#include <stdbool.h>

#include "exchange_defs.h"
#include "order_list.h"

/* 
 * The top of the order book is buys[0] / sells[0]
 * The OrderList contains the order book, in time priority order.
 */
typedef struct {
    OrderList buys, sells;
    char instrument[INSTRUMENT_SIZE];
    bool last_order_buy;
} OrderBook;

OrderBook *OrderBook_init(OrderBook *ob, const char *instrument); /* NULL if an error from malloc() */
void OrderBook_destroy(OrderBook *ob);

/* Returns pointer to the OrderBook, NULL on error */
OrderBook *OrderBook_append(OrderBook *ob, const char *id, int qty, double price);

/* See if there is a trade to match.  If so, fill in t and return true */
bool OrderBook_match(OrderBook *, Trade *);

#endif /* ORDER_BOOK_H */
