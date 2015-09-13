#include <stdio.h>
#include <stdlib.h>
#include "linklist.h"

static const char *cptrarr_name[] =
  { "Narisa", "Wallida", "Natthapol", NULL };

int
main (void)
{
  unsigned int i;
  assem *sptr_asm;


  sptr_asm = l2_init (malloc (sizeof (assem)), 0);

  for (i = 0; cptrarr_name[i]; i++)
    {
      l2_add (sptr_asm, l2_new ())->ptr = (char *) cptrarr_name[i];
    }


  for (sptr_asm->current = sptr_asm->begin; sptr_asm->current;
       sptr_asm->current = sptr_asm->current->forw)
    {
      puts ((char *) sptr_asm->current->ptr);
    }


  l2_freeall (sptr_asm);
  free (sptr_asm);

  return (0);
}
