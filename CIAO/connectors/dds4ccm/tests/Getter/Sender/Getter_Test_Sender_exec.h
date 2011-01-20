// -*- C++ -*-
// $Id$

/**
 * Code generated by the The ACE ORB (TAO) IDL Compiler v1.8.3
 * TAO and the TAO IDL Compiler have been developed by:
 *       Center for Distributed Object Computing
 *       Washington University
 *       St. Louis, MO
 *       USA
 *       http://www.cs.wustl.edu/~schmidt/doc-center.html
 * and
 *       Distributed Object Computing Laboratory
 *       University of California at Irvine
 *       Irvine, CA
 *       USA
 * and
 *       Institute for Software Integrated Systems
 *       Vanderbilt University
 *       Nashville, TN
 *       USA
 *       http://www.isis.vanderbilt.edu/
 *
 * Information about TAO is available at:
 *     http://www.cs.wustl.edu/~schmidt/TAO.html
 **/
#ifndef CIAO_GETTER_TEST_SENDER_EXEC_HCBIGK_H_
#define CIAO_GETTER_TEST_SENDER_EXEC_HCBIGK_H_

#include /**/ "ace/pre.h"

#include "Getter_Test_SenderEC.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */

#include /**/ "Sender_exec_export.h"
#include "tao/LocalObject.h"

namespace CIAO_Getter_Test_Sender_Impl
{
  class Sender_exec_i;

  /**
   * Pulse generator.
   */
  class pulse_Generator :
    public ACE_Event_Handler
  {
  public:
    pulse_Generator (Sender_exec_i &callback);

    virtual int handle_timeout (const ACE_Time_Value &tv,
                                const void *arg);
  private:
    Sender_exec_i &pulse_callback_;
  };

  /**
   * Provider Executor Implementation Class: info_out_connector_status_exec_i
   */

  class info_out_connector_status_exec_i
    : public virtual ::CCM_DDS::CCM_ConnectorStatusListener,
      public virtual ::CORBA::LocalObject
  {
  public:
    info_out_connector_status_exec_i (
      ::Getter_Test::CCM_Sender_Context_ptr ctx,
      Sender_exec_i & callback);
    virtual ~info_out_connector_status_exec_i (void);

    //@{
    /** Operations and attributes from CCM_DDS::ConnectorStatusListener. */

    virtual
    void on_inconsistent_topic (::DDS::Topic_ptr the_topic,
    const ::DDS::InconsistentTopicStatus & status);

    virtual
    void on_requested_incompatible_qos (::DDS::DataReader_ptr the_reader,
    const ::DDS::RequestedIncompatibleQosStatus & status);

    virtual
    void on_sample_rejected (::DDS::DataReader_ptr the_reader,
    const ::DDS::SampleRejectedStatus & status);

    virtual
    void on_offered_deadline_missed (::DDS::DataWriter_ptr the_writer,
    const ::DDS::OfferedDeadlineMissedStatus & status);

    virtual
    void on_offered_incompatible_qos (::DDS::DataWriter_ptr the_writer,
    const ::DDS::OfferedIncompatibleQosStatus & status);

    virtual
    void on_unexpected_status (::DDS::Entity_ptr the_entity,
    ::DDS::StatusKind status_kind);
    //@}

  private:
    ::Getter_Test::CCM_Sender_Context_var ciao_context_;
    Sender_exec_i &callback_;
  };

  /**
   * Component Executor Implementation Class: Sender_exec_i
   */

  class Sender_exec_i
    : public virtual Sender_Exec,
      public virtual ::CORBA::LocalObject
  {
  public:
    Sender_exec_i (void);
    virtual ~Sender_exec_i (void);

    //@{
    /** Supported operations and attributes. */

    //@}

    //@{
    /** Component attributes and port operations. */

    virtual ::CCM_DDS::CCM_ConnectorStatusListener_ptr
    get_info_out_connector_status (void);

    virtual ::CORBA::UShort keys (void);

    virtual void keys (::CORBA::UShort keys);

    virtual ::CORBA::UShort iterations (void);

    virtual void iterations (::CORBA::UShort iterations);
    //@}

    //@{
    /** Operations from Components::SessionComponent. */
    virtual void set_session_context (::Components::SessionContext_ptr ctx);
    virtual void configuration_complete (void);
    virtual void ccm_activate (void);
    virtual void ccm_passivate (void);
    virtual void ccm_remove (void);
    //@}

    //@{
    /** User defined public operations. */
    void start (void);
    void tick (void);
    //@}

  private:
    ::Getter_Test::CCM_Sender_Context_var ciao_context_;

    //@{
    /** Component attributes. */
    ::CCM_DDS::CCM_ConnectorStatusListener_var ciao_info_out_connector_status_;

    ::CORBA::UShort keys_;

    ::CORBA::UShort iterations_;
    //@}

    //@{
    /** User defined members. */
    bool          done_;
    bool          ccm_activated_;
    CORBA::ULong last_iter_;
    pulse_Generator * ticker_;
    //@}

    //@{
    /** User defined private operations. */
    void start_timeout_tests (void);
    void write_many (void);

    //@}

    /// Get the ACE_Reactor
    ACE_Reactor* reactor (void);
  };

  extern "C" SENDER_EXEC_Export ::Components::EnterpriseComponent_ptr
  create_Getter_Test_Sender_Impl (void);
}

#include /**/ "ace/post.h"

#endif /* ifndef */
