// -*- C++ -*-
//
// $Id$

// ****  Code generated by the The ACE ORB (TAO) IDL Compiler ****
// TAO and the TAO IDL Compiler have been developed by:
//       Center for Distributed Object Computing
//       Washington University
//       St. Louis, MO
//       USA
//       http://www.cs.wustl.edu/~schmidt/doc-center.html
// and
//       Distributed Object Computing Laboratory
//       University of California at Irvine
//       Irvine, CA
//       USA
//       http://doc.ece.uci.edu/
//
// Information about TAO is available at:
//     http://www.cs.wustl.edu/~schmidt/TAO.html

#include "PollableC.h"

#if (TAO_HAS_AMI_POLLER == 1)

#include "tao/Stub.h"
#include "tao/Invocation.h"
#include "tao/PortableInterceptor.h"

#if TAO_HAS_INTERCEPTORS == 1
#include "tao/RequestInfo_Util.h"
#include "tao/ClientRequestInfo_i.h"
#include "tao/ClientInterceptorAdapter.h"
#endif  /* TAO_HAS_INTERCEPTORS == 1 */

#if defined (__BORLANDC__)
#pragma option -w-rvl -w-rch -w-ccc -w-aus -w-sig
#endif /* __BORLANDC__ */

#if !defined (__ACE_INLINE__)
#include "PollableC.i"
#endif /* !defined INLINE */

int CORBA::Pollable::_tao_class_id = 0;

CORBA::Pollable_ptr
tao_CORBA_Pollable_duplicate (
    CORBA::Pollable_ptr p
  )
{
  return CORBA::Pollable::_duplicate (p);
}

void
tao_CORBA_Pollable_release (
    CORBA::Pollable_ptr p
  )
{
  CORBA::release (p);
}

CORBA::Pollable_ptr
tao_CORBA_Pollable_nil (
    void
  )
{
  return CORBA::Pollable::_nil ();
}

CORBA::Pollable_ptr
tao_CORBA_Pollable_narrow (
    CORBA::Object *p
    ACE_ENV_ARG_DECL
  )
{
  return CORBA::Pollable::_narrow (p ACE_ENV_ARG_PARAMETER);
}

CORBA::Object *
tao_CORBA_Pollable_upcast (
    void *src
  )
{
  CORBA::Pollable **tmp =
    ACE_static_cast (CORBA::Pollable **, src);
  return *tmp;
}

// *************************************************************
// CORBA::Pollable_var
// TAO_IDL - Generated from
// be/be_interface.cpp:654
// *************************************************************

CORBA::Pollable_var::Pollable_var (void) // default constructor
  : ptr_ (Pollable::_nil ())
{}

::CORBA::Pollable_ptr
CORBA::Pollable_var::ptr (void) const
{
  return this->ptr_;
}

CORBA::Pollable_var::Pollable_var (const ::CORBA::Pollable_var &p) // copy constructor
  : TAO_Base_var (),
    ptr_ (Pollable::_duplicate (p.ptr ()))
{}

CORBA::Pollable_var::~Pollable_var (void) // destructor
{
  CORBA::release (this->ptr_);
}

CORBA::Pollable_var &
CORBA::Pollable_var::operator= (Pollable_ptr p)
{
  CORBA::release (this->ptr_);
  this->ptr_ = p;
  return *this;
}

CORBA::Pollable_var &
CORBA::Pollable_var::operator= (const ::CORBA::Pollable_var &p)
{
  if (this != &p)
  {
    CORBA::release (this->ptr_);
    this->ptr_ = ::CORBA::Pollable::_duplicate (p.ptr ());
  }
  return *this;
}

CORBA::Pollable_var::operator const ::CORBA::Pollable_ptr &() const // cast
{
  return this->ptr_;
}

CORBA::Pollable_var::operator ::CORBA::Pollable_ptr &() // cast
{
  return this->ptr_;
}

::CORBA::Pollable_ptr
CORBA::Pollable_var::operator-> (void) const
{
  return this->ptr_;
}

::CORBA::Pollable_ptr
CORBA::Pollable_var::in (void) const
{
  return this->ptr_;
}

::CORBA::Pollable_ptr &
CORBA::Pollable_var::inout (void)
{
  return this->ptr_;
}

::CORBA::Pollable_ptr &
CORBA::Pollable_var::out (void)
{
  CORBA::release (this->ptr_);
  this->ptr_ = ::CORBA::Pollable::_nil ();
  return this->ptr_;
}

::CORBA::Pollable_ptr
CORBA::Pollable_var::_retn (void)
{
  // yield ownership of managed obj reference
  ::CORBA::Pollable_ptr val = this->ptr_;
  this->ptr_ = ::CORBA::Pollable::_nil ();
  return val;
}

::CORBA::Pollable_ptr
CORBA::Pollable_var::tao_duplicate (Pollable_ptr p)
{
  return ::CORBA::Pollable::_duplicate (p);
}

void
CORBA::Pollable_var::tao_release (Pollable_ptr p)
{
  CORBA::release (p);
}

::CORBA::Pollable_ptr
CORBA::Pollable_var::tao_nil (void)
{
  return ::CORBA::Pollable::_nil ();
}

::CORBA::Pollable_ptr
CORBA::Pollable_var::tao_narrow (
    CORBA::Object *p
    ACE_ENV_ARG_DECL
  )
{
  return ::CORBA::Pollable::_narrow (p ACE_ENV_ARG_PARAMETER);
}

CORBA::Object *
CORBA::Pollable_var::tao_upcast (void *src)
{
  Pollable **tmp =
    ACE_static_cast (Pollable **, src);
  return *tmp;
}

// *************************************************************
// CORBA::Pollable_out
// TAO_IDL - Generated from
// be/be_interface.cpp:932
// *************************************************************

CORBA::Pollable_out::Pollable_out (Pollable_ptr &p)
  : ptr_ (p)
{
  this->ptr_ = ::CORBA::Pollable::_nil ();
}

CORBA::Pollable_out::Pollable_out (Pollable_var &p) // constructor from _var
  : ptr_ (p.out ())
{
  CORBA::release (this->ptr_);
  this->ptr_ = ::CORBA::Pollable::_nil ();
}

CORBA::Pollable_out::Pollable_out (const ::CORBA::Pollable_out &p) // copy constructor
  : ptr_ (ACE_const_cast (Pollable_out &, p).ptr_)
{}

::CORBA::Pollable_out &
CORBA::Pollable_out::operator= (const ::CORBA::Pollable_out &p)
{
  this->ptr_ = ACE_const_cast (Pollable_out&, p).ptr_;
  return *this;
}

CORBA::Pollable_out &
CORBA::Pollable_out::operator= (const ::CORBA::Pollable_var &p)
{
  this->ptr_ = ::CORBA::Pollable::_duplicate (p.ptr ());
  return *this;
}

CORBA::Pollable_out &
CORBA::Pollable_out::operator= (Pollable_ptr p)
{
  this->ptr_ = p;
  return *this;
}

CORBA::Pollable_out::operator ::CORBA::Pollable_ptr &() // cast
{
  return this->ptr_;
}

::CORBA::Pollable_ptr &
CORBA::Pollable_out::ptr (void) // ptr
{
  return this->ptr_;
}

::CORBA::Pollable_ptr
CORBA::Pollable_out::operator-> (void)
{
  return this->ptr_;
}


// TAO_IDL - Generated from
// be/be_visitor_interface/interface_cs.cpp:209

CORBA::Pollable::Pollable (void)
{}

CORBA::Pollable::~Pollable (void)
{}

CORBA::Pollable_ptr CORBA::Pollable::_narrow (
    CORBA::Object_ptr obj
    ACE_ENV_ARG_DECL
  )
{
  return Pollable::_unchecked_narrow (obj ACE_ENV_ARG_PARAMETER);
}

CORBA::Pollable_ptr
CORBA::Pollable::_unchecked_narrow (
    CORBA::Object_ptr obj
    ACE_ENV_ARG_DECL_NOT_USED
  )
{
  if (CORBA::is_nil (obj))
    return Pollable::_nil ();
  return
      ACE_reinterpret_cast
        (
          Pollable_ptr,
            obj->_tao_QueryInterface
              (
                ACE_reinterpret_cast
                  (
                    ptr_arith_t,
                    &Pollable::_tao_class_id
                  )
              )
        );
}

CORBA::Pollable_ptr
CORBA::Pollable::_duplicate (Pollable_ptr obj)
{
  if (!CORBA::is_nil (obj))
    obj->_add_ref ();
  return obj;
}

void *CORBA::Pollable::_tao_QueryInterface (ptr_arith_t type)
{
  void *retv = 0;
  if (type == ACE_reinterpret_cast
    (ptr_arith_t,
      &ACE_NESTED_CLASS (::CORBA, Pollable)::_tao_class_id))
    retv = ACE_reinterpret_cast (void*, this);
  else if (type == ACE_reinterpret_cast (ptr_arith_t, &CORBA::Object::_tao_class_id))
    retv = ACE_reinterpret_cast (void *,
      ACE_static_cast (CORBA::Object_ptr, this));

  if (retv)
    this->_add_ref ();
  return retv;
}

const char* CORBA::Pollable::_interface_repository_id (void) const
{
  return "IDL:omg.org/CORBA/Pollable:1.0";
}

int CORBA::DIIPollable::_tao_class_id = 0;

CORBA::DIIPollable_ptr
tao_CORBA_DIIPollable_duplicate (
    CORBA::DIIPollable_ptr p
  )
{
  return CORBA::DIIPollable::_duplicate (p);
}

void
tao_CORBA_DIIPollable_release (
    CORBA::DIIPollable_ptr p
  )
{
  CORBA::release (p);
}

CORBA::DIIPollable_ptr
tao_CORBA_DIIPollable_nil (
    void
  )
{
  return CORBA::DIIPollable::_nil ();
}

CORBA::DIIPollable_ptr
tao_CORBA_DIIPollable_narrow (
    CORBA::Object *p
    ACE_ENV_ARG_DECL
  )
{
  return CORBA::DIIPollable::_narrow (p ACE_ENV_ARG_PARAMETER);
}

CORBA::Object *
tao_CORBA_DIIPollable_upcast (
    void *src
  )
{
  CORBA::DIIPollable **tmp =
    ACE_static_cast (CORBA::DIIPollable **, src);
  return *tmp;
}

// *************************************************************
// CORBA::DIIPollable_var
// TAO_IDL - Generated from
// be/be_interface.cpp:654
// *************************************************************

CORBA::DIIPollable_var::DIIPollable_var (void) // default constructor
  : ptr_ (DIIPollable::_nil ())
{}

::CORBA::DIIPollable_ptr
CORBA::DIIPollable_var::ptr (void) const
{
  return this->ptr_;
}

CORBA::DIIPollable_var::DIIPollable_var (const ::CORBA::DIIPollable_var &p) // copy constructor
  : TAO_Base_var (),
    ptr_ (DIIPollable::_duplicate (p.ptr ()))
{}

CORBA::DIIPollable_var::~DIIPollable_var (void) // destructor
{
  CORBA::release (this->ptr_);
}

CORBA::DIIPollable_var &
CORBA::DIIPollable_var::operator= (DIIPollable_ptr p)
{
  CORBA::release (this->ptr_);
  this->ptr_ = p;
  return *this;
}

CORBA::DIIPollable_var &
CORBA::DIIPollable_var::operator= (const ::CORBA::DIIPollable_var &p)
{
  if (this != &p)
  {
    CORBA::release (this->ptr_);
    this->ptr_ = ::CORBA::DIIPollable::_duplicate (p.ptr ());
  }
  return *this;
}

CORBA::DIIPollable_var::operator const ::CORBA::DIIPollable_ptr &() const // cast
{
  return this->ptr_;
}

CORBA::DIIPollable_var::operator ::CORBA::DIIPollable_ptr &() // cast
{
  return this->ptr_;
}

::CORBA::DIIPollable_ptr
CORBA::DIIPollable_var::operator-> (void) const
{
  return this->ptr_;
}

::CORBA::DIIPollable_ptr
CORBA::DIIPollable_var::in (void) const
{
  return this->ptr_;
}

::CORBA::DIIPollable_ptr &
CORBA::DIIPollable_var::inout (void)
{
  return this->ptr_;
}

::CORBA::DIIPollable_ptr &
CORBA::DIIPollable_var::out (void)
{
  CORBA::release (this->ptr_);
  this->ptr_ = ::CORBA::DIIPollable::_nil ();
  return this->ptr_;
}

::CORBA::DIIPollable_ptr
CORBA::DIIPollable_var::_retn (void)
{
  // yield ownership of managed obj reference
  ::CORBA::DIIPollable_ptr val = this->ptr_;
  this->ptr_ = ::CORBA::DIIPollable::_nil ();
  return val;
}

::CORBA::DIIPollable_ptr
CORBA::DIIPollable_var::tao_duplicate (DIIPollable_ptr p)
{
  return ::CORBA::DIIPollable::_duplicate (p);
}

void
CORBA::DIIPollable_var::tao_release (DIIPollable_ptr p)
{
  CORBA::release (p);
}

::CORBA::DIIPollable_ptr
CORBA::DIIPollable_var::tao_nil (void)
{
  return ::CORBA::DIIPollable::_nil ();
}

::CORBA::DIIPollable_ptr
CORBA::DIIPollable_var::tao_narrow (
    CORBA::Object *p
    ACE_ENV_ARG_DECL
  )
{
  return ::CORBA::DIIPollable::_narrow (p ACE_ENV_ARG_PARAMETER);
}

CORBA::Object *
CORBA::DIIPollable_var::tao_upcast (void *src)
{
  DIIPollable **tmp =
    ACE_static_cast (DIIPollable **, src);
  return *tmp;
}

// *************************************************************
// CORBA::DIIPollable_out
// TAO_IDL - Generated from
// be/be_interface.cpp:932
// *************************************************************

CORBA::DIIPollable_out::DIIPollable_out (DIIPollable_ptr &p)
  : ptr_ (p)
{
  this->ptr_ = ::CORBA::DIIPollable::_nil ();
}

CORBA::DIIPollable_out::DIIPollable_out (DIIPollable_var &p) // constructor from _var
  : ptr_ (p.out ())
{
  CORBA::release (this->ptr_);
  this->ptr_ = ::CORBA::DIIPollable::_nil ();
}

CORBA::DIIPollable_out::DIIPollable_out (const ::CORBA::DIIPollable_out &p) // copy constructor
  : ptr_ (ACE_const_cast (DIIPollable_out &, p).ptr_)
{}

::CORBA::DIIPollable_out &
CORBA::DIIPollable_out::operator= (const ::CORBA::DIIPollable_out &p)
{
  this->ptr_ = ACE_const_cast (DIIPollable_out&, p).ptr_;
  return *this;
}

CORBA::DIIPollable_out &
CORBA::DIIPollable_out::operator= (const ::CORBA::DIIPollable_var &p)
{
  this->ptr_ = ::CORBA::DIIPollable::_duplicate (p.ptr ());
  return *this;
}

CORBA::DIIPollable_out &
CORBA::DIIPollable_out::operator= (DIIPollable_ptr p)
{
  this->ptr_ = p;
  return *this;
}

CORBA::DIIPollable_out::operator ::CORBA::DIIPollable_ptr &() // cast
{
  return this->ptr_;
}

::CORBA::DIIPollable_ptr &
CORBA::DIIPollable_out::ptr (void) // ptr
{
  return this->ptr_;
}

::CORBA::DIIPollable_ptr
CORBA::DIIPollable_out::operator-> (void)
{
  return this->ptr_;
}


// TAO_IDL - Generated from
// be/be_visitor_interface/interface_cs.cpp:209

CORBA::DIIPollable::DIIPollable (void)
{}

CORBA::DIIPollable::~DIIPollable (void)
{}

CORBA::DIIPollable_ptr CORBA::DIIPollable::_narrow (
    CORBA::Object_ptr obj
    ACE_ENV_ARG_DECL
  )
{
  return DIIPollable::_unchecked_narrow (obj ACE_ENV_ARG_PARAMETER);
}

CORBA::DIIPollable_ptr
CORBA::DIIPollable::_unchecked_narrow (
    CORBA::Object_ptr obj
    ACE_ENV_ARG_DECL_NOT_USED
  )
{
  if (CORBA::is_nil (obj))
    return DIIPollable::_nil ();
  return
      ACE_reinterpret_cast
        (
          DIIPollable_ptr,
            obj->_tao_QueryInterface
              (
                ACE_reinterpret_cast
                  (
                    ptr_arith_t,
                    &DIIPollable::_tao_class_id
                  )
              )
        );
}

CORBA::DIIPollable_ptr
CORBA::DIIPollable::_duplicate (DIIPollable_ptr obj)
{
  if (!CORBA::is_nil (obj))
    obj->_add_ref ();
  return obj;
}

void *CORBA::DIIPollable::_tao_QueryInterface (ptr_arith_t type)
{
  void *retv = 0;
  if (type == ACE_reinterpret_cast
    (ptr_arith_t,
      &ACE_NESTED_CLASS (::CORBA, DIIPollable)::_tao_class_id))
    retv = ACE_reinterpret_cast (void*, this);
  else if (type == ACE_reinterpret_cast
    (ptr_arith_t,
      &ACE_NESTED_CLASS (::CORBA, Pollable)::_tao_class_id))
    retv = ACE_reinterpret_cast
      (
        void *,
        ACE_static_cast
          (
            CORBA::Pollable_ptr,
            this
          )
      );
  else if (type == ACE_reinterpret_cast (ptr_arith_t, &CORBA::Object::_tao_class_id))
    retv = ACE_reinterpret_cast (void *,
      ACE_static_cast (CORBA::Object_ptr, this));

  if (retv)
    this->_add_ref ();
  return retv;
}

const char* CORBA::DIIPollable::_interface_repository_id (void) const
{
  return "IDL:omg.org/CORBA/DIIPollable:1.0";
}

int CORBA::PollableSet::_tao_class_id = 0;

CORBA::PollableSet_ptr
tao_CORBA_PollableSet_duplicate (
    CORBA::PollableSet_ptr p
  )
{
  return CORBA::PollableSet::_duplicate (p);
}

void
tao_CORBA_PollableSet_release (
    CORBA::PollableSet_ptr p
  )
{
  CORBA::release (p);
}

CORBA::PollableSet_ptr
tao_CORBA_PollableSet_nil (
    void
  )
{
  return CORBA::PollableSet::_nil ();
}

CORBA::PollableSet_ptr
tao_CORBA_PollableSet_narrow (
    CORBA::Object *p
    ACE_ENV_ARG_DECL
  )
{
  return CORBA::PollableSet::_narrow (p ACE_ENV_ARG_PARAMETER);
}

CORBA::Object *
tao_CORBA_PollableSet_upcast (
    void *src
  )
{
  CORBA::PollableSet **tmp =
    ACE_static_cast (CORBA::PollableSet **, src);
  return *tmp;
}

// *************************************************************
// CORBA::PollableSet_var
// TAO_IDL - Generated from
// be/be_interface.cpp:654
// *************************************************************

CORBA::PollableSet_var::PollableSet_var (void) // default constructor
  : ptr_ (PollableSet::_nil ())
{}

::CORBA::PollableSet_ptr
CORBA::PollableSet_var::ptr (void) const
{
  return this->ptr_;
}

CORBA::PollableSet_var::PollableSet_var (const ::CORBA::PollableSet_var &p) // copy constructor
  : TAO_Base_var (),
    ptr_ (PollableSet::_duplicate (p.ptr ()))
{}

CORBA::PollableSet_var::~PollableSet_var (void) // destructor
{
  CORBA::release (this->ptr_);
}

CORBA::PollableSet_var &
CORBA::PollableSet_var::operator= (PollableSet_ptr p)
{
  CORBA::release (this->ptr_);
  this->ptr_ = p;
  return *this;
}

CORBA::PollableSet_var &
CORBA::PollableSet_var::operator= (const ::CORBA::PollableSet_var &p)
{
  if (this != &p)
  {
    CORBA::release (this->ptr_);
    this->ptr_ = ::CORBA::PollableSet::_duplicate (p.ptr ());
  }
  return *this;
}

CORBA::PollableSet_var::operator const ::CORBA::PollableSet_ptr &() const // cast
{
  return this->ptr_;
}

CORBA::PollableSet_var::operator ::CORBA::PollableSet_ptr &() // cast
{
  return this->ptr_;
}

::CORBA::PollableSet_ptr
CORBA::PollableSet_var::operator-> (void) const
{
  return this->ptr_;
}

::CORBA::PollableSet_ptr
CORBA::PollableSet_var::in (void) const
{
  return this->ptr_;
}

::CORBA::PollableSet_ptr &
CORBA::PollableSet_var::inout (void)
{
  return this->ptr_;
}

::CORBA::PollableSet_ptr &
CORBA::PollableSet_var::out (void)
{
  CORBA::release (this->ptr_);
  this->ptr_ = ::CORBA::PollableSet::_nil ();
  return this->ptr_;
}

::CORBA::PollableSet_ptr
CORBA::PollableSet_var::_retn (void)
{
  // yield ownership of managed obj reference
  ::CORBA::PollableSet_ptr val = this->ptr_;
  this->ptr_ = ::CORBA::PollableSet::_nil ();
  return val;
}

::CORBA::PollableSet_ptr
CORBA::PollableSet_var::tao_duplicate (PollableSet_ptr p)
{
  return ::CORBA::PollableSet::_duplicate (p);
}

void
CORBA::PollableSet_var::tao_release (PollableSet_ptr p)
{
  CORBA::release (p);
}

::CORBA::PollableSet_ptr
CORBA::PollableSet_var::tao_nil (void)
{
  return ::CORBA::PollableSet::_nil ();
}

::CORBA::PollableSet_ptr
CORBA::PollableSet_var::tao_narrow (
    CORBA::Object *p
    ACE_ENV_ARG_DECL
  )
{
  return ::CORBA::PollableSet::_narrow (p ACE_ENV_ARG_PARAMETER);
}

CORBA::Object *
CORBA::PollableSet_var::tao_upcast (void *src)
{
  PollableSet **tmp =
    ACE_static_cast (PollableSet **, src);
  return *tmp;
}

// *************************************************************
// CORBA::PollableSet_out
// TAO_IDL - Generated from
// be/be_interface.cpp:932
// *************************************************************

CORBA::PollableSet_out::PollableSet_out (PollableSet_ptr &p)
  : ptr_ (p)
{
  this->ptr_ = ::CORBA::PollableSet::_nil ();
}

CORBA::PollableSet_out::PollableSet_out (PollableSet_var &p) // constructor from _var
  : ptr_ (p.out ())
{
  CORBA::release (this->ptr_);
  this->ptr_ = ::CORBA::PollableSet::_nil ();
}

CORBA::PollableSet_out::PollableSet_out (const ::CORBA::PollableSet_out &p) // copy constructor
  : ptr_ (ACE_const_cast (PollableSet_out &, p).ptr_)
{}

::CORBA::PollableSet_out &
CORBA::PollableSet_out::operator= (const ::CORBA::PollableSet_out &p)
{
  this->ptr_ = ACE_const_cast (PollableSet_out&, p).ptr_;
  return *this;
}

CORBA::PollableSet_out &
CORBA::PollableSet_out::operator= (const ::CORBA::PollableSet_var &p)
{
  this->ptr_ = ::CORBA::PollableSet::_duplicate (p.ptr ());
  return *this;
}

CORBA::PollableSet_out &
CORBA::PollableSet_out::operator= (PollableSet_ptr p)
{
  this->ptr_ = p;
  return *this;
}

CORBA::PollableSet_out::operator ::CORBA::PollableSet_ptr &() // cast
{
  return this->ptr_;
}

::CORBA::PollableSet_ptr &
CORBA::PollableSet_out::ptr (void) // ptr
{
  return this->ptr_;
}

::CORBA::PollableSet_ptr
CORBA::PollableSet_out::operator-> (void)
{
  return this->ptr_;
}


// TAO_IDL - Generated from
// be/be_visitor_interface/interface_cs.cpp:209

CORBA::PollableSet::PollableSet (void)
{}

CORBA::PollableSet::~PollableSet (void)
{}

CORBA::PollableSet_ptr CORBA::PollableSet::_narrow (
    CORBA::Object_ptr obj
    ACE_ENV_ARG_DECL
  )
{
  return PollableSet::_unchecked_narrow (obj ACE_ENV_ARG_PARAMETER);
}

CORBA::PollableSet_ptr
CORBA::PollableSet::_unchecked_narrow (
    CORBA::Object_ptr obj
    ACE_ENV_ARG_DECL_NOT_USED
  )
{
  if (CORBA::is_nil (obj))
    return PollableSet::_nil ();
  return
      ACE_reinterpret_cast
        (
          PollableSet_ptr,
            obj->_tao_QueryInterface
              (
                ACE_reinterpret_cast
                  (
                    ptr_arith_t,
                    &PollableSet::_tao_class_id
                  )
              )
        );
}

CORBA::PollableSet_ptr
CORBA::PollableSet::_duplicate (PollableSet_ptr obj)
{
  if (!CORBA::is_nil (obj))
    obj->_add_ref ();
  return obj;
}

void *CORBA::PollableSet::_tao_QueryInterface (ptr_arith_t type)
{
  void *retv = 0;
  if (type == ACE_reinterpret_cast
    (ptr_arith_t,
      &ACE_NESTED_CLASS (::CORBA, PollableSet)::_tao_class_id))
    retv = ACE_reinterpret_cast (void*, this);
  else if (type == ACE_reinterpret_cast (ptr_arith_t, &CORBA::Object::_tao_class_id))
    retv = ACE_reinterpret_cast (void *,
      ACE_static_cast (CORBA::Object_ptr, this));

  if (retv)
    this->_add_ref ();
  return retv;
}

const char* CORBA::PollableSet::_interface_repository_id (void) const
{
  return "IDL:omg.org/CORBA/PollableSet:1.0";
}

// Default constructor.
CORBA::PollableSet::NoPossiblePollable::NoPossiblePollable (void)
  : CORBA::UserException (
        "IDL:omg.org/CORBA/PollableSet/NoPossiblePollable:1.0",
        "NoPossiblePollable"
      )
{
}

// Destructor - all members are of self managing types.
CORBA::PollableSet::NoPossiblePollable::~NoPossiblePollable (void)
{
}

// Copy constructor.
CORBA::PollableSet::NoPossiblePollable::NoPossiblePollable (const ::CORBA::PollableSet::NoPossiblePollable &_tao_excp)
  : CORBA::UserException (
        _tao_excp._rep_id (),
        _tao_excp._name ()
      )
{
}

// Assignment operator.
CORBA::PollableSet::NoPossiblePollable&
CORBA::PollableSet::NoPossiblePollable::operator= (const ::CORBA::PollableSet::NoPossiblePollable &_tao_excp)
{
  this->UserException::operator= (_tao_excp);
  return *this;
}

CORBA::PollableSet::NoPossiblePollable *
CORBA::PollableSet::NoPossiblePollable::_downcast (CORBA::Exception *exc)
{
  if (!ACE_OS::strcmp ("IDL:omg.org/CORBA/PollableSet/NoPossiblePollable:1.0", exc->_rep_id ()))
    {
      return ACE_dynamic_cast (NoPossiblePollable *, exc);
    }
  else
    {
      return 0;
    }
}

CORBA::Exception *CORBA::PollableSet::NoPossiblePollable::_alloc (void)
{
  CORBA::Exception *retval = 0;
  ACE_NEW_RETURN (retval, ::CORBA::PollableSet::NoPossiblePollable, 0);
  return retval;
}

CORBA::Exception *
CORBA::PollableSet::NoPossiblePollable::_tao_duplicate (void) const
{
  CORBA::Exception *result;
  ACE_NEW_RETURN (
      result,
      CORBA::PollableSet::NoPossiblePollable (*this),
      0
    );
  return result;
}

void CORBA::PollableSet::NoPossiblePollable::_raise ()
{
  TAO_RAISE (*this);
}

void CORBA::PollableSet::NoPossiblePollable::_tao_encode (
    TAO_OutputCDR &
    ACE_ENV_ARG_DECL
  ) const
{
  ACE_THROW (CORBA::MARSHAL ());
}

void CORBA::PollableSet::NoPossiblePollable::_tao_decode (
    TAO_InputCDR &
    ACE_ENV_ARG_DECL
  )
{
  ACE_THROW (CORBA::MARSHAL ());
}

// Default constructor.
CORBA::PollableSet::UnknownPollable::UnknownPollable (void)
  : CORBA::UserException (
        "IDL:omg.org/CORBA/PollableSet/UnknownPollable:1.0",
        "UnknownPollable"
      )
{
}

// Destructor - all members are of self managing types.
CORBA::PollableSet::UnknownPollable::~UnknownPollable (void)
{
}

// Copy constructor.
CORBA::PollableSet::UnknownPollable::UnknownPollable (const ::CORBA::PollableSet::UnknownPollable &_tao_excp)
  : CORBA::UserException (
        _tao_excp._rep_id (),
        _tao_excp._name ()
      )
{
}

// Assignment operator.
CORBA::PollableSet::UnknownPollable&
CORBA::PollableSet::UnknownPollable::operator= (const ::CORBA::PollableSet::UnknownPollable &_tao_excp)
{
  this->UserException::operator= (_tao_excp);
  return *this;
}

CORBA::PollableSet::UnknownPollable *
CORBA::PollableSet::UnknownPollable::_downcast (CORBA::Exception *exc)
{
  if (!ACE_OS::strcmp ("IDL:omg.org/CORBA/PollableSet/UnknownPollable:1.0", exc->_rep_id ()))
    {
      return ACE_dynamic_cast (UnknownPollable *, exc);
    }
  else
    {
      return 0;
    }
}

CORBA::Exception *CORBA::PollableSet::UnknownPollable::_alloc (void)
{
  CORBA::Exception *retval = 0;
  ACE_NEW_RETURN (retval, ::CORBA::PollableSet::UnknownPollable, 0);
  return retval;
}

CORBA::Exception *
CORBA::PollableSet::UnknownPollable::_tao_duplicate (void) const
{
  CORBA::Exception *result;
  ACE_NEW_RETURN (
      result,
      CORBA::PollableSet::UnknownPollable (*this),
      0
    );
  return result;
}

void CORBA::PollableSet::UnknownPollable::_raise ()
{
  TAO_RAISE (*this);
}

void CORBA::PollableSet::UnknownPollable::_tao_encode (
    TAO_OutputCDR &
    ACE_ENV_ARG_DECL
  ) const
{
  ACE_THROW (CORBA::MARSHAL ());
}

void CORBA::PollableSet::UnknownPollable::_tao_decode (
    TAO_InputCDR &
    ACE_ENV_ARG_DECL
  )
{
  ACE_THROW (CORBA::MARSHAL ());
}

#if defined (ACE_HAS_EXPLICIT_TEMPLATE_INSTANTIATION)  || \
    defined (ACE_HAS_GNU_REPO)
    template class TAO_Object_Manager<CORBA::Pollable,CORBA::Pollable_var>;
  #elif defined (ACE_HAS_TEMPLATE_INSTANTIATION_PRAGMA)
  #  pragma instantiate TAO_Object_Manager<CORBA::Pollable,CORBA::Pollable_var>
#endif /* ACE_HAS_EXPLICIT_TEMPLATE_INSTANTIATION */

#if defined (ACE_HAS_EXPLICIT_TEMPLATE_INSTANTIATION)  || \
    defined (ACE_HAS_GNU_REPO)
    template class TAO_Object_Manager<CORBA::DIIPollable,CORBA::DIIPollable_var>;
  #elif defined (ACE_HAS_TEMPLATE_INSTANTIATION_PRAGMA)
  #  pragma instantiate TAO_Object_Manager<CORBA::DIIPollable,CORBA::DIIPollable_var>
#endif /* ACE_HAS_EXPLICIT_TEMPLATE_INSTANTIATION */

#if defined (ACE_HAS_EXPLICIT_TEMPLATE_INSTANTIATION)  || \
    defined (ACE_HAS_GNU_REPO)
    template class TAO_Object_Manager<CORBA::PollableSet,CORBA::PollableSet_var>;
  #elif defined (ACE_HAS_TEMPLATE_INSTANTIATION_PRAGMA)
  #  pragma instantiate TAO_Object_Manager<CORBA::PollableSet,CORBA::PollableSet_var>
#endif /* ACE_HAS_EXPLICIT_TEMPLATE_INSTANTIATION */

#endif /* TAO_HAS_AMI_POLLER == 1 */
