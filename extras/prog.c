#include <stdint.h>

/* extern void */
uint64_t asc2l(const char *s);

uint64_t entry (void *mem)
{
  return asc2l("1234");
}
