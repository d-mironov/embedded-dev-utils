#ifndef MODERN_C_MODC_H_
#define MODERN_C_MODC_H_

#include <stdint.h>
#include <stdbool.h>

/**
 * Unsigned 8-bit integer
 */
typedef uint8_t     u8;
/**
 * Unsigned 16-bit integer
 */
typedef uint16_t    u16;
/**
 * Unsigned 32-bit integer
 */
typedef uint32_t    u32;
/**
 * Unsigned 64-bit integer
 */
typedef uint64_t    u64;

/**
 * Signed 8-bit integer
 */
typedef int8_t      i8;
/**
 * Signed 16-bit integer
 */
typedef int16_t     i16;
/**
 * Signed 32-bit integer
 */
typedef int32_t     i32;
/**
 * Signed 64-bit integer
 */
typedef int64_t     i64;

/**
 * Unsigned 8-bit integer
 */
typedef uint8_t     byte;

/**
 * 32-Bit Floating point number
 */
typedef float       f32;
/**
 * 64-Bit Floating point number
 */
typedef double      f64;

/**
 * String type
 */
typedef char*       str;

/**
 * `usize` type
 */
typedef u32         usize;

/**
 * Tuple type
 * used to store 2 `f32` values.
 */
typedef struct _tuple {
    f32 $1;
    f32 $2;
} tuple_t;


/**
 * -----------------------------------
 *
 * # 2-dimensional vector
 * `vec2`, `point_t`
 * -----------------------------------
 *
 *  `typedef struct`
 *
 *  Members:
 *  > `x[f32]`: x value of the vector
 *  > `y[f32]`: y value of the vector
 * -----------------------------------
 */
typedef struct _vec2 {
    f32 x;
    f32 y;
} vec2, point_t;

#define v2(x,y)         (vec2){.x = x, .y = y}

/**
 * -----------------------------------
 *
 * # 3-dimensional vector
 * `vec3`
 * -----------------------------------
 *
 *  `typedef struct`
 *
 *  Members:
 *  > `x[f32]`: x value of the vector
 *  > `y[f32]`: y value of the vector
 *  > `z[f32]`: z value of the vector
 * -----------------------------------
 */
typedef struct _vec3 {
    f32 x;
    f32 y;
    f32 z;
} vec3;

#define v3(x, y, z)     (vec3){.x = x, .y = x, .z = z}

/**
 * -----------------------------------
 *
 * # 4-dimensional vector
 * `vec4`
 * -----------------------------------
 *
 *  `typedef struct`
 *
 *  Members:
 *  > `x[f32]`: x value of the vector
 *  > `y[f32]`: y value of the vector
 *  > `z[f32]`: z value of the vector
 *  > `w[f32]`: w value of the vector
 * -----------------------------------
 */
typedef struct _vec4 {
    f32 x;
    f32 y;
    f32 z;
    f32 w;
} vec4;

/**
 * Create a new 4D vector (`vec4`)
 */
#define v4(x, y, z, w)  (vec4){.x = x, .y = x, .z = z, .w = w}


tuple_t tuple_new(f32 _1, f32 _2);


static uint32_t _BIT[32] = {
    (1 << 0),  (1 << 1),  (1 << 2),  (1 << 3),  (1 << 4),  (1 << 5),  (1 << 6),  (1 << 7),  (1 << 8),
    (1 << 9),  (1 << 10), (1 << 11), (1 << 12), (1 << 13), (1 << 14), (1 << 15), (1 << 16), (1 << 17),
    (1 << 18), (1 << 19), (1 << 20), (1 << 21), (1 << 22), (1 << 23), (1 << 24), (1 << 25), (1 << 26),
    (1 << 27), (1 << 28), (1 << 29), (1 << 30), (1 << 31) 
};

#define BITS_PER_BYTE   8

// Return value `x` as a pointer
#define as_ptr(x)       (&x)
// Return value `x` as a pointer
#define ptr(x)          (&x)
// Return the bitsize of a variable depending on `sizeof`
#define bitsizeof(x)    (sizeof(x) * BITS_PER_BYTE)
// Return the `n`-th bit
#define bit(n)          (_BIT[n])
// Cast variable to the given type
#define as(T, x)        ((T) x)

// Create a new string with length `n`
#define str_new(n)      ((char[(n)]){})

// Create a byte array with length `n`
#define byte_arr(n)     ((byte[(n)]){})

// Increment the given number by 1
#define inc(x)          (++x)

// Decrement the given number by 1
#define dec(x)          (--x)

/**
 * Register clear bit function
 * -----------------------------------------------
 *
 *  Clear the Bit `n` in the Register `reg`.
 *
 * -----------------------------------------------
 *
 *  Args:
 *  > `reg[u32*]`: Register to set the bit
 *  > `n[u32]`: Bit to clear in the Register
 *
 * -----------------------------------------------
 */
inline void reg_clear_bit(u32* reg, const u32 n) {
    *reg &= ~(bit(n)); 
}

/**
 * Register set bit function
 * -----------------------------------------------
 *
 *  Set the Bit `n` in the Register `reg`.
 *
 * -----------------------------------------------
 *
 *  Args:
 *  > `reg[u32*]`: Register to set the bit
 *  > `n[u32]`: Bit to set in the Register
 *
 * -----------------------------------------------
 */
inline void reg_set_bit(u32* reg, const u32 n) {
    *reg |= bit(n);
}

/**
 * Register check bit
 * -----------------------------------------------
 *
 *  Checks the given bit `n` if it is set
 *
 * -----------------------------------------------
 *
 *  Args:
 *  > `reg[u32*]`: Register to check bit
 *  > `n[u32]`: Bit to check in the Register
 *
 * -----------------------------------------------
 *
 *  Return:
 *  > `bool`: `true` if bit is set, else `false`
 */
inline bool reg_check_bit(u32* reg, const u32 n) {
    return *reg & bit(n);
}

/**
 * Register modify function
 * -----------------------------------------------
 *
 *  Modify the Register `reg` with the Bits in 
 *  `val`.
 *
 * -----------------------------------------------
 *
 *  Args:
 *  > `reg[u32*]`: Register to write to
 *  > `val[u32]`: Bits to modify/set in the Register
 *
 * -----------------------------------------------
 */
inline void reg_modify(u32* reg, const u32 val) {
    *reg |= val;
}


/**
 * Register clear function
 * -----------------------------------------------
 *
 *  Use the bits in `val` that needs to be cleared 
 *  in `reg`.
 *
 * -----------------------------------------------
 *
 *  Args:
 *  > `reg[u32*]`: Register to write to
 *  > `val[u32]`: Bits to reset in the Register
 *
 * -----------------------------------------------
 */
inline void reg_clear(u32* reg, const u32 val) {
    *reg &= ~val;
}

/**
 * Register write function
 * --------------------------------------------
 *
 *  Write `val` to the register `reg`.
 *  Overrides the previous value.
 *
 * --------------------------------------------
 *
 *  Args:
 *  > `reg[u32*]`: Register to write to
 *  > `val[u32]`: Value to write to register.
 *
 * --------------------------------------------
 */
inline void reg_write(u32 *reg, const u32 val) {
    *reg = val;
}

#endif
