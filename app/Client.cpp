#include "Client.h"
Message msg;

Message createMessage(int droneType) {
    msg.mtype=1;
    msg.droneType = droneType; 
    if (droneType==1){
        msg.count = 7;
        msg.points[0] = {0, 0};
        msg.points[1] = {0, 5};   
        msg.points[2] = {5, 7};   
        msg.points[3] = {5, 9};  
        msg.points[4] = {10, 10};
        msg.points[5]={15,12};
        msg.points[6]={20,15};
    }
    else{
        msg.count = 5;
        msg.points[0] = {0, 0};
        msg.points[1] = {5, 3};
        msg.points[2] = {10, 8};
        msg.points[3] = {13, 10};
        msg.points[4]={5,3};

    }
    return msg;
}