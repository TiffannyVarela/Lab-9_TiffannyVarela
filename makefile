main.out: main.o Orden.o Persona.o EmpleadoOficina.o Clientes.o Repartidor.o Producto.o NegociosAsociados.o
	g++ main.o Orden.o Persona.o EmpleadoOficina.o Clientes.o Repartidor.o Producto.o NegociosAsociados.o -o main.out
main.o: main.cpp Orden.cpp Persona.cpp EmpleadoOficina.cpp Clientes.cpp Repartidor.cpp Producto.cpp NegociosAsociados.cpp
	g++ -c main.cpp