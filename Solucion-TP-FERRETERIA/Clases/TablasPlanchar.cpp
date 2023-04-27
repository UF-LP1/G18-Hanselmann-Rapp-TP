/**
 * Project Untitled
 */


#include "TablasPlanchar.h"

/**
 * TablasPlanchar implementation
 */


/**
 * @return TipoTabla
 */
TipoTabla TablasPlanchar::get_Planchar() {

    return this->TipoTabla;

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

    this->TipoTabla = NuevoEstado;

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