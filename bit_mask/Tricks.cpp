ALL_BITS is a number with all 1's set corresponding to the elements of domain.
__builtin_ctz
__builtin_clz
__builtin_popcount
  returns undefined for an argument of zero.

long largest_power(long N)
{
    N = N| (N>>1);
    N = N| (N>>2);
    N = N| (N>>4);
    N = N| (N>>8);
    return (N+1)>>1;
} 

x ^ ( x & (x-1)) : Returns the rightmost 1 in binary representation of x.

Used in finding duplicates
  A^0=A
  A^A=0
  A^(B^C)=(A^B)^C

General Property
  Check if power of 2 : (x)&(x-1)==0
  Set the i'th bit : b|(1<<i)
  Unset the i'th bit : b&~(1<<i)
  Check if i'th bit is set or not : b&(1<<i)!=0
  Set union = a|b 
  Set intersection = a&b
  Set subtraction = a & ~b
  Set negation = ALL_BITS^A
  Bit mask : Generate all sub array.
