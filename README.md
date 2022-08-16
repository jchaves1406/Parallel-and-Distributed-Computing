# Parallel and distributed computing

## *Programacion modular en c*

Se realiza el desarrollo de ejercicios planteados en el lenguaje c usando el paradigma de la programación modular el cual consiste en dividir un programa en distintos subprogramas independientes. De esta forma el software principal se vuelve más fácil de manejar. Además, los subprogramas resultantes del programa principal pueden también ser divididos en subprogramas más pequeños aún. Básicamente el paradigma permite en principio dividir la complejidad de un problema en clases o módulos los cuales en principio deben cumplir con el principio de responsabilidad única, gracias a esto se puede reutilizar el código usando las funciones o módulos de un programa en cualquier otro. En el proceso de segmentación los módulos se integran entre sí de manera jerárquica para conformar el programa que se está desarrollando.

Para relizar la compilacion del programa se usara Make para generar la compilacion modular.

El desarrollo del programa esta compuesto por dos interfaces, una para las funciones (**`taller_c_func_lib.h`**) y otra para las operaciones con matrices (**`matricial_func_lib.h`**).
El diseño de funciones esta conformado por 10 métodos, uno para cada ejercicio, ademas, posee un menu de opciones para navegar por las diferentes funcionalidades del programa. Por otra parte, el diseño de operaciones matriciales cuenta con los metodos de operaciones aritmeticas, asi como la responsabilidad de la inicializacion e impresion de las matrices.


