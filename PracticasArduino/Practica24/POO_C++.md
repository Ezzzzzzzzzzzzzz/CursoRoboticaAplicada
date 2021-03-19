# Programación orientada a objetos (POO) en C++

El paradigma de programación orientada a objetos es una metodología especial de programación de software en la que un programa informático se diseña como la interrelación entre un conjunto de instancias conocidas como objetos. Dichos objetos son entidades que tienen un estado que está descrito por sus variables internas que se conocen como atributos o propiedades; y que tienen comportamientos que están plasmados en funciones o métodos que se utilizan para manipular las variables que describen el estado del objeto.

Los objetos que tienen estado y comportamiento idénticos se agrupan o clasifican en "clases".

**La programación orientada a objetos ofrece los conceptos de encapsulamiento, abstracción, herencia y polimorfismo.**

## Clases y Objetos en C++

### Clases
Una **clase puede pensarse como una colección de variables (atributos o propiedades) y funciones (métodos) que permiten representar un conjunto de datos y especificar las operaciones o procedimientos que permiten manipular tales datos**. Se puede inclusive entender una clase como un tipo de dato personalizado, similar a las estructuras (`structs`), donde cada programador define los miembros que va a tener su tipo de dato. De hecho, los tipos de dato nativos de C++ son en realidad clases.

### Objetos
Un **objeto es una instancia de una clase, es decir una entidad que se construye a partir de las descripciones consignadas en una clase (datos y funciones)**. Por tanto, un objeto se puede entender como una "variable" que se declara del tipo de dato de cierta clase. **Un objeto es como tal la entidad tangible que permite acceder a los datos y funciones modeladas al interior de la clase**

Una analogía para entender las clases y los objetos puede ser una fabrica ensambladora de carros. 
> - Hay un **modelo o diseño (clase)** especifico de un auto, pero este modelo en si no es un carro, es solo una descripción de que características y funcionalidades deben tener los carros que sean de ese modelo. 
> - **Los carros ensamblados en la fabrica de acuerdo a dicho modelo serían los objetos**, es decir entidades tangibles que se construyeron a partir de las descripciones y especificaciones consignadas en el diseño o modelo (o sea la clase).

| Clase: | Objeto: |
| :-----------: | :---------: | 
|  ![clase](https://i.pinimg.com/474x/fc/02/a9/fc02a954d72ad6b75828b61f6d316d81.jpg)  | ![objeto](https://hips.hearstapps.com/hmg-prod.s3.amazonaws.com/images/lamborghini-aventador-svj-roadster-1579720277.jpg?crop=0.763xw:0.572xh;0.237xw,0.318xh&resize=640:*) |   

Para declarar una clase en C++ se utiliza la palabra reservada `class`, se da un nombre a la clase y luego entre llaves se declaran los miembros de la clase. **En general, las clases se declaran en bibliotecas (librerías) individuales cuyo nombre es usualmente el mismo nombre de la clase.**

```C++
class MiClase {
	//Aqui van los miembros de la clase: Varables y Funciones
}; //<------ No olvidar el ;
```


 















Fuente:[https://www.codingame.com/](https://www.codingame.com/playgrounds/50557/clases-y-objetos-en-c-practica-1/clases-y-objetos-en-c)
<!--stackedit_data:
eyJoaXN0b3J5IjpbMTg0ODg1MjY4MywtMTUxNzMxNjgzMF19
-->