#include <stdio.h>
#include <stddef.h>
#include <string.h>

typedef struct myMessage_t{
	unsigned int id;
	char* message;
}myMessage;

void myfunc(myMessage * message)
{
	if( strlen(message->message) > 0 )
		printf("msg id = %d    msg = %s", message->id, message->message);
	else
		printf("msg id = %d    msg = no message", message->id);

}

void (*cb)(myMessage * );



int main()
{
	myMessage msg1;
	msg1.id = 10;
	msg1.message = "my Message";
	cb = myfunc;
	cb(&msg1);
	return 0;
}
