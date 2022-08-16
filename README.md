# Parallel and distributed computing

## *Programacion modular en c*

Se realiza el desarrollo de ejercicios planteados en el lenguaje c usando el paradigma de la programación modular el cual consiste en dividir un programa en distintos subprogramas independientes. De esta forma el software principal se vuelve más fácil de manejar. Además, los subprogramas resultantes del programa principal pueden también ser divididos en subprogramas más pequeños aún. Básicamente el paradigma permite en principio dividir la complejidad de un problema en clases o módulos los cuales en principio deben cumplir con el principio de responsabilidad única, gracias a esto se puede reutilizar el código usando las funciones o módulos de un programa en cualquier otro. En el proceso de segmentación los módulos se integran entre sí de manera jerárquica para conformar el programa que se está desarrollando.

El desarrollo del programa esta compuesto por dos interfaces, una para las funciones (**`taller_c_func_lib.h`**) y otra para las operaciones con matrices (**`matricial_func_lib.h`**).
El diseño de funciones (**`taller_c_func.c`**) esta conformado por 10 métodos, uno para cada ejercicio, ademas, posee un menu de opciones para navegar por las diferentes funcionalidades del programa. Por otra parte, el diseño de operaciones matriciales (**`matricial_func.c`**) cuenta con los metodos de operaciones aritmeticas, asi como la responsabilidad de la inicializacion e impresion de matrices.

Para relizar la compilacion del programa se usara make la cual es una herramienta de gestión de dependencias, típicamente, las que existen entre los archivos que componen el código fuente de un programa, para dirigir su recompilación o "generación" automáticamente mediante el **`Makefile`**.

Prerequisitos conpilacion en linux: Instalacion Build-Essentials

`sudo apt install build-essentials`

Los paquetes build-essentials son metapaquetes que son necesarios para compilar software. Incluyen el depurador GNU, la colección de compiladores g++/GNU y algunas herramientas y bibliotecas más que se requieren para compilar un programa. Por ejemplo, si necesita trabajar en un compilador C/C++, debe instalar metapaquetes esenciales en su sistema antes de iniciar la instalación del compilador C. Al instalar los paquetes build-essential, algunos otros paquetes como G++, dpkg-dev, GCC y make, etc. también se instalan en su sistema.

Paso a paso con git:

* Clonar repositorio: git clone https://github.com/jchaves1406/Parallel-and-Distributed-Computing.git

Compilar:

* Ir a la ruta del directorio y compilar con make:

`make taller_c_project`

`./taller_c_project`

