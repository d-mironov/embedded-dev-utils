#include "modc.h"

/**
 * Initilize a new Tuple with the 
 * values `_1` and `_2`
 * -----------------------------------------------------
 *
 *  Args:
 *  > `_1[f32]`: Value 1 of the tuple
 *  > `_2[f32]`: Value 2 of the tuple
 * -----------------------------------------------------
 *
 *  Return:
 *  > `tuple_t`: with the given initialize values
 *
 */
tuple_t tuple_new(f32 _1, f32 _2) {
    return (tuple_t) {
        .$1 = _1,
        .$2 = _2
    };
}
