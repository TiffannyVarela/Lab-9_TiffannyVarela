#include "Persona.h"
#include "Clientes.h"
#include "Repartidor.h"
#include "EmpleadoOficina.h"
#include "NegociosAsociados.h"
#include "Producto.h"
#include "Orden.h"
#include <typeinfo>
#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::getline;
#include <string>
using std::string;
#include <vector>
using std::vector;

int menu();
int menu2();
int menu3();

int main(){
    int opc =0;
    int opc2=0;
    int opcpersona=0;
    vector <Persona*> personas;
    vector <Clientes*> clientes;
    vector<Repartidor*>repartidores;
    vector<EmpleadoOficina*>empleados;
    string nombre, id;
    int edad;
    string direccion, num_telefono, num_tarjeta;
    int num_pedidos=0;
    Clientes* cliente;
    string placa_moto, zona_trabajo;
    int ordenes_atendidas=0;
    Repartidor* repartidor;
    int horas_trabajadas, ordenes_atendidas_empleado=0;
    string local_trabajo;
    EmpleadoOficina* empleado;
    int opcproducto=0, mas_producto=0;
    string nombre_pro, tipo_pro;
    Producto* producto;
    string nombre_negocio, ubicacion;
    int num_locales;
    NegociosAsociados* negocio;
    vector <NegociosAsociados*> negocios;
    vector <Producto*> productos;
    int posicion_eliminar;

    int opcorden=0;

    int pos_cliente=0, pos_repartidor=0, pos_negocio=0, pos_producto=0;
    string tipo_seleccionado, estado="Proceso";
    Clientes* cliente_orden;
    Repartidor* repartidor_orden;
    NegociosAsociados* negocio_orden;
    Producto* producto_orden;
    Orden* orden;
    vector <Orden*> pedidos;
    vector <Orden*> terminadas;
    Orden* terminada;
    string nuevo_tipo;
    int selec_orden=0;
    int suma_cliente, suma_repartidor, suma_empleado;
    do
    {
        switch (opc=menu())//inicio switch general
        {
        case 1:
            switch (opc2=menu2())//incio switch personas
            {
            case 1:
                cout<<"Nombre: "<<endl;
                getline(cin, nombre);
                cout<<"ID: "<<endl;
                getline(cin, id);
                cout<<"Edad: "<<endl;
                cin>>edad;
                cout<<"Que desea agregar? "<<endl
                <<"1.- Cliente"<<endl
                <<"2.- Repartidor"<<endl
                <<"3.- Empleado de Oficina"<<endl;
                cin>>opcpersona;
                if (opcpersona==1)
                {
                    cout<<"Direccion: "<<endl;
                    getline(cin, direccion);
                    cout<<"Numero de Telefono: "<<endl;
                    getline(cin, num_telefono);
                    cout<<"Numero de Tarjeta: "<<endl;
                    getline(cin, num_tarjeta);
                    cliente = new Clientes(nombre, id, edad, direccion, num_telefono, num_tarjeta, num_pedidos);
                    personas.push_back(cliente);
                    clientes.push_back(cliente);
                }

                if (opcpersona==2)
                {
                    cout<<"Placa de la Moto: "<<endl;
                    getline(cin, placa_moto);
                    cout<<"Zona de Trabajo Preferida: "<<endl;
                    getline(cin, zona_trabajo);
                    repartidor = new Repartidor(nombre, id, edad, placa_moto, zona_trabajo, ordenes_atendidas);
                    personas.push_back(repartidor);
                    repartidores.push_back(repartidor);
                }

                if (opcpersona==3)
                {
                    cout<<"Horas Trabajadas: "<<endl;
                    cin>>horas_trabajadas;
                    cout<<"Local de Trabajo: "<<endl;
                    getline(cin, local_trabajo);
                    empleado = new EmpleadoOficina(nombre, id, edad, horas_trabajadas, local_trabajo, ordenes_atendidas_empleado);
                    personas.push_back(empleado);
                    empleados.push_back(empleado);
                }
                
                break;

            case 2:
                    for (int  i = 0; i < personas.size(); i++)
                    {
                        cout<<"*******************************************"<<endl;
                        cout<<"Persona: "<<i<<endl;
                        cout<<"Nombre: "<<personas[i]->getNombre<<endl;
                        cout<<"*******************************************"<<endl;
                    }
                    cout<<"Que posicion desea eliminar? "<<endl;
                    cin>>posicion_eliminar;
                    personas.erase(personas.begin()+posicion_eliminar);
                   /*  for (int  i = 0; i < personas.size(); i++)
                    {
                        cout<<"*******************************************"<<endl;
                        cout<<"Persona: "<<i<<endl;
                        cout<<"Nombre: "<<personas[i]->getNombre;
                        cout<<"*******************************************"<<endl;
                    }*/
                break;

            case 3:
                cout<<"CLIENTES: "<<endl;
                for (int i = 0; i < clientes.size(); i++)
                {
                    cout<<"*******************************************"<<endl;
                        cout<<"Persona: "<<i<<endl;
                        cout<<"Nombre: "<<clientes[i]->getNombre<<endl;
                        cout<<"ID: "<<clientes[i]->getId<<endl;
                        cout<<"Edad: "<<clientes[i]->getEdad<<endl;
                        cout<<"Direccion: "<<clientes[i]->getDireccion<<endl;
                        cout<<"Numero de Telefono: "<<clientes[i]->getNum_telefono<<endl;
                        cout<<"Numero de Tarjeta: "<<clientes[i]->getNum_tarjeta<<endl;
                        cout<<"Numero de Pedidos: "<<clientes[i]->getNum_pedidos<<endl;
                        cout<<"Ganacias: "<<clientes[i]->ganancias<<endl;
                    cout<<"*******************************************"<<endl;
                }
                
                cout<<"REPARTIDORES: "<<endl;
                for (int i = 0; i < repartidores.size(); i++)
                {
                    cout<<"*******************************************"<<endl;
                        cout<<"Persona: "<<i<<endl;
                        cout<<"Nombre: "<<repartidores[i]->getNombre<<endl;
                        cout<<"ID: "<<repartidores[i]->getId<<endl;
                        cout<<"Edad: "<<repartidores[i]->getEdad<<endl;
                        cout<<"Placa de la Moto: "<<repartidores[i]->getPlaca_moto<<endl;
                        cout<<"Zona de Trabajo Preferido: "<<repartidores[i]->getZona_trabajo<<endl;
                        cout<<"Ordenes Atendidas: "<<repartidores[i]->getOrdenes_atendidas<<endl;
                        cout<<"Ganacias: "<<repartidores[i]->ganancias<<endl;
                    cout<<"*******************************************"<<endl;                   
                }

                cout<<"EMPLEADOS DE OFICIONA: "<<endl;
                for (int i = 0; i < empleados.size(); i++)
                {
                        cout<<"*******************************************"<<endl;
                        cout<<"Persona: "<<i<<endl;
                        cout<<"Nombre: "<<empleados[i]->getNombre<<endl;
                        cout<<"ID: "<<empleados[i]->getId<<endl;
                        cout<<"Edad: "<<empleados[i]->getEdad<<endl;
                        cout<<"Horas trabajadas: "<<empleados[i]->getHoras_trabajadas<<endl;
                        cout<<"Local de Trabajo: "<<empleados[i]->getLocal_trabajo<<endl;
                        cout<<"Ordenes Atendidas: "<<empleados[i]->getOrdenes_atendidas<<endl;
                        cout<<"*******************************************"<<endl;                   
                }

                break;

            }//fin switch personas
            break;

        case 2:
            switch (opc2=menu2())
            {
            case 1:
                cout<<"Nombre del Negocio: "<<endl;
                cin>>nombre_negocio;
                cout<<"Ubicacion del Negocio: "<<endl;
                getline(cin, ubicacion);
                cout<<"Numero de Locales: "<<endl;
                cin>>num_locales;
                do
                {
                    cout<<"Nombre del Producto: "<<endl;
                    getline(cin, nombre_pro);
                    cout<<"Tipo: "<<endl
                    <<"1.- Comestible"<<endl
                    <<"2.- No Comestible"<<endl;
                    cin>>opcproducto;
                    if (opcproducto==1)
                    {
                        tipo_pro="Comestible";
                    }

                    if (opcproducto==2)
                    {
                        tipo_pro="No Comestible";
                    }
                    producto = new Producto (nombre, tipo_pro);
                    productos.push_back(producto);
                    cout<<"Agregar Otro Producto?"<<endl
                    <<"1.- Si"<<endl
                    <<"2.- No"<<endl;
                    cin>>mas_producto;
                } while (mas_producto!=2);
                negocio = new NegociosAsociados(nombre_negocio, ubicacion, num_locales, productos);
                negocios.push_back(negocio);
                break;

            case 2:
                for (int  i = 0; i < negocios.size(); i++)
                    {
                        cout<<"*******************************************"<<endl;
                        cout<<"Negocio: "<<i<<endl;
                        cout<<"Nombre: "<<negocios[i]->getNombren;
                        for (int j = 0; j < negocios[i]->getProductos.size(); j++)
                        {
                            cout<<negocios[i]->getProductos[j]<<endl;
                        }
                        
                        cout<<"*******************************************"<<endl;
                    }
                    cout<<"Que posicion desea eliminar? "<<endl;
                    cin>>posicion_eliminar;
                    negocios.erase(negocios.begin()+posicion_eliminar);
                /* for (int  i = 0; i < negocios.size(); i++)
                    {
                        cout<<"*******************************************"<<endl;
                        cout<<"Negocio: "<<i<<endl;
                        cout<<"Nombre: "<<negocios[i]->getNombren;
                        for (int j= 0; j < negocios[i]->getProductos.size(); j++)
                        {
                            cout<<negocios[i]->getProductos[j]<<endl;
                        }
                        
                        cout<<"*******************************************"<<endl;
                    }*/
                break;

            case 3:

                for (int  i = 0; i < negocios.size(); i++)
                    {
                        cout<<"*******************************************"<<endl;
                        cout<<"Negocio: "<<i<<endl;
                        cout<<"Nombre: "<<negocios[i]->getNombren;
                        for (int j= 0; j < negocios[i]->getProductos.size(); j++)
                        {
                            cout<<negocios[i]->getProductos[j]<<endl;
                        }
                        
                        cout<<"*******************************************"<<endl;
                    }
                break;
            }
            break;

        case 3:

            switch (opcorden=menu3())//inicio switch orden
            {
            case 1:

                cout<<"CLIENTES: "<<endl;
                for (int i = 0; i < clientes.size(); i++)
                {
                    cout<<"*******************************************"<<endl;
                        cout<<"Persona: "<<i<<endl;
                        cout<<"Nombre: "<<clientes[i]->getNombre<<endl;
                        cout<<"ID: "<<clientes[i]->getId<<endl;
                    cout<<"*******************************************"<<endl;
                }
                cout<<"Seleccione el cliente: "<<endl;
                cin>>pos_cliente;
                cliente_orden=clientes[pos_cliente];
                cout<<"NEGOCIOS:"<<endl;
                for (int  i = 0; i < negocios.size(); i++)
                    {
                        cout<<"*******************************************"<<endl;
                        cout<<"Negocio: "<<i<<endl;
                        cout<<"Nombre: "<<negocios[i]->getNombren;
                        for (int j= 0; j < negocios[i]->getProductos.size(); j++)
                        {
                            cout<<negocios[i]->getProductos[j]<<endl;
                        }
                        cout<<"*******************************************"<<endl;
                    }
                cout<<"Seleccione el Negocio: "<<endl;
                cin>>pos_negocio;
                negocio_orden=negocios[pos_negocio];
                for (int i = 0; i < repartidores.size(); i++)
                {
                    cout<<"*******************************************"<<endl;
                        cout<<"Persona: "<<i<<endl;
                        cout<<"Nombre: "<<repartidores[i]->getNombre<<endl;
                        cout<<"ID: "<<repartidores[i]->getId<<endl;
                    cout<<"*******************************************"<<endl;                   
                }
                cout<<"Seleccione el Repartidor: "<<endl;
                cin>>pos_repartidor;
                repartidor_orden=repartidores[pos_repartidor];
                cout<<"*******************************************"<<endl;
                        cout<<"Nombre: "<<negocios[pos_negocio]->getNombren;
                        for (int j= 0; j < negocios[pos_negocio]->getProductos.size(); j++)
                        {
                            cout<<"Producto: "<<j<<endl;
                            cout<<negocios[pos_negocio]->getProductos[j]<<endl;
                        }
                        cout<<"*******************************************"<<endl;
                cout<<"Seleccione el Producto: "<<endl;
                cin>>pos_producto;
                producto_orden=negocio_orden->getProductos[pos_producto];
                tipo_seleccionado=producto_orden->getTipo;
                orden = new Orden(cliente_orden, negocio_orden, repartidor_orden, producto_orden, tipo_seleccionado, estado);
                pedidos.push_back(orden);
                suma_cliente=cliente_orden->getNum_pedidos()+1;
                cliente_orden->setNum_pedidos(suma_cliente);
                
                suma_repartidor=repartidor_orden->getOrdenes_atendidas()+1;
                repartidor_orden->setOrdenes_atendidas(suma_repartidor);

                for (int i = 0; i < empleados.size(); i++)
                {
                    suma_empleado=empleados[i]->getOrdenes_atendidas()+1;
                    empleados[i]->setOrdenes_atendidas(suma_empleado);
                }
                
                break;

            case 2:
                cout<<"ORDEN: "<<endl;
                for (int i = 0; i < pedidos.size(); i++)
                {
                    cout<<"*******************************************"<<endl;
                        cout<<"Orden: "<<i<<endl;
                        cout<<"Cliente: "<<pedidos[i]->getCliente<<endl;
                        cout<<"Repartidor: "<<pedidos[i]->getRepartidor<<endl;
                    cout<<"*******************************************"<<endl;
                }
                cout<<"Que numero de orden desea borrar?"<<endl;
                cin>>selec_orden;
                pedidos.erase(pedidos.begin()+selec_orden);
                selec_orden=0;
                break;

            case 3:
            cout<<"ORDEN: "<<endl;
                for (int i = 0; i < pedidos.size(); i++)
                {
                    cout<<"*******************************************"<<endl;
                        cout<<"Orden: "<<i<<endl;
                        cout<<"Cliente: "<<pedidos[i]->getCliente<<endl;
                        cout<<"Repartidor: "<<pedidos[i]->getRepartidor<<endl;
                    cout<<"*******************************************"<<endl;
                }
                cout<<"Que numero de orden desea modificar?"<<endl;
                cin>>selec_orden;
                terminada=pedidos[selec_orden];
                cout<<"Ingrese el nuevo tipo"<<endl;
                cin>>nuevo_tipo;
                terminada->setTipo(nuevo_tipo);
                terminadas.push_back(terminada);
                pedidos.erase(pedidos.begin()+selec_orden);
                selec_orden=0;
                break;
            
            }//fin switch orden
            break;

            case 4:
                for (int i = 0; i < personas.size(); i++)
                {
                    delete personas[i];
                    personas[i] = NULL;
                }
                personas.clear();

                for (int i = 0; i < clientes.size(); i++)
                {
                    delete clientes[i];
                    clientes[i] = NULL;
                }
                clientes.clear();

                for (int i = 0; i < repartidores.size(); i++)
                {
                    delete repartidores[i];
                    repartidores[i] = NULL;
                }
                repartidores.clear();

                for (int i = 0; i < empleados.size(); i++)
                {
                    delete empleados[i];
                    empleados[i] = NULL;
                }
                empleados.clear();

                for (int i = 0; i < negocios.size(); i++)
                {
                    delete negocios[i];
                    negocios[i] = NULL;
                }
                negocios.clear();

                for (int i = 0; i < productos.size(); i++)
                {
                    delete productos[i];
                    productos[i] = NULL;
                }
                productos.clear();

                for (int i = 0; i < pedidos.size(); i++)
                {
                    delete pedidos[i];
                    pedidos[i] = NULL;
                }
                pedidos.clear();

                for (int i = 0; i < terminadas.size(); i++)
                {
                    delete terminadas[i];
                    terminadas[i] = NULL;
                }
                terminadas.clear();
            
                break;

        }//fin switch general
    } while (opc!=4);
    
    return 0;
}

int menu(){
        while(true){
        cout<<"MENU"<<endl
        <<"1.- Personas"<<endl
        <<"2.- Negocios"<<endl
        <<"3.- Orden"<<endl
        <<"4.- Salir"<<endl;
        cout<<"Ingrese una opcion: ";
        int opcion =0;
        cin>>opcion;
        if(opcion>=1 && opcion<= 4){
                return opcion;
          }
          else{

        cout<<"La opcion elegida no es valida, ingrese un valor entre 1 y 4"<<endl;
  }
  }//end del while
        return 0;
}

int menu2(){
        while(true){
        cout<<"MENU"<<endl
        <<"1.- Agregar"<<endl
        <<"2.- Eliminar"<<endl
        <<"3.- Listar"<<endl;
        cout<<"Ingrese una opcion: ";
        int opcion =0;
        cin>>opcion;
        if(opcion>=1 && opcion<= 3){
                return opcion;
          }
          else{

        cout<<"La opcion elegida no es valida, ingrese un valor entre 1 y 3"<<endl;
  }
  }//end del while
        return 0;
}

int menu3(){
        while(true){
        cout<<"MENU"<<endl
        <<"1.- Agregar"<<endl
        <<"2.- Listar"<<endl
        <<"3.- Cambiar Estado"<<endl;
        cout<<"Ingrese una opcion: ";
        int opcion =0;
        cin>>opcion;
        if(opcion>=1 && opcion<= 3){
                return opcion;
          }
          else{

        cout<<"La opcion elegida no es valida, ingrese un valor entre 1 y 3"<<endl;
  }
  }//end del while
        return 0;
}
