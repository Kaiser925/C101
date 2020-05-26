/* C99+ */

#include <stdio.h>
#include <inttypes.h>

int main(void) {
  int32_t me32; // me32 is a 32bit signed int var.
  me32 = 45933945;
  printf("First assume int32_t is int: me32 = %d\n", me32);
  printf("Next, use a \"macro\" from inttypes.h: me32 = %" PRId32 "\n", me32);
  return 0;
}