# El IDE (Entorno de Desarrollo Integrado) de Arduino

Ahora veremos brevemente cómo emplear el **IDE de Arduino**, ya que es muy simple de usar, el IDE consta de una barra de herramientas que son:
	 
- Archivo.
- Editar.
- Programa.
- Herramientas.
- Ayuda.

En **Archivo** tenemos las clásicas opciones de cualquier editor, como _guardar, nuevo archivo, ejemplos, en esta opción vienen ejemplos de
programación que Arduino ha puesto, también tiene opciones como imprimir y preferencias_.

En **Editar** _podemos configurar la letra tipo sangría, el modo de texto, formato, buscar, comentar_.

En **Programa** tenemos las opciones de _compilar, subir, incluir librería, subir con programador_. En esta sección la que más nos interesa es la de incluir librería.

En **Herramientas** tenemos las opciones de _autoformato, monitor serie, serial plotter, placa, procesador, puerto, programador y otras más, las que nos interesan son placa, procesador y puerto, ya que en la opción placa seleccionaremos el tipo de Arduino que tenemos (el que estamos conectando), en la opción puerto seleccionaremos el puerto donde está conectada nuestra placa **COM1**, **COM2**, etc., en procesador seleccionaremos qué tipo de microcontrolador tiene nuestra placa, o sea el modelo o versión_.

Ya dentro del editor tenemos **setup()** y **loop()**, en **setup configuraremos la inicialización de los pines y todo lo que queramos que se inicie por primera vez**, y en **loop estará en nuestro programa de ejecución**, además **arriba de setup irán nuestras variables globales, los define, y las librerías a usar y debajo de loop nuestros métodos o funciones**.

Aquí tenemos una imagen del IDE:

![IDEArduino](https://github.com/Ezzzzzzzzzzzzzz/CursoRoboticaAplicada/blob/master/Arduino/IDEArduino.JPG)


<!--stackedit_data:
eyJoaXN0b3J5IjpbLTE4NTAzMDY5MTRdfQ==
-->