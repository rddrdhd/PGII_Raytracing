#ifndef OBJ_LOADER_H_
#define OBJ_LOADER_H_

#include "vector3.h"
#include "surface.h"

int MaterialIndex( std::vector<Material *> & materials, const char * material_name );

/*! \fn int LoadOBJ( const char * file_name, Vector3 & default_color, std::vector<Surface *> & surfaces, std::vector<Material *> & materials )
\brief Na�te geometrii z OBJ souboru \a file_name.
\param file_name �pln� cesta k OBJ souboru v�etn� p��pony.
\param surfaces pole ploch, do kter�ho se budou ukl�dat na�ten� plochy.
\param materials pole materi�l�, do kter�ho se budou ukl�dat na�ten� materi�ly.
\param default_color v�choz� barva vertexu.
*/
int LoadOBJ( const char * file_name, std::vector<Surface *> & surfaces, std::vector<Material *> & materials,
	const bool flip_yz = false, const Vector3 default_color = Vector3( 0.5f, 0.5f, 0.5f ) );

#endif
