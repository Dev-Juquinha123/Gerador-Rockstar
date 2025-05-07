#ifndef MESSAGE_HANDLER_H
#define MESSAGE_HANDLER_H

#include <iostream>
#include <fstream>
#include <vector>


class MessageHandler {
public:


    void printMessage(const std::string& message, int count);

    void saveMessageToFile(const std::string& message);

    void loadMessagesFromFile();

    void clearMessages();

    bool fileExists(const std::string& filename);


private:

    std::vector<std::string> messages;

};

class Vehicle
{


public:

    Vehicle();

	~Vehicle();

    int vehs = 0;
private:
    // here


};

Vehicle::Vehicle()
{

}

Vehicle::~Vehicle()
{
    // describe
}

class vector3d
{
public:
	vector3d();

	~vector3d();

private:

};

vector3d::vector3d()
{
    // here also :)
}

vector3d::~vector3d()
{
    // vx3p.asi
}

#endif
