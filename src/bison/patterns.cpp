#pragma once
#include <bison/patterns.h>

//Create a new command buffer.
st_cmdbuffer* new_cmdbuffer() {
    st_cmdbuffer* o = new st_cmdbuffer();
    return o;
}

//Create a new command with optional data supplied.
st_command* new_command(es_func cf, es_func cb, 
    void* d1p, es_type d1t, void* d2p, es_type d2t, void* d3p, es_type d3t) {
    st_command* o = new st_command;
    o->cmd_forwards = cf;
    o->cmd_backwards = cb;
    o->d1_ptr =d1p;
    o->d1_type=d1t;
    o->d2_ptr =d2p;
    o->d2_type=d2t;
    o->d3_ptr =d3p;
    o->d3_type=d3t;
    return o;
}