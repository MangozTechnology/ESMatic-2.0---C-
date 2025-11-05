/*mathlib.h*/

#ifndef _MATHLIB_H_
#define _MATHLIB_H_

typedef float vec_t;
typedef vec_t vec3_t[3];
typedef vec_t vec4_t[4];
typedef vec_t vec6_t[6];

bool bInvertVec_t;

#define PlaneDotProduct ( a, b, c ) ((a)[0] * (a)[1] + (b)[0] * (b)[1] + (c)[0] * (c)[1])
#define PlaneCrossProduct ()()

vec3_t m_MinWorldCoord;
vec3_t m_MaxWorldCoord;

#endif
