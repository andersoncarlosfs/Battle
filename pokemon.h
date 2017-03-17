/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   pokemon.h
 * Author: lsdfusion
 *
 * Created on 10 March 2017, 14:03
 */

#ifndef POKEMON_H
#define POKEMON_H

/*
#include <vector>       
*/

#ifdef __APPLE__
#include <OpenGL/OpenGL.h>
#else
#include <GL/gl.h> 
#endif

#include "glm.h"

#include "mover.h"
#include "attack.h"

/*
using namespace std;
*/

class Pokemon : public Object {
public:
    GLMmodel* model;    
    Attack* attack;
    Pokemon(char*);
    virtual ~Pokemon();
    void draw();
private:
    /*
       vector<vec3> vertexes;
       vector<vec2> textures;
       vector<vec3> normals;
       vector<GLushort> faces;
     */
};

#endif /* POKEMON_H */

