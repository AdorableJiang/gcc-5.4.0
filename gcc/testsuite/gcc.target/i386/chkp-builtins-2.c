/* { dg-do compile { target { ! x32 } } } */
/* { dg-options "-fcheck-pointer-bounds -mmpx -fdump-tree-chkp" } */
/* { dg-final { scan-tree-dump-not "bnd_copy_ptr_bounds" "chkp" } } */
/* { dg-final { cleanup-tree-dump "chkp" } } */

void *
chkp_test (void *p, void *q)
{
  return __builtin___bnd_copy_ptr_bounds (p, q);
}
