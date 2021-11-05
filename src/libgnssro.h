#ifndef _LIBGNSSRO_H
#define _LIBGNSSRO_H

class Planck
{
	const float h;
	const float kB;
public:
	Planck(float,float);
	~Planck();
	float operator()(float,float);
};

#endif  // _LIBGNSSRO_H
