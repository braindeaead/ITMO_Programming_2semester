#pragma once

class IDialogInitiable {
public:
// Задать параметры объекта с помощью диалога с пользователем.
    virtual void initFromDialog() = 0;
};