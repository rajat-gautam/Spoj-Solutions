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

Notice what x - 1 does to bit representation of x.
x - 1 would find the first set bit from the end, and then set it to 0, and set all the bits following it.

Which means if x = 10101001010100
                              ^
                              |
                              |
                              |

                       First set bit from the end
Then x - 1 becomes 10101001010(011)

All other bits in x - 1 remain unaffected.
This means that if we do (x & (x - 1)), it would just unset the last set bit in x (which is why x&(x-1) is 0 for powers of 2).
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
