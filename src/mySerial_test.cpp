#include "../include/mySerial.h"
#include <iostream>
using namespace std;



int  main( int argc, char** argv )
{

    mySerial serial(argv[1],9600);
    unsigned char  * data;

    while(1){

        // One Byte At the time
        serial.Send(128);
        // serial.Send(132);

        // An array of byte
        // unsigned char  dataArray[] = { 142,0};
        // serial.Send(dataArray,sizeof(dataArray));

        // // Or a string
        // serial.Send("this is it\r\n");

        serial.Receive(data, 1)

        cout << data << endl;

    }

    return 0;
}
