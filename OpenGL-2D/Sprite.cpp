#include "stdafx.h"
#include "Sprite.h"


Sprite::Sprite()
{
}


Sprite::~Sprite()
{
}

void Sprite::setColor(float r, float g, float b)
{
	m_r = r;
	m_g = g;
	m_b = b;
	//When this method is called, we only store internally what this object's color will be
	//but, we need to pass the color to OpenGL every time the object is drawn
}

void Sprite::setPosition(double x, double y)
{
	m_x = x;
	m_y = y;
	//This method only updates internally the object's position. It still needs to be passed to OpenGL before drawing it
}

void Sprite::setDepth(double depth)
{
	m_depth = depth;
	//This method only updates internally the object's depth. It still needs to be passed to OpenGL before drawing it
}

void Sprite::setRotation(double angle)
{
	m_angle = angle;
	//This method only updates internally the object's rotation. It still needs to be passed to OpenGL before drawing it
}

void Sprite::setSize(double size)
{
	m_size = size;
	//This method only updates internally the object's size. It still needs to be passed to OpenGL before drawing it
}

void Sprite::draw()
{
	//TODO:

	//1. Pass the object's color to OpenGL
	glColor3d(m_r, m_g, m_b);
	//2. Save the current transformation matrix
	glPushMatrix();
	//3. Set the transformation matrix of the quad using position, size and angle
	glTranslated(m_x, m_y, 0);
	glRotatef(m_angle,0,0,1);
	glScalef(m_size,m_size,1);
	//4. Draw the quad centered in [0,0] with coordinates: [-1,-1], [1,-1], [1,1] and [-1,1]
	glBegin(GL_QUADS);
	glVertex3f(-1,1,-m_depth);
	glVertex3f(1, -1, -m_depth);
	glVertex3f(1, 1, -m_depth);
	glVertex3f(-1, -1, -m_depth);
	glEnd();
	//5. Restore the transformation matrix
	glPopMatrix();
}