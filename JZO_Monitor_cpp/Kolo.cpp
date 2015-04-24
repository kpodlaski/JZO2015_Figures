/**
 * Project Untitled
 */

#include "stdafx.h"
#include "Kolo.h"

/**
 * Kolo implementation
 */


/**
 * @param x
 * @param y
 * @param r
 */
Kolo::Kolo(int _x, int _y, int _r): x(_x), y(_y), r(_r){

}

void Kolo::przesun(int _x, int _y){
x+=_x;
y+=_y;
}