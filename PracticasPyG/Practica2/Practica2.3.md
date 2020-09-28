# Moviéndose en todas direcciones P.2

**¿Qué pasa con nuestras formas cuando se salen de un borde y ya no están en nuestra pantalla? ¿Han desaparecido para siempre?**

La respuesta es no. 

Puede pensar en nuestra ventana como una ventana real en su casa. Si miras por la ventana y ves a un peatón que luego se mueve más abajo en la calle para que ya no puedas verlo, no ha dejado de existir. Están más allá de su línea de visión. 

**Si nuestras formas se mueven más a lo largo de nuestra pantalla para que ya no podamos verlas, no dejan de moverse ni desaparecen, siguen adelante para siempre o hasta que les dices que se detengan y regresen.**

### **Cambie la tercera línea en el `fragmento 03` para que lea `blueSquareVX = 8`, cambie la penúltima línea en el `fragmento 03` a `blueSquareVX -= 0.2` y comente la última línea.** 
Ahora, cuando ejecutamos el `fragmento 03` por última vez, vemos que nuestro cuadrado se mueve hacia la derecha a través de nuestra pantalla, antes de reducir la velocidad hasta detenerse y luego volver sobre sí mismo, formando una animación de arco. 

Esto se debe a que la variable blueSquareVX ha ingresado números negativos, pero la variable blueSquareVY continúa aumentando. Si hubiéramos restado las variables VX y VY en valores iguales, con velocidades iniciales iguales (tanto VX como VY son 8, por ejemplo), nuestras formas habrían continuado a lo largo de su camino, se detuvieron y luego se habrían invertido exactamente en el mismo camino, con la misma tasa de aceleración que desaceleró. Juega con estos valores para ver qué efecto tienen en cómo se mueve nuestra forma. Si lo desea, puede comentar la línea surface.fill y verá el camino que toma nuestra forma detrás de ella.


<!--stackedit_data:
eyJoaXN0b3J5IjpbLTQ0OTE0NDU5Ml19
-->