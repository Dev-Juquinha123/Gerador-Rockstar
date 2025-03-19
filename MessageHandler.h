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

private:
    std::vector<std::string> messages;
};

#endif
