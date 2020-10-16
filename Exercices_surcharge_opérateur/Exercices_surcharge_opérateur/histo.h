#pragma once

//Exercice 92

class histo
{
private:
	int m_ninter;
	float m_famplitude;
	float m_min;
	float m_max;
	int* m_tab;
public:
	histo(float min=0, float max=10, int ninter=1);
	~histo();


	histo& operator<<(float const nX);
	int operator[](int const nI)const;
};