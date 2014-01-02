#if !defined(_RT_THREAD_PRIORITY_H_)
#define _RT_THREAD_PRIORITY_H_

#define MGMT_DATA_RX_THREAD_PRIORITY            90
#define MGMT_M2TS_PKT_PROCESS_THREAD_PRIORITY   89
#define VIDEO_DECODER_THREAD_PRIORITY           87
#define VIDEO_SCHEDULER_THREAD_PRIORITY         87
#define MGMT_AUDIO_DECODER_THREAD_PRIORITY      85
#define MGMT_AUDIO_SCHEDULER_THREAD_PRIORITY    85

#define RT_THREAD_PRIORITY_DEFAULT_PRIORITY 20

#endif // #if !defined(_RT_THREAD_PRIORITY_H_)
