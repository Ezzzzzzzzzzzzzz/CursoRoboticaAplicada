# Miembros de clase en C++: Variables y Métodos

**Las variables de clase en C++ son datos de distinto tipo que sirven para describir el estado actual de un objeto de esa clase**. Se declaran al interior de una clase de la misma forma en que se declaran variables en una aplicación convencional de C++. Es decir, tipo de dato (calificadores opcionales), nombre para la variable y un valor inicial opcional.

**Los métodos de una clase son funciones que sirven para manipular las variables de la clase, de ahí viene la primera característica relevante de la programación orientada a objetos que es el `encapsulamiento`, ya que en lo posible se va a tratar de que solo pueda accederse a una variable de clase a través de un método de la clase**. 

Los métodos se declaran y definen de la misma manera que una función cualquiera en una aplicación convencional de C++, dicho de otro modo, en su firma expresan el tipo del valor de retorno, un nombre para el método y una lista de parámetros de entrada. 

**Usualmente se hace la declaración de los métodos al interior de la clase, mientras que la definición se hace por fuera de la clase ayudándose del operador de resolución de ámbito `::` para indicar que el método que se está definiendo pertenece a la clase en cuestión.**
```c++
class MiClase{
	int var1; //Variable de clase
	const double var2 = 3.416; //Variable de clase
	
	void cambiarVar1(int a){ //Declaración de un metodo de clase
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




Fuente:[https://www.codingame.com/](https://www.codingame.com/playgrounds/50557/clases-y-objetos-en-c-practica-1/clases-y-objetos-en-c)
<!--stackedit_data:
eyJoaXN0b3J5IjpbNTgzNjUwNzk5LDYzMDg3OTkwOCwtOTA2Mz
Y2MDEzLDExNjQwNjE4OTIsLTEyNTk1Mzc0NDFdfQ==
-->