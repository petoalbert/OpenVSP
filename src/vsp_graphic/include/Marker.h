#ifndef _VSP_GRAPHIC_MARKER_OBJECT_H
#define _VSP_GRAPHIC_MARKER_OBJECT_H

#include "Renderable.h"

namespace VSPGraphic
{
/*!
* This class represents a single marker(lines and points) in scene.
* Derived from Renderable.
*/
class Marker : public Renderable
{
public:
    /*!
    * Constructor.
    * geomType - type of primitive.
    * VSP_POINTS, VSP_LINES, VSP_LINE_LOOP, VSP_LINE_STRIP.
    */
    Marker( Common::VSPenum geomType );
    /*!
    * Destructor.
    */
    virtual ~Marker();

protected:
    /*!
    * Preprocessing.
    */
    virtual void _predraw();
    /*!
    * Draw Marker.
    */
    virtual void _draw();
    /*!
    * Postprocessing.
    */
    virtual void _postdraw();

private:
    void _draw_Points( float r, float g, float b, float a = 1.f, float size = 0.f );
    void _draw_Points();

    void _draw_Lines( float r, float g, float b, float a = 1.f, float size = 0.f );
    void _draw_Lines();

    void _draw_VBuffer();
    void _draw_EBuffer();
};
}
#endif