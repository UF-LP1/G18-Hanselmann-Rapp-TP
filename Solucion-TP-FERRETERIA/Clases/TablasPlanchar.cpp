/**
 * Project Untitled
 */


#include "TablasPlanchar.h"

/**
 * TablasPlanchar implementation
 */
TablasPlanchar::TablasPlanchar(TipoTabla TipoTabla_, string Marca_, string MaterialPlanchar_)
{
    this->tipotab = TipoTabla_;
    this->Marca = Marca_;
    this->MaterialPlanchar = MaterialPlanchar_;
}

TablasPlanchar::~TablasPlanchar()
{

}
/**
 * @return TipoTabla
 */
TipoTabla TablasPlanchar::get_Planchar() {

    return this->tipotab;

}

/**
 * @return string
 */
string TablasPlanchar::get_Marca() {

    return this->Marca;

}

/**
 * @return string
 */
string TablasPlanchar::get_MaterialPlanchar() {

    return MaterialPlanchar;

}

/**
 * @param TipoTabla
 * @return void
 */
void TablasPlanchar::set_Planchar(TipoTabla NuevoEstado){

    this->tipotab = NuevoEstado;

}

/**
 * @param string
 * @return void
 */
void TablasPlanchar::set_Marca(string NuevoEstado){

    this->Marca = NuevoEstado;

}

/**
 * @param string
 * @return void
 */
void TablasPlanchar::set_MaterialPlanchar(string NuevoEstado){

    this->MaterialPlanchar = NuevoEstado;

}