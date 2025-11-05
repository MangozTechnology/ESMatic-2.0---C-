/*qesglobals.h*/

#ifndef _QES_GLOBALS_H_
#define _QES_GLOBALS_H_

//have mathlib...
#include "libs/mathlib.h"

class QESGlobals{
public:
  QESGlobals();//constructor
  virtual ~QESGlobals();//deconstructor

  int m_nEditorId = 0;//app id or state

  bool m_bBrushIsSel;//is brush selected?
  bool m_bFaceIsSel;//is face selected?

  bool m_bBrushIsCaulked;// does the brush hacve a caulk texture auto constructed

  unsigned char * m_sPolygonStipple[32];//stipple for grid views and brush sel and brush drawing

  const char* const QES_GLOBAL_BRUSH_CREATOR_MODULE("ESMaticBspMapBrushPrimit\n");

  vec3_t d_grid_scale;
  vec3_t d_grid_celi;
  vec3_t d_grid_floor;
  vec3_t d_grid_width;
  vec3_t d_grid_height;

  vec3_t d_global_world_min = m_MinWorldCoord;
  vec3_t d_global_world_max = m_MaxWorldCoord;

};


#endif
