/*
 * @(#)reda_sequenceNumber_impl.h    generated by: makeheader    Mon Dec  3 23:07:54 2007
 *
 *		built from:	sequenceNumber_impl.ifc
 */

#ifndef reda_sequenceNumber_impl_h
#define reda_sequenceNumber_impl_h


#ifdef __cplusplus
    extern "C" {
#endif


  #define REDASequenceNumber_setZero(sequenceNumber) \
    (sequenceNumber)->high = 0; \
    (sequenceNumber)->low = 0

  #define REDASequenceNumber_isZero(sequenceNumber) \
    ((sequenceNumber)->high == 0 && \
     (sequenceNumber)->low == 0)

  #define REDASequenceNumber_isMaximum(sequenceNumber) \
    ((sequenceNumber)->high == REDA_SEQUENCE_NUMBER_HIGH_MAX && \
     (sequenceNumber)->low == REDA_SEQUENCE_NUMBER_LOW_MAX)

  #define REDASequenceNumber_setMaximum(sequenceNumber) \
    (sequenceNumber)->high = REDA_SEQUENCE_NUMBER_HIGH_MAX; \
    (sequenceNumber)->low = REDA_SEQUENCE_NUMBER_LOW_MAX

  #define REDASequenceNumber_compare(sequenceNumber1, sequenceNumber2) \
    ((((sequenceNumber1)->high) > ((sequenceNumber2)->high)) ? 1 : \
     ((((sequenceNumber1)->high) < ((sequenceNumber2)->high)) ? -1 : \
      ((((sequenceNumber1)->low) > ((sequenceNumber2)->low)) ? 1 : \
       ((((sequenceNumber1)->low) < ((sequenceNumber2)->low)) ? -1 : 0))))

  #define REDASequenceNumber_add(answer, sn1, sn2) \
  { \
    (answer)->high = (sn1)->high + (sn2)->high; \
    (answer)->low = (sn1)->low + (sn2)->low; \
    if (((answer)->low < (sn1)->low) || ((answer)->low < (sn2)->low)) { \
        ++(answer)->high; \
    } \
  }

  #define REDASequenceNumber_subtract(answer, sn1, sn2) \
  { \
   (answer)->high  = (sn1)->high - (sn2)->high; \
   (answer)->low = (sn1)->low - (sn2)->low; \
   if ((answer)->low > (sn1)->low) { \
       --(answer)->high; \
    } \
  }

  #define REDASequenceNumber_plusplus(sequenceNumber) \
    ((++(sequenceNumber)->low) == 0) ? ++(sequenceNumber)->high : 0

  #define REDASequenceNumber_minusminus(sequenceNumber) \
  { \
    register RTI_UINT32 originalLow = (sequenceNumber)->low; \
    --(sequenceNumber)->low; \
    if (((sequenceNumber)->low > originalLow)) { --(sequenceNumber)->high; } \
  }

  #define REDASequenceNumber_increment(answer, sequenceNumber) \
  { \
    register RTI_UINT32 currentLow = (answer)->low; \
    (answer)->high += (sequenceNumber)->high; \
    (answer)->low += (sequenceNumber)->low; \
    if (((answer)->low < (sequenceNumber)->low) || \
        ((answer)->low < currentLow)) { \
        ++(answer)->high; \
    } \
  }

  #define REDASequenceNumber_decrement(answer, sequenceNumber) \
  { \
    register RTI_UINT32 currentLow = (answer)->low; \
    (answer)->high -= (sequenceNumber)->high; \
    (answer)->low -= (sequenceNumber)->low; \
    if (((answer)->low > currentLow)) { --(answer)->high; } \
  }

  #define REDASequenceNumber_max(answer, sn1, sn2) \
  { \
    if (REDASequenceNumber_compare((sn1), (sn2)) > 0) { \
      (answer)->high = (sn1)->high; (answer)->low = (sn1)->low; \
    } else { \
      (answer)->high = (sn2)->high; (answer)->low = (sn2)->low; \
    } \
  }

  #define REDASequenceNumber_min(answer, sn1, sn2) \
  { \
    if (REDASequenceNumber_compare((sn1), (sn2)) < 0) { \
      (answer)->high = (sn1)->high; (answer)->low = (sn1)->low; \
    } else { \
      (answer)->high = (sn2)->high; (answer)->low = (sn2)->low; \
    } \
  }



#ifdef __cplusplus
    }	/* extern "C" */
#endif

#endif /* reda_sequenceNumber_impl_h */