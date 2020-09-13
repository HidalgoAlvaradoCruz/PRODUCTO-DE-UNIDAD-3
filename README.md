# RESOLUCIÓN DE PROBLEMAS DE MÁQUINAS DE ESTADO FINITO

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

<br>

En 2002, Mikael Kerttu, Per Lindgren, Mitch Thomton y Rolf Drechsler en su estudio sobre la Estimación de la actividad de conmutación de máquinas de estados finitos para síntesis de baja potencia, en su investigaión se describe una técnica para calcular la actividad de conmutación de implementaciones de máquinas de estados finitos síncronas (FSM) que incluye la influencia de la correlación temporal entre las siguientes señales de estado. El enfoque se basa en el cálculo de que una FSM se encuentra en un estado dado que, a su vez, se usa para calcular la probabilidad condicional de que el siguiente bit de estado cambie dado su valor de estado actual. Todos los cálculos se realizan utilizando estructuras de datos de diagrama de decisión (DD). Como una aplicación de este método, la siguiente información de actividad de estado se utiliza para la optimización de baja potencia en la síntesis de circuitos mapeados con diagramas de decisión binaria (BDD). (Kerttu, M., Lindgren, P., Thornton, M. y Drechsler, R., 2002, p.1) [1].

<br>

Miroshnyk, M., Shkil, A., Kulak, E., Rakhlis, D., Filippenko, I. y Miroshnyk, A. miembros de la asociación de profesores KnNURE Kharkiv, Ucrania en 2020 implementaron un sistema para la Verificación de los sistemas de control FPGA mediante el análisis de la corrección de los diagramas de estado. El trabajo está dedicado a la verificación de los sistemas de control lógico automático mediante el análisis de la corrección de los diagramas de estado de las máquinas de control de estados finitos que se representan en forma de código en el lenguaje de descripción del hardware. Como método para el análisis de diagramas de estados, se propone utilizar el concepto de ortogonalidad, como un sistema de eventos incompatibles. El análisis de la corrección se lleva a cabo mediante el análisis de los resultados del modelado de comportamiento y la síntesis lógica utilizando herramientas CAD. (Miroshnyk M., Shkil A., Kulak, 2020, p.1) [2].

<br>

En 2002, Ming-Der Shieh, Wann-Shyang Ju y Ming-Hwa Sheu miembros del Departamento de Ingeniería Electrónica del Instituto Nacional de Tecnología de Yunlin, Taiwán presentarón un artículo sobre la Asignación de estado de bajo consumo para máquinas de estado finito asíncronas, en este artículo se presenta un modelo preciso para calcular las probabilidades de estado estable y las probabilidades de transición de estado de las máquinas de estado finito asíncronas (AFSM). Sobre la base de este modelo y el diagrama de adyacencia ponderado derivado, se propone una técnica de asignación de estado sin carrera unicode eficiente para minimizar la actividad de conmutación promedio de las variables de estado, y así reducir potencialmente la disipación de potencia promedio en AFSM. (Ming-Der Shieh, Wann-Shyang Ju, 2002, p.1) [3].

<br>

En 2018, Daniel Rivas, Pragna Das, Joaquín Saiz-Alcaine y Lluís Ribas-Xirgo miembros del Departamento de Microelectrónica y Sistemas electrónicos de la Universidad Autònoma de Barcelona, España realizaron un artículo sobre la Síntesis de controladores a partir de diagramas de máquina de pila de estados finitos. En este artículo, combinan máquinas de estados finitos extendidos (EFSM) con pilas de estados. Si bien EFSM coincide con la mayoría de las plantillas de diseño, las máquinas de pila de estado finito extendidas (EFS2M) se adaptan a arquitecturas de agentes de procedimiento para módulos en niveles de abstracción más altos de las redes de los controladores. (Daniel Rivas, Pragna Das, 2018, p.1) [4].

<br>

Para el presente producto de unidad, se utilizó Creately que es un programa para crear diagramas de flujo aplicando la temática y conceptos básicos de las máquinas de estado. (Miroshnyk M., Shkil A., Kulak, 2020, p.1), el análisis y el diseño de una máquina de estado finito utiliza módulos en niveles de abstracción (Daniel Rivas, Pragna Das, 2018, p.1) . 

<br>

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

![](https://github.com/HidalgoAlvaradoCruz/PRODUCTO-DE-UNIDAD-3/blob/master/img/img4.png)


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


![](https://github.com/HidalgoAlvaradoCruz/PRODUCTO-DE-UNIDAD-3/blob/master/img/img5.png)

**Trazas**

El conjunto de posibles trazas correspondientes a una máquina de estado finitos, se puede
definir en término de grafos, cómo el conjunto de todos los caminos (de ejes) alcanzables
desde el estado inicial.

**Ejemplo**

Dada la FSM de ejemplo:


![](https://github.com/HidalgoAlvaradoCruz/PRODUCTO-DE-UNIDAD-3/blob/master/img/img6.png)


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


![](https://github.com/HidalgoAlvaradoCruz/PRODUCTO-DE-UNIDAD-3/blob/master/img/img7.png)


**Semántica del deadlock**

La existencia de deadlock no necesariamente habla de un mal modelado. Más adelante
veremos que puede ser un efecto no deseado de la composición de FSMs.
Un ejemplo en donde el deadlock no necesariamente “está mal”, podría ser el siguiente:
Queremos modelar un partido de fútbol. Un partido de fútbol, en particular, se organiza, se
juega y finaliza. Y una vez finalizado, ese partido no se juega ni organiza nunca más.
Entonces podríamos modelarlo de la siguiente manera: 

![](https://github.com/HidalgoAlvaradoCruz/PRODUCTO-DE-UNIDAD-3/blob/master/img/img8.png)

Para diseñar usando FSM el primer paso fundamental es la declaración de todos los posibles estados en los que puede caer el circuito a diseñar, estos se pueden listar, declarando un nombre corto del estado, la salida que debe reflejar en el momento de llegar a el y por supuesto la funciones de evolución de estados, con esta información ya podemos desarrollar una representación formal de la maquina.

**Representación por diagrama de transición de estados**

Esta representación se basa en burbujas que representan el estado e incluyen la salida y flechas curvas que especifican la función de evolución de estados estimulada por las entradas, este diagrama debe ser de naturaleza cerrada y debe considerar una condición para que la maquina alcance su estado inicial, tipicamente este condición debe ser la señal de reinicio Reset.


Los tres diagramas representan la misma maquina, que tiene tres estados. A,B y C, tres entradas: "rst" que representa la señal de RESET, "x" que estimula la evolución de los estados y "clk", la cual no se ve representado en el diagrama pero es implícito ya que estas son unidades secuenciales, por lo que dependen de una señal de reloj, por ultimo se tiene una sola salida llamada "y", es posible observar que el estado inicial de la FSM es A, ya que es el único estimulado por la señal de RESET, la evolución de la maquina depende de la entrada y de la progresión de la señal de reloj, por ultimo son los valores de "x" los que determinan el cambio o no de estado, si bien para el ejemplo de basan en una función constante, estas pueden ser de múltiples tipos segun la necesidad o complejidad del diseño del controlador.

![](https://github.com/HidalgoAlvaradoCruz/PRODUCTO-DE-UNIDAD-3/blob/master/img/img1.png)

**Diagramas de Hardware de lógica combinacional/secuencial**

La representación de las FSM con esta perspectiva se basa en los dos bloques perfectamente representados: las sección superior conocida como bloque de lógica combinacional y la sección inferior que es el bloque de lógica secuencial, como se observa esta representación ilustra mejor el proceso controlado por el reloj pero no representa claramente el proceso de los estados.


![](https://github.com/HidalgoAlvaradoCruz/PRODUCTO-DE-UNIDAD-3/blob/master/img/img2.png)

Con esta representación se puede hacer una mejor extrapolación de la maquina completa a VHDL, separando los dos bloque es dos procesos perfectamente codificables para la sección superior de la lógica combinacional y la parte inferior para la lógica secuencial.

Una de las principales limitaciones de la anterior arquitectura, es que la salida generalmente producida por el circuito combinacional puede ser susceptible a fallas transitorias (glitches) que para algunas aplicaciones pueden afectar su rendimiento, si ese fuera el caso es posible corregir este problema agregando un bloque adicional que permita contener el transiente, como lo muestra la siguiente figura:

adicional solamente contiene un flip-flop D que garantiza que tiempo suficiente para que el transiente se supere, es necesario notar que esta adición hace que la salida final se retrase un ciclo respecto a la obtenida por el modelo de controlador.


![](https://github.com/HidalgoAlvaradoCruz/PRODUCTO-DE-UNIDAD-3/blob/master/img/img3.png)



**5. DIAGRAMAS - MAPA DE VARIABLES - EXPLICACIÓN DE LOS PROBLEMAS**

1. Dibuje el diagrama de estados para la máquina de estado finito cuya tabla de estados es la siguiente.
Partiendo del estado s0, calcula la salida para la cadena de entrada 1000110.

![](https://github.com/HidalgoAlvaradoCruz/PRODUCTO-DE-UNIDAD-3/blob/master/img/img13.png)

2. Dibuje el diagrama de estados para la máquina de estado finito cuya tabla de estados es la siguiente.
Partiendo del estado inicial s0, calcula la salida para la cadena de entrada abbccc.

![](https://github.com/HidalgoAlvaradoCruz/PRODUCTO-DE-UNIDAD-3/blob/master/img/img16.png)

3. Halle la tabla de estados para la máquina de estado finito cuyo diagrama de estados es:

![](https://github.com/HidalgoAlvaradoCruz/PRODUCTO-DE-UNIDAD-3/blob/master/img/img11.png)

4. Construya una máquina de estado finito que modele una máquina expendedora de bebidas que acepta
monedas de 5, 10 y 20 centavos. La máquina acepta monedas hasta que se introducen 25 centavos y devuelve
cualquier cantidad que supere los 25 céntimos. Entonces, el cliente puede pulsar los botones y elegir una
bebida de cola (C), cerveza (Z) o agua (A).

5. Construya una máquina de estados finito que modele un circuito de riego automático como el mostrado
en la figura. El circuito deberá accionar la bomba en las siguientes condiciones:
a. El circuito accionará la bomba solamente cuando la tierra esté seca, pero antes debe comprobar
las siguientes condiciones:

i. Para evitar que la bomba se estropee por funcionar en vacío, nunca se accionará la
bomba cuando el depósito de agua esté vacío.

ii. Si hay restricciones en el riego (época de verano), sólo se podrá regar de noche.

iii. En el resto del año (si no hay restricciones) se podrá regar de día y de noche (si la tierra
está seca).

b. Para la implementación del circuito se dispone de las siguientes entradas:

i. S: Señal que indica si la tierra está seca: Tierra seca: S=1; Tierra húmeda: S=0

ii. R: Señal que indica si hay restricciones en el riego (es verano): Hay restricciones: R=1
No hay restricciones: R=0

iii. D: Señal que indica si es de día o de noche: Día: D=1; Noche: D=0

iv. V: Señal que indica si el depósito de agua está vacío: Vacío: V=1; Hay agua: V=0

c. Y la salida B, que accionará la bomba para regar: Bomba funcionando: B=1; Bomba apagada
B=0.

![](https://github.com/HidalgoAlvaradoCruz/PRODUCTO-DE-UNIDAD-3/blob/master/img/img12.png)

**8. DESCRIPCIÓN DE PRERREQUISITOS Y CONFIGURACIÓN**



**10. APORTACIONES**



**11. CONCLUSIONES**

En conclusión:



**12. RECOMENDACIONES**



**13. CRONOGRAMA**



**14. BIBLIOGRAFÍA**

<br>

[1] Kerttu, M., Lindgren, P., Thornton, M. y Drechsler, R. (nd). Estimación de la actividad de conmutación de máquinas de estados finitos para síntesis de baja potencia. 2002 Simposio Internacional IEEE sobre Circuitos y Sistemas. Procedimientos (Cat. No 02CH37353). doi: 10.1109 / iscas.2002.1010389 

[2] Miroshnyk, M., Shkil, A., Kulak, E., Rakhlis, D., Filippenko, I. y Miroshnyk, A. (2020). Verificación de los sistemas de control FPGA mediante el análisis de la corrección de los diagramas de estado. 2020 IEEE 11th International Conference on Dependable Systems, Services and Technologies (DESSERT). doi: 10.1109 / postre50317.2020.9125067 


[3] Ming-Der Shieh, Wann-Shyang Ju y Ming-Hwa Sheu. (Dakota del Norte). Asignación de estado de bajo consumo para máquinas de estado finito asíncronas. Actas del 39º Simposio del Medio Oeste sobre circuitos y sistemas. doi: 10.1109 / mwscas.1996.593176 


[4] Rivas, D., Das, P., Saiz-Alcaine, J. y Ribas-Xirgo, L. (2018). Síntesis de controladores a partir de diagramas de máquina de pila de estados finitos. 2018 IEEE 23rd International Conference on Emerging Technologies and Factory Automation (ETFA). doi: 10.1109 / etfa.2018.8502451 



**15. ANEXOS**

**15.1. MANUAL DE USUARIO**


