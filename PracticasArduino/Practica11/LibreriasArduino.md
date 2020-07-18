# Librerías Arduino

**Las librerías son trozos de código reutilizables hechos por terceros que usamos en nuestro sketch**. Esto nos facilita mucho la programación y hace que nuestro programa sea más sencillo de hacer y de entender. 

**Las librerías son entre otras cosas colecciones de código que facilitan la interconexión de sensores, pantallas, módulos electrónicos, etc.** El entorno de arduino ya incluye algunas librerías de manera que facilita, por ejemplo, mostrar texto en pantallas LCD.

Cuando compramos un sensor o un dispositivo nuevo es importante ver la librería que necesitamos para manejarlos. 

Existen infinidad de librerías desarrolladas por terceros en internet con sus correspondientes **forks**, que nos ayudarán a conectar prácticamente cualquier dispositivo a los Arduinos de forma muy sencilla o hacer tareas de programación complejas.

## Estructura de una Librería Arduino

Las librerías incluyen los siguientes archivos comprimidos en un archivo ZIP o dentro de un directorio:

>-   Un archivo .cpp (código de C++). Al menos uno pero puede haber más.
>-   Un archivo .h o encabezado de C (header), que contiene las propiedades y métodos o funciones de la librería. Cada archivo .cpp tiene su correspondiente archivo .h. Al menos uno pero puede haber más.
->   Un archivo Keywords.txt, que contiene las palabras clave que se resaltan en el IDE (opcional).
>-   Un archivo README.md con información adicional de lo que hace y con instrucciones de como usarla. (opcional)
>-   Directorio denominado examples con varios sketchs de ejemplo que nos ayudará a entender cómo usar la librería (opcional).
>-   Adicionalmente puede haber otros archivos menos importantes como el de la licencia y otros.

## Instalación de Librerías

Hay varios métodos de instalar librerías:

-   **Desde el gestor de librerías**. A partir de la versión 1.6.2 del IDE de Arduino se incorpora el gestor de librerías que facilita el trabajo. 

Esta herramienta es accesible desde **Programa → Incluir Librería → Gestionar Librerías**. Desde aquí podemos ver las librerías instaladas, buscar librerías disponibles, instalar librerías y actualizarlas.  

Esta herramienta también nos permite gestionar las librerías instaladas manualmente.  

![](https://i1.wp.com/www.arduino.cc/en/uploads/Guide/LibraryManager_3.png)

-   **Mediante el IDE de Arduino de forma automática**. Admite la instalación desde un fichero zip o desde una carpeta ya descomprimida. Es el método adecuado para aquellas librerías que no están disponibles desde el gestor de librerías.

![](https://aprendiendoarduino.files.wordpress.com/2015/03/instalar-libreria.png?w=496)

-   **Instalación Manual**. Descomprimiendo en un directorio la librería y copiandolo en el directorio de librerías. Generalmente es el directorio **Mis Documentos – Arduino – libraries**. Aquí se guardan las librerías contribuidas por el usuario como lo denomina el IDE.  

En caso de instalación manual, es necesario reiniciar el IDE antes de poder utilizar la librería.

El propio IDE de Arduino ya trae integradas varias librerías, pero además podemos descargar otras e incorporarlas a nuestro IDE y luego usarlas en nuestros programas.

La librerías instaladas por nosotros por cualquiera de los métodos anteriores, se guardan en el directorio indicado desde las preferencias del IDE.

![](https://aprendiendoarduino.files.wordpress.com/2016/03/2016-03-19-7.png?w=625)


La librerías incluidas en el IDE tienen ejemplos para comprender su uso. 

Por ejemplo, la librería para trabajar con pantallas LCD. En este enlace está la documentación para el uso de esta librería así como los métodos que nos facilita para trabajar con este tipo de pantallas: [http://arduino.cc/en/Reference/LiquidCrystal](http://arduino.cc/en/Reference/LiquidCrystal)


## Incluir Librerías en Sketch

**IMPORTANTE**: Para añadir una librería a nuestro proyecto simplemente se añade a nuestro código la palabra clave #include seguido del nombre de la librería.

![](https://aprendiendoarduino.files.wordpress.com/2017/06/64e71-library_memory_use.png?w=625)

Esto también se puede hacer desde el IDE en el menú Programa – Incluir Librería y seleccionar la librería que deseamos incluir y está instalada.

**Generalmente cada dispositivo que compramos, shield, sensor, actuador, etc… viene con su propia librería que debemos instalar para poder usarlo. Estas librerías podemos verlas, modificarlas o incluso añadir funcionalidades**.

<!--stackedit_data:
eyJoaXN0b3J5IjpbLTYyMTEzNDk2Ml19
-->