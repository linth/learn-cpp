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
<<<<<<< HEAD
*/
#include <sys/types.h>
// #include <sys/ipc.h>
// #include <sys/msg.h>
// #include <windows.h>

/**
 * the procedure of message queue:
 *  msgget -> msgend -> 
*/
=======
 *  - https://www.geeksforgeeks.org/ipc-using-message-queues/
*/


/**
 * ftok(): is use to generate a unique key.
 * msgget(): either returns the message queue identifier for a newly created message queue or returns the identifiers for a queue which exists with the same key value.
 * msgsnd(): Data is placed on to a message queue by calling msgsnd().
 * msgrcv(): messages are retrieved from a queue.
 * msgctl(): It performs various operations on a queue. Generally it is use to destroy message queue.
 */
>>>>>>> 47075e800fb7bedfb4c8b60522bc6b802c3b74bc
