#pragma once
#ifndef INPUT_HANDLER_H
#define INPUT_HANDLER_H

#include <iostream>
#include <string>


class InputHandler {
public:

    InputHandler();

    std::string getUserMessage();

    int getUserCount();
};

#endif
