#include "fifo.h"

fifo::fifo(int q[100]) {
    for (int i = 0; i < 100; i++)
        _queue[i] = q[i];
}

fifo fifo::operator<<(int n) {
    for (int i = 99; i > -1; i--)
        _queue[i+1] = _queue[i];
    _queue[0] = n;
    return _queue;
}

int fifo::operator>>(int n) {
    n = _queue[0];
    _queue[0] = 0;
    for (int i = 1; i < 100; i++)
        _queue[i-1] = _queue[i];
    return n;
}
