#pragma once

class fifo {
    private:
        int _queue[100];
    public:
        fifo (int q[100] = {});

        fifo operator <<(int n);

        int operator >>(int n);
};
