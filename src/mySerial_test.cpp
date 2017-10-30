#include "../include/mySerial.h"
#include <iostream>
using namespace std;



int  main( int argc, char** argv )
{

    mySerial serial(argv[1],115200);

    while(1){

        // One Byte At the time
        serial.Send(128);
        serial.Send(132);

        // An array of byte
        // unsigned char  dataArray[] = { 142,0};
        // serial.Send(dataArray,sizeof(dataArray));

        // // Or a string
        // serial.Send("this is it\r\n");

        cout << serial.Receive() << endl;

    }

    return 0;
}
