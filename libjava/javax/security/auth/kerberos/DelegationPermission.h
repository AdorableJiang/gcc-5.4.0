
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_security_auth_kerberos_DelegationPermission__
#define __javax_security_auth_kerberos_DelegationPermission__

#pragma interface

#include <java/security/BasicPermission.h>
extern "Java"
{
  namespace java
  {
    namespace security
    {
        class Permission;
        class PermissionCollection;
    }
  }
  namespace javax
  {
    namespace security
    {
      namespace auth
      {
        namespace kerberos
        {
            class DelegationPermission;
        }
      }
    }
  }
}

class javax::security::auth::kerberos::DelegationPermission : public ::java::security::BasicPermission
{

public:
  DelegationPermission(::java::lang::String *);
  DelegationPermission(::java::lang::String *, ::java::lang::String *);
private:
  static void checkSyntax(::java::lang::String *);
public:
  jboolean implies(::java::security::Permission *);
  ::java::security::PermissionCollection * newPermissionCollection();
  static ::java::lang::Class class$;
};

#endif // __javax_security_auth_kerberos_DelegationPermission__
