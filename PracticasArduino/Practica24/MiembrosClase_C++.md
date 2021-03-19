# Miembros de clase en C++: Variables y Métodos

**Las variables de clase en C++ son datos de distinto tipo que sirven para describir el estado actual de un objeto de esa clase**. Se declaran al interior de una clase de la misma forma en que se declaran variables en una aplicación convencional de C++. Es decir, tipo de dato (calificadores opcionales), nombre para la variable y un valor inicial opcional.

**Los métodos de una clase son funciones que sirven para manipular las variables de la clase, de ahí viene la primera característica relevante de la programación orientada a objetos que es el `encapsulamiento`, ya que en lo posible se va a tratar de que solo pueda accederse a una variable de clase a través de un método de la clase**. 

Los métodos se declaran y definen de la misma manera que una función cualquiera en una aplicación convencional de C++, dicho de otro modo, en su firma expresan el tipo del valor de retorno, un nombre para el método y una lista de parámetros de entrada. 

**Usualmente se hace la declaración de los métodos al interior de la clase, mientras que la definición se hace por fuera de la clase ayudándose del operador de resolución de ámbito `::` para indicar que el método que se está definiendo pertenece a la clase en cuestión.**
```c++
class MiClase{
	int var1; //Variable de clase
	const double var2 = 3.1416; //Variable de clase
	
	void cambiarVar1(int a); //Declaración de un metodo de clase
	double calcularArea(const double& x, const double& y); //Declaración de un metodo de clase
};

void MiClase::cambiarVar1(int a){ //Definición del metodo por fuera de la clase
	var1 = a;
}
double MiClase::calcularArea(const double& x,const double& y){ //Definición del metodo por fuera de la clase
	return x*y*var2;
}
```
## Encapsulamiento y nivel de acceso a miembros de la clase

El acceso a los miembros de una clase solo puede lograrse a través de una instancia de esa clase, es decir, de un objeto de dicha clase. De modo que para acceder a un miembro en específico de una clase se llama al objeto recién declarado y con ayuda del operador punto `.` se hace el llamado a la variable o método al cual se requiere acceder.

```c++
int main(){
	MiClase miObjeto;	//Declarando un objeto de la clase
	
	miObjeto.cambiarVar1(5);
	double var = miObjeto.calcularArea(34.6, 23.9); //Accediendo a un miembro con el operador punto 
}
```
### Acceso público (public) y acceso privado (private)
De momento se va a hacer enfasis en los niveles de acceso público y privado. 

>- El nivel de acceso **público** se expresa en la declaración de la clase con la palabra reservada `public` y permite que un miembro de clase sea accedido directamente a través del operador punto, usualmente los métodos de una clase tienen este nivel acceso. 
>- El nivel de acceso **privado** permite la ocultación de ciertos miembros de la clase y restringe el acceso a dichos miembros a solo otros miembros de la misma clase, es decir solo puede accederse a un miembro privado de una clase mediante un miembro público que acceda directamente a ese miembro. **En este caso, al hacer un llamado directo del miembro privado con el operador punto resultará en un error de compilación de la aplicación.** EL nivel de acceso privado es el nivel de acceso por defecto de los miembros de una clase en C++ y se expresa con el uso de la palabra reservada `private`.





Fuente:[https://www.codingame.com/](https://www.codingame.com/playgrounds/50557/clases-y-objetos-en-c-practica-1/clases-y-objetos-en-c)
<!--stackedit_data:
eyJoaXN0b3J5IjpbLTg0MTk5NDUxNiwtMTk2NTkwMTQ3Myw5Mz
M5ODcyNjYsLTc3MTU3MjYwMiwtNDc3ODE5NjUsNTgzNjUwNzk5
LDYzMDg3OTkwOCwtOTA2MzY2MDEzLDExNjQwNjE4OTIsLTEyNT
k1Mzc0NDFdfQ==
-->