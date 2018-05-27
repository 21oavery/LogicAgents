#define LOAG_ASSERT 0
#define LOAG_QUERY 1
#define LOAG_REPLY 2

#define LOAG_MSGID_SIZE 1
#define LOAG_MSG_DATA_SIZE 

struct loag_msg_header {
    unsigned long id_min[LOAG_MSGID_SIZE];
    unsigned long msgSize;
    unsigned char type;
}
