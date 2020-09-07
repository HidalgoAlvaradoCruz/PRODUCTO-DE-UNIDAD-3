# RESOLUCIÓN DE PROBLEMAS DE MÁQUINAS DE ESTADO

<br>

**1.PLANTEAMIENTO DEL PROBLEMA**

Se desconoce el funcionamiento,diseño y construcción de máquinas de estado finitos, para lo cual se formularon las siguientes preguntas: 

•	¿Cómo se dibuja un diagrama de estados para una máquina de estado finito  ?

•	¿Cómo se diseña una  tabla de estados para una máquina de estado finito ?

•	¿Cómo se Construye una máquina de estado finito que modele una máquina expendedora de bebidas que acepte monedas varias?

•	¿Cómo se Construye una máquina de estado finito que modele un circuito de riego automático ?
<br>

**2.OBJETIVOS**

**Objetivo general**

Solucionar problemas de máquinas de estados finitos.

**Objetivos específicos**

•	Dibujar diagramas de estados para máquinas de estado finito.

•	Realizar tablas de estados para máquinas de estado finito .

•	Modelar una máquina expendedora de bebidas y un circuito de riego automático mediante máquinas de estado finito. 

<br>

**3.ESTADO DEL ARTE**


**4.MARCO TEÓRICO**

Las maquinas de estado finito FSM, representan una técnica especial de modelado de circuitos lógicos secuenciales; esta conceptuación es de extremada utilidad en el diseño de circuitos donde todas sus funciones pueden ser exactamente listadas, conteniendo todos los posibles estados y sus condiciones para que estos evoluciones de uno a otro estado, con el desarrollo de los sistemas embebidos y su cada vez mayor velocidad, las maquinas de estado finito se han convertido en una poderosa herramienta para el desarrollo de controladores digitales.
Existen dos representaciones fundamentales de las FSM una relacionada con sus especificaciones llamada diagrama de transición de estados y otra relacionada al hardware conocida como de lógica combinacional/secuencial.
Durante esta entrada se brindara los fundamentos de estas técnicas de modelado, la forma como codificar las FSM con lenguaje VHDL y su implementación en los FPGA.

**Sintaxis**

Las máquinas de estado finito se definen como una tupla S A S S sk , , , Σ ⊆ ×Σ× , donde:
• S s s s = { 1 2 , ,..., : m} es un conjunto finito de nodos.
• Σ : es un alfabeto finito de etiquetas.
• A: es un conjunto finito de aristas etiquetadas que unen nodos.
• sk S ∈ : es el estado inicial. 

**Ejemplo**


•〈 S = {1,2,3}
 
• Σ = {a b, }

• A a b a b = {(1, , 2 , 2, ,3 , 3, ,1 , 1, ,3 ) ( ) ( ) ( )} ,

• sk =1 〉

Vale la pena destacar que formalmente la máquina de estado es la tupla anterior y no el
“dibujo”. Este es tan sólo una representación gráfica de la máquina de estado para tener una
más sencilla y rápida visualización de su contenido. 

**Semántica**

Los nodos representan los posibles estados de aquello que se desea modelar. Las etiquetas
representan eventos que provocan un cambio. Las aristas determinan de qué manera cada
estado, dado un evento, deriva en otro estado. 

**Ejemplo**

Suponer que se quiere modelar el comportamiento de una puerta. La puerta,
inicialmente cerrada, puede pasar a estar abierta tras el evento “abrir puerta”. Una vezabierta, puede pasar al estado cerrada, tras el evento “cerrar puerta”. 


**Trazas**

El conjunto de posibles trazas correspondientes a una máquina de estado finitos, se puede
definir en término de grafos, cómo el conjunto de todos los caminos (de ejes) alcanzables
desde el estado inicial.

**Ejemplo**

Dada la FSM de ejemplo:


Las trazas de esta FSM son:
• {a, b, a} correspondiente a 1, 2, 3, 1
• {b, a} correspondiente a 1, 3, 1
• {a, b, a, b, a} correspondiente a 1, 2, 3, 1, 3, 1
• {b, a, a, b, a} correspondiente a 1, 3, 1, 2, 3, 1
• {b, a, b, a, ... , b, a} 1, 3, 1, 3, …, 1, 3
• Etc…

**Deadlock**

Formalmente hablando, una FSM S A S S sk , , , Σ ⊆ ×Σ× , tiene deadlock, si existe algún
nodo s S ∈ , tal que no existen un evento e y un nodo t S ∈ tal que (s e t A , , )∈ . En otras
palabras, si existe algún nodo que no posea “salida” para ningún evento.

**Ejemplo**

El estado 2 no posee salida alguna. 



**Semántica del deadlock**

La existencia de deadlock no necesariamente habla de un mal modelado. Más adelante
veremos que puede ser un efecto no deseado de la composición de FSMs.
Un ejemplo en donde el deadlock no necesariamente “está mal”, podría ser el siguiente:
Queremos modelar un partido de fútbol. Un partido de fútbol, en particular, se organiza, se
juega y finaliza. Y una vez finalizado, ese partido no se juega ni organiza nunca más.
Entonces podríamos modelarlo de la siguiente manera: 











Para diseñar usando FSM el primer paso fundamental es la declaración de todos los posibles estados en los que puede caer el circuito a diseñar, estos se pueden listar, declarando un nombre corto del estado, la salida que debe reflejar en el momento de llegar a el y por supuesto la funciones de evolución de estados, con esta información ya podemos desarrollar una representación formal de la maquina.

**Representación por diagrama de transición de estados**

Esta representación se basa en burbujas que representan el estado e incluyen la salida y flechas curvas que especifican la función de evolución de estados estimulada por las entradas, este diagrama debe ser de naturaleza cerrada y debe considerar una condición para que la maquina alcance su estado inicial, tipicamente este condición debe ser la señal de reinicio Reset.


Los tres diagramas representan la misma maquina, que tiene tres estados. A,B y C, tres entradas: "rst" que representa la señal de RESET, "x" que estimula la evolución de los estados y "clk", la cual no se ve representado en el diagrama pero es implícito ya que estas son unidades secuenciales, por lo que dependen de una señal de reloj, por ultimo se tiene una sola salida llamada "y", es posible observar que el estado inicial de la FSM es A, ya que es el único estimulado por la señal de RESET, la evolución de la maquina depende de la entrada y de la progresión de la señal de reloj, por ultimo son los valores de "x" los que determinan el cambio o no de estado, si bien para el ejemplo de basan en una función constante, estas pueden ser de múltiples tipos segun la necesidad o complejidad del diseño del controlador.

**Diagramas de Hardware de lógica combinacional/secuencial**

La representación de las FSM con esta perspectiva se basa en los dos bloques perfectamente representados: las sección superior conocida como bloque de lógica combinacional y la sección inferior que es el bloque de lógica secuencial, como se observa esta representación ilustra mejor el proceso controlado por el reloj pero no representa claramente el proceso de los estados.


Con esta representación se puede hacer una mejor extrapolación de la maquina completa a VHDL, separando los dos bloque es dos procesos perfectamente codificables para la sección superior de la lógica combinacional y la parte inferior para la lógica secuencial.

Una de las principales limitaciones de la anterior arquitectura, es que la salida generalmente producida por el circuito combinacional puede ser susceptible a fallas transitorias (glitches) que para algunas aplicaciones pueden afectar su rendimiento, si ese fuera el caso es posible corregir este problema agregando un bloque adicional que permita contener el transiente, como lo muestra la siguiente figura:

adicional solamente contiene un flip-flop D que garantiza que tiempo suficiente para que el transiente se supere, es necesario notar que esta adición hace que la salida final se retrase un ciclo respecto a la obtenida por el modelo de controlador.


**5. DIAGRAMAS**

<br>

**A. DIAGRAMA ELÉCTRICO**




**6. MAPA DE VARIABLES**


**7.EXPLICACIÓN DEL CIRCUITO**



**8. DESCRIPCIÓN DE PRERREQUISITOS Y CONFIGURACIÓN**



**10. APORTACIONES**



**11. CONCLUSIONES**

En conclusión:



**12. RECOMENDACIONES**



**13. CRONOGRAMA**



**14. BIBLIOGRAFÍA**



**15. ANEXOS**

**15.1. MANUAL DE USUARIO**



**15.2. HOJAS TÉCNICAS**

![](https://github.com/HidalgoAlvaradoCruz/PRODUCTO-DE-UNIDAD-2/blob/master/img/img34.png)


