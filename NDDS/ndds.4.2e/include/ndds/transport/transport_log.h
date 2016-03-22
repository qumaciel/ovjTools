/*
 * @(#)transport_log.h    generated by: makeheader    Mon Dec  3 23:08:03 2007
 *
 *		built from:	log.ifc
 */

#ifndef transport_log_h
#define transport_log_h


  #ifndef log_common_h
    #include "log/log_common.h"
  #endif
  #ifndef transport_dll_h
    #include "transport/transport_dll.h"
  #endif

#ifdef __cplusplus
    extern "C" {
#endif


/*e \ingroup NDDS_TransportLogMessageClass
  \brief Transport-Plugin core identifier. For use in log message numbers.
  @see RTILogNumberBitmapClass
 */
  #define SUBMODULE_TRANSPORT_COMMON           (0x0000)

/*e \ingroup NDDS_TransportLogMessageClass
  \brief Transport-Plugin socket util identifier. For use in log message numbers.
  @see RTILogNumberBitmapClass
 */
  #define SUBMODULE_TRANSPORT_SOCKETUTIL       (0x0001)

/*e \ingroup NDDS_TransportLogMessageClass
  \brief IP Transport-Plugin submodule identifier. For use in log message numbers.
  @see RTILogNumberBitmapClass
 */
  #define SUBMODULE_TRANSPORT_PLUGIN_UDPV4     (0x0002)

/*e \ingroup NDDS_TransportLogMessageClass
  \brief INTRA Transport-Plugin identifier. For use in log message numbers.
  @see RTILogNumberBitmapClass
 */
  #define SUBMODULE_TRANSPORT_PLUGIN_INTRA     (0x0003)

/*e \ingroup NDDS_TransportLogMessageClass
  \brief SHMEM Transport-Plugin identifier. For use in log message numbers.
  @see RTILogNumberBitmapClass
 */
  #define SUBMODULE_TRANSPORT_PLUGIN_SHMEM     (0x0004)

/*e \ingroup NDDS_TransportLogMessageClass
  \brief META Transport-Plugin identifier. For use in log message numbers.
  @see RTILogNumberBitmapClass
 */
  #define SUBMODULE_TRANSPORT_PLUGIN_META      (0x0008)

/*e \ingroup NDDS_TransportLogMessageClass
  \brief IPv6 Transport-Plugin submodule identifier. For use in log message numbers.
  @see RTILogNumberBitmapClass
 */
  #define SUBMODULE_TRANSPORT_PLUGIN_UDPV6     (0x0010)



  #define NDDS_TRANSPORT_SUBMODULE_MASK_COMMON  (0x0001)


  #define NDDS_TRANSPORT_SUBMODULE_MASK_SOCKETUTIL  (0x0002)


  #define NDDS_TRANSPORT_SUBMODULE_MASK_UDPV4   (0x0010)


  #define NDDS_TRANSPORT_SUBMODULE_MASK_INTRA   (0x0020)


  #define NDDS_TRANSPORT_SUBMODULE_MASK_SHMEM   (0x0040)


  #define NDDS_TRANSPORT_SUBMODULE_MASK_META   (0x0080)


  #define NDDS_TRANSPORT_SUBMODULE_MASK_UDPV6   (0x0100)


  #define NDDS_TRANSPORT_SUBMODULE_MASK_ALL     (0xFFFF)

extern NDDS_Transport_DllVariable const struct RTILogMessage NDDS_TRANSPORT_LOG_SEND_FAILURE_s;

extern NDDS_Transport_DllExport void NDDS_Transport_Log_set_verbosity(
    RTILogBitmap submoduleMask, int verbosity);

extern NDDS_Transport_DllExport void NDDS_Transport_Log_setBitmaps(
    RTILogBitmap submoduleMask, RTILogBitmap instrumentationMask);

extern NDDS_Transport_DllExport void NDDS_Transport_Log_getBitmaps(
    RTILogBitmap *submoduleMask, RTILogBitmap *instrumentationMask);

extern NDDS_Transport_DllVariable const struct RTILogMessage
NDDS_TRANSPORT_LOG_INVALID_PORT_d;

extern NDDS_Transport_DllVariable const struct RTILogMessage
NDDS_TRANSPORT_SOCKETUTIL_LOG_IGNORE_UNREACHABLE_FAILURE;

extern NDDS_Transport_DllVariable const struct RTILogMessage
NDDS_TRANSPORT_SOCKETUTIL_LOG_PORT_IN_USE_d;

extern NDDS_Transport_DllVariable const struct RTILogMessage
NDDS_TRANSPORT_SOCKETUTIL_LOG_BIND_FAILURE;

extern NDDS_Transport_DllVariable const struct RTILogMessage
NDDS_TRANSPORT_SOCKETUTIL_LOG_MESSAGE_RECEIVE_FAILURE;

extern NDDS_Transport_DllVariable const struct RTILogMessage
NDDS_TRANSPORT_SOCKETUTIL_LOG_MESSAGE_SEND_FAILURE;


#ifdef __cplusplus
    }	/* extern "C" */
#endif

#endif /* transport_log_h */