#include "Cerrajero.h"

/**
 * Cerrajero implementation
 */

Cerrajero::Cerrajero(string Nombre_, string Apellido_, string DNI_, TipoSexo Sexo_, unsigned int Salario_, string TipoTransporte_, time_t TiempoTrabajado_, string Alarma_):Empleado(Nombre_, Apellido_, DNI_, Sexo_, Salario_, TipoTransporte_, TiempoTrabajado_)
{
    this->Alarma = Alarma_;
}

Cerrajero::~Cerrajero()
{

}

string Cerrajero::get_Nombre()
{
    return this->Nombre;
}

string Cerrajero::get_Alarma() 
{
    return this->Alarma;
}

void Cerrajero::set_Alarma(string NuevoEstado) 
{
    this->Alarma = NuevoEstado;
}

bool Cerrajero::DuplicarLlaves(LLaves llavelinda, Cliente cli) //Funcion duplicamos la llave segun lo que quiera el cliente
{
    if (llavelinda.get_LLavecita() == LLavesMagneticas)
    {
        if (cli.get_Dupllaves() == true && llavelinda.get_PermisoEdificio() == true)
        {
            cout << "Duplico una llave: " << llavelinda.get_LLavecita() << " del edificio:" << cli.get_Direccion() << endl;

            return true;
        }
        else
        {
            cout << "No tengo permiso para duplicar la llave." << endl;
            return false;
        }
    }
    else
        return false;
}
