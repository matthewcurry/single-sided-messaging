#include <ssm_lock_ref.h>

void * ssm_lock_inext(ssm_Ii i)
{
  ssm_locki locki = (ssm_locki)i;
  return locki->base->next(locki->base);
}

