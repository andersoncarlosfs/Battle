/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   lake.h
 * Author: deboramorita
 *
 * Created on March 23, 2017, 2:17 AM
 */

#ifndef LAKE_H
#define LAKE_H

#include "object.h"

class Lake : public Object {
public:
    Lake();
    virtual ~Lake();
    void draw();
    void idle();
private:
};

#endif /* LAKE_H */

