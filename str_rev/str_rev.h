// Zero copy in-place string reversal
// Michael Moffitt
// I wrote this on a Pentium M machine, so it is only taking advantage of a
// 32-bit integer size. As a result, the maximum string length is 2^16 - 1
// characters. To take advantage of a 64-bit word size, simply uncomment
// the STRREV_64 definition below.

//#define STRREV_64 

// I considered using sizeof(int) to allow the algorithm to determine the
// correct shift size on its own, but the idea of not including anything
// and having a working program is too tantalizing to pass up.


#ifdef STRREV_64
#define MASKBITS 0xFFFFFFFF
#define SHIFTAMT 32
#else
#define MASKBITS 0xFFFF
#define SHIFTAMT 16
#endif

// Simplify the appearance of the algorithm using some aliases.
// TODO: Perhaps just use a union
#define RETLO (ret & MASKBITS)
#define RETHI (ret >> SHIFTAMT)

// Makes the second loop look so neat!
#define X str[RETHI - 1 - RETLO]
#define Y str[RETLO]

#define ret_type unsigned int

// Returns the length of the string processed.
ret_type str_rev(char *str);
