/**
 * message queue
 *  - ftok()
 *  - msgget()
 *    - 建立 message queue
 *  - msgsnd()
 *    - 將 message 丟到 message queue
 *  - msgrcv()
 *    - 從 message queue 讀取 message
 *  - msgbuf: struct
 *    - 結構體
 * 
 * Reference:
 *  - https://www.twblogs.net/a/5c263ac1bd9eee16b4a80bb8
*/
#include <sys/types.h>
// #include <sys/ipc.h>
// #include <sys/msg.h>
// #include <windows.h>

/**
 * the procedure of message queue:
 *  msgget -> msgend -> 
*/