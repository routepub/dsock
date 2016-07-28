/*

  Copyright (c) 2016 Martin Sustrik

  Permission is hereby granted, free of charge, to any person obtaining a copy
  of this software and associated documentation files (the "Software"),
  to deal in the Software without restriction, including without limitation
  the rights to use, copy, modify, merge, publish, distribute, sublicense,
  and/or sell copies of the Software, and to permit persons to whom
  the Software is furnished to do so, subject to the following conditions:

  The above copyright notice and this permission notice shall be included
  in all copies or substantial portions of the Software.

  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
  THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
  FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS
  IN THE SOFTWARE.

*/

#ifndef DSOCK_HELPERS_H_INCLUDED
#define DSOCK_HELPERS_H_INCLUDED

#include <stdint.h>
#include <sys/socket.h>
#include <sys/types.h>

int dsunblock(
    int s);
int dsconnect(
    int s,
    const struct sockaddr *addr,
    socklen_t addrlen,
    int64_t deadline);
int dsaccept(
    int s,
    struct sockaddr *addr,
    socklen_t *addrlen,
    int64_t deadline);
ssize_t dssend(
    int s,
    const void *buf,
    size_t len,
    int64_t deadline);
ssize_t dsrecv(
    int s,
    void *buf,
    size_t len,
    int64_t deadline);
int dsclose(
    int s);

#endif

