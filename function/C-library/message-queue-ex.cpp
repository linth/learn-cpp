/**
 * message queue
 *  - ftok()
 *  - msgget()
 *  - msgsnd()
 *  - msgrcv()
 *  - msgbuf: struct
 * 
 * Reference:
 *  - https://www.twblogs.net/a/5c263ac1bd9eee16b4a80bb8
 *  - https://www.geeksforgeeks.org/ipc-using-message-queues/
*/


/**
 * ftok(): is use to generate a unique key.
 * msgget(): either returns the message queue identifier for a newly created message queue or returns the identifiers for a queue which exists with the same key value.
 * msgsnd(): Data is placed on to a message queue by calling msgsnd().
 * msgrcv(): messages are retrieved from a queue.
 * msgctl(): It performs various operations on a queue. Generally it is use to destroy message queue.
 */